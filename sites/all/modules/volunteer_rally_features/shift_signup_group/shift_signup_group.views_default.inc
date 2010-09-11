<?php
// $Id$

/**
 * @file
 * Alter shift sign-up views to take groups into account.
 */

/**
 * Implementation of hook_views_default_views_alter().
 */
function shift_signup_group_views_default_views_alter(&$views) {
  $group_field = array(
    'label' => 'Group',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 1,
    'label_type' => 'none',
    'format' => 'default',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 1,
    'id' => 'field_signup_group_nid',
    'table' => 'node_data_field_signup_group',
    'field' => 'field_signup_group_nid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  );

  if (isset($views['shift_signups'])) {
    // Change 'volunteer' label to include groups.
    $views['shift_signups']->display['default']->display_options['fields']['field_profile_name_first_value']['label'] = t('Volunteer/Group');

    // Add number of volunteers field.
    $views['shift_signups']->display['default']->display_options['fields']['field_signup_group_count_value'] = array(
      'label' => 'Number of volunteers',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_signup_group_count_value',
      'table' => 'node_data_field_signup_group_count',
      'field' => 'field_signup_group_count_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    );

    // Add field_signup_group_nid to fields list.
    $views['shift_signups']->display['default']->display_options['fields']['field_signup_group_nid'] = $group_field;

    // Re-sort fields to desired order.
    $new_fields = array();
    $field_order = array(
      'field_profile_name_first_value',
      'field_profile_name_last_value',
      'field_signup_group_count_value',
      'field_staff_memo_value',
      'edit_node',
      'field_signup_group_nid',
    );
    foreach ($field_order as $name) {
      $new_fields[$name] = $views['shift_signups']->display['default']->display_options['fields'][$name];
    }
    // Add any fields back not in this list.
    foreach ($views['shift_signups']->display['default']->display_options['fields'] as $name => $field) {
      if (!in_array($name, $field_order)) {
        $new_fields[$name] = $field;
      }
    }
    $views['shift_signups']->display['default']->display_options['fields'] = $new_fields;
  }

  if (isset($views['my_shift_signups'])) {
    // Add field_signup_group_nid to fields list.
    $group_field['exclude'] = 0;
    $group_field['link_to_node'] = 0;
    $views['my_shift_signups']->display['default']->display_options['fields']['field_signup_group_nid'] = $group_field;

    // Place new field at the top.
    $new_fields = array();
    $field_order = array(
      'field_signup_group_nid',
      'field_shift_date_value',
      'edit_node',
      'delete_node',
    ); 
   foreach ($field_order as $name) {
      $new_fields[$name] = $views['my_shift_signups']->display['default']->display_options['fields'][$name];
    }
    // Add any additional fields.
    foreach ($views['my_shift_signups']->display['default']->display_options['fields'] as $name => $field) {
      if (!in_array($name, $field_order)) {
        $new_fields[$name] = $field;
      }
    }
    $views['my_shift_signups']->display['default']->display_options['fields'] = $new_fields;
  }
}