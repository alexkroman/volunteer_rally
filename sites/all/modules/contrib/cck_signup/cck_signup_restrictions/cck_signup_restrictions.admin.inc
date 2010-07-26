<?php
// $Id: cck_signup_restrictions.admin.inc,v 1.5 2010/07/26 23:41:06 jhedstrom Exp $

/**
 * @file
 * Administrative forms and functions for CCK Sign-up Restrictions module.
 */

/**
 * Helper implementation of hook_form_FORM_ID_alter().
 */
function _cck_signup_restrictions_form_node_type_form_alter(&$form, $form_state) {
  $type = $form['old_type']['#value'];
  if ($type) {
    $options = _cck_signup_restrictions_text_fields($type);
    array_unshift($options, t('-- Choose --'));
    $form['cck_signup']['cck_signup_restrictions_field'] = array(
      '#type' => 'select',
      '#title' => t('Sign-up restrictions field'),
      '#description' => t('Field should use key/value pairs where the key is the field name that is attached to the sign-up node.'),
      '#options' => $options,
      '#default_value' => variable_get('cck_signup_restrictions_field_' . $type, 0),
    );
  }
}

/**
 * Get text fields associated with node $type.
 */
function _cck_signup_restrictions_text_fields($type) {
  $options = array();
  $info = _content_type_info();
  $fields = $info['content types'][$type]['fields'];
  foreach ($fields as $field) {
    if (in_array($field['type'], array('text'))) {
      $options[$field['field_name']] = $field['widget']['label'];
    }
  }
  return $options;
}
