<?php

// $Id$

/**
 * @file
 * Admin forms and callbacks for the CCK Sign-up module.
 */

/**
 * Validation callback for node_type_form.
 */
function cck_signup_form_node_type_form_validate($form, &$form_state) {
  if ($form_state['values']['cck_signup_type'] && !$form_state['values']['cck_signup_field']) {
    form_set_error('cck_signup_field', t('Must select a reference field if sign-ups are enabled for this node type.'));
  }
}

/**
 * Set the signup-node type.
 */
function cck_signup_form_node_type_form_submit($form, &$form_state) {
  if ($form_state['values']['cck_signup_field']) {
    $type_info = _content_type_info();
    foreach ($type_info['content types'] as $type_name => $type) {
      if (in_array($form_state['values']['cck_signup_field'], array_keys($type['fields']))) {
        variable_set('cck_signup_signup_type_' . $type_name, $form_state['values']['cck_signup_field']);
      }
    }
  }
}

/**
 * Get nodereference fields pointing back at $type.
 */
function _cck_signup_nodereference_fields($type) {
  $options = array();
  $fields = content_fields();
  foreach ($fields as $field) {
    if ($field['type'] == 'nodereference' && in_array($type, $field['referenceable_types'])) {
      $options[$field['field_name']] = $field['widget']['label'];
    }
  }
  return $options;
}

/**
 * Get date fields associated with node $type.
 */
function _cck_signup_date_fields($type) {
  $options = array();
  $fields = content_fields(NULL, $type);
  foreach ($fields as $field) {
    if (in_array($field['type'], array('date', 'datestamp', 'datetime'))) {
      $options[$field['field_name']] = $field['widget']['label'];
    }
  }
  return $options;
}

/**
 * Get integer fields associated with node $type.
 */
function _cck_signup_numeric_fields($type) {
  $options = array();
  $fields = content_fields(NULL, $type);
  foreach ($fields as $field) {
    if (in_array($field['type'], array('number_integer'))) {
      $options[$field['field_name']] = $field['widget']['label'];
    }
  }
  return $options;
}

function _cck_signup_form_node_type_form_alter(&$form, $form_state) {
  $type = $form['old_type']['#value'];
  if ($type) {
    $form['cck_signup'] = array(
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#collapsed' => !variable_get('cck_signup_type_' . $type, 0),
      '#title' => t('CCK Sign-up'),
    );
    $form['cck_signup']['cck_signup_type'] = array(
      '#type' => 'checkbox',
      '#default_value' => variable_get('cck_signup_type_' . $type, 0),
      '#title' => t('Enable Sign-ups for %type nodes', array('%type' => $type)),
    );
    if (($options = _cck_signup_nodereference_fields($type)) && !empty($options)) {
      // Potential nodereference fields pointing back at this node type.
      array_unshift($options, t('-- Choose --'));
      $form['cck_signup']['cck_signup_field'] = array(
        '#type' => 'select',
        '#title' => t('Node reference field to associate sign-up nodes'),
        '#options' => $options,
        '#default_value' => variable_get('cck_signup_field_' . $type, 0),
      );
    }
    else {
      // Disable checkbox since no reference fields exist.
      $form['cck_signup']['cck_signup_type']['#disabled'] = TRUE;
      $form['cck_signup']['cck_signup_type']['#description'] = t('In order to use this type as a CCK Sign-up node, there must be a nodereference field from a different type referencing this node type.');
    }

    if (($options = _cck_signup_date_fields($type)) && !empty($options)) {
      // Date fields.
      array_unshift($options, t('-- Choose --'));
      $form['cck_signup']['cck_signup_field_date'] = array(
        '#type' => 'select',
        '#title' => t('Date field to associate with sign-ups'),
        '#options' => $options,
        '#default_value' => variable_get('cck_signup_field_date_' . $type, 0),
      );
    }

    if (($options = _cck_signup_numeric_fields($type)) && !empty($options)) {
      // Potential capacity fields.
      array_unshift($options, t('-- Choose --'));
      $form['cck_signup']['cck_signup_field_capacity'] = array(
        '#type' => 'select',
        '#title' => t('Capacity field to associate with sign-ups'),
        '#options' => $options,
        '#default_value' => variable_get('cck_signup_field_capacity_' . $type, 0),
        '#description' => t('If selected, sign-ups on the event will be closed when the capacity is reached.'),
      );

      // Potential status fields.
      $form['cck_signup']['cck_signup_field_status'] = array(
        '#type' => 'select',
        '#title' => t('Status field to associate with sign-ups'),
        '#options' => $options,
        '#default_value' => variable_get('cck_signup_field_status_' . $type, 0),
        '#description' => t('Should be an integer field, with allowed values, 0 for closed and 1 for open.'),
      );
    }

    if (!in_array('cck_signup_form_node_type_form_validate', $form['#validate'])) {
      $form['#validate'][] = 'cck_signup_form_node_type_form_validate';
    }
    if (!in_array('cck_signup_form_node_type_form_submit', $form['#submit'])) {
      $form['#submit'][] = 'cck_signup_form_node_type_form_submit';
    }
  }
}