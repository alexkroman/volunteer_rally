<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _shift_signup_group_address_content_default_fields() {
  $fields = array();

  // Exported field: field_group_address_additional
  $fields[] = array(
    'field_name' => 'field_group_address_additional',
    'type_name' => 'group',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_address',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_group_address_additional][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Additional',
      'weight' => '5',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_group_address_city
  $fields[] = array(
    'field_name' => 'field_group_address_city',
    'type_name' => 'group',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_address',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_group_address_city][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'City',
      'weight' => '6',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_group_address_state
  $fields[] = array(
    'field_name' => 'field_group_address_state',
    'type_name' => 'group',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_address',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_group_address_state][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'State',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_group_address_street
  $fields[] = array(
    'field_name' => 'field_group_address_street',
    'type_name' => 'group',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_address',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_group_address_street][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Street',
      'weight' => '4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_group_address_zipcode
  $fields[] = array(
    'field_name' => 'field_group_address_zipcode',
    'type_name' => 'group',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_address',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '9',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_group_address_zipcode][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Zip',
      'weight' => '8',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Additional'),
    t('City'),
    t('State'),
    t('Street'),
    t('Zip'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _shift_signup_group_address_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _shift_signup_group_address_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_address
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'group',
    'group_name' => 'group_address',
    'label' => 'Address',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_group_address_street',
      '1' => 'field_group_address_additional',
      '2' => 'field_group_address_city',
      '3' => 'field_group_address_state',
      '4' => 'field_group_address_zipcode',
    ),
  );

  // Translatables
  array(
    t('Address'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _shift_signup_group_address_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_group_address_additional
  $permissions[] = array(
    'name' => 'edit field_group_address_additional',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_address_city
  $permissions[] = array(
    'name' => 'edit field_group_address_city',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_address_state
  $permissions[] = array(
    'name' => 'edit field_group_address_state',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_address_street
  $permissions[] = array(
    'name' => 'edit field_group_address_street',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_address_zipcode
  $permissions[] = array(
    'name' => 'edit field_group_address_zipcode',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_additional
  $permissions[] = array(
    'name' => 'view field_group_address_additional',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_city
  $permissions[] = array(
    'name' => 'view field_group_address_city',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_state
  $permissions[] = array(
    'name' => 'view field_group_address_state',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_street
  $permissions[] = array(
    'name' => 'view field_group_address_street',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_zipcode
  $permissions[] = array(
    'name' => 'view field_group_address_zipcode',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
