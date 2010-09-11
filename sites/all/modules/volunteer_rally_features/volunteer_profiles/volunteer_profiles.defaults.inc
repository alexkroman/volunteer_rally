<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _volunteer_profiles_content_default_fields() {
  $fields = array();

  // Exported field: field_entity_relationships
  $fields[] = array(
    'field_name' => 'field_entity_relationships',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'apple|Apple Corps
special|Special Events',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Relationships',
      'weight' => '1',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_name_first
  $fields[] = array(
    'field_name' => 'field_profile_name_first',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
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
          '_error_element' => 'default_value_widget][field_profile_name_first][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First name',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_name_last
  $fields[] = array(
    'field_name' => 'field_profile_name_last',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
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
          '_error_element' => 'default_value_widget][field_profile_name_last][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Last name',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_school
  $fields[] = array(
    'field_name' => 'field_profile_school',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
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
          '_error_element' => 'default_value_widget][field_profile_school][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'School',
      'weight' => '-1',
      'description' => 'If you are under 18, please provide the name of your school.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_under_18
  $fields[] = array(
    'field_name' => 'field_profile_under_18',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '1',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '1|Yes',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Are you under 18?',
      'weight' => '-2',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_zip
  $fields[] = array(
    'field_name' => 'field_profile_zip',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '99999',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_zip][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Zip',
      'weight' => 0,
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Translatables
  array(
    t('Are you under 18?'),
    t('First name'),
    t('Last name'),
    t('Relationships'),
    t('School'),
    t('Zip'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _volunteer_profiles_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_profile';
  $context->description = 'User profile page';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-staff_notes-block_2' => array(
          'module' => 'views',
          'delta' => 'staff_notes-block_2',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'views-user_profile_data-block_3' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_3',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
        'views-user_profile_data-block_1' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_1',
          'region' => 'sidebar_second',
          'weight' => 2,
        ),
        'views-user_profile_data-block_4' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_4',
          'region' => 'sidebar_second',
          'weight' => 3,
        ),
        'views-user_profile_data-block_5' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_5',
          'region' => 'sidebar_second',
          'weight' => 4,
        ),
        'views-user_profile_data-block_2' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_2',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-user_shift_signups-block_1' => array(
          'module' => 'views',
          'delta' => 'user_shift_signups-block_1',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
        'views-user_shift_signups-block_2' => array(
          'module' => 'views',
          'delta' => 'user_shift_signups-block_2',
          'region' => 'content_bottom',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['user_profile'] = array(
    t('User profile page'),
    t('Volunteer Rally'),
  );

  $export['user_profile'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _volunteer_profiles_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _volunteer_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_entity_relationships
  $permissions[] = array(
    'name' => 'edit field_entity_relationships',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_profile_name_first
  $permissions[] = array(
    'name' => 'edit field_profile_name_first',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_name_last
  $permissions[] = array(
    'name' => 'edit field_profile_name_last',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_school
  $permissions[] = array(
    'name' => 'edit field_profile_school',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_under_18
  $permissions[] = array(
    'name' => 'edit field_profile_under_18',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_zip
  $permissions[] = array(
    'name' => 'edit field_profile_zip',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_entity_relationships
  $permissions[] = array(
    'name' => 'view field_entity_relationships',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_profile_name_first
  $permissions[] = array(
    'name' => 'view field_profile_name_first',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_name_last
  $permissions[] = array(
    'name' => 'view field_profile_name_last',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_school
  $permissions[] = array(
    'name' => 'view field_profile_school',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_under_18
  $permissions[] = array(
    'name' => 'view field_profile_under_18',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_zip
  $permissions[] = array(
    'name' => 'view field_profile_zip',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _volunteer_profiles_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_profile';
  $strongarm->value = '[field_profile_name_first-raw] [field_profile_name_last-raw]';

  $export['ant_pattern_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_profile';
  $strongarm->value = '1';

  $export['ant_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_profile';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '3',
    'menu' => '2',
    'path' => '4',
  );

  $export['content_extra_weights_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_profile';
  $strongarm->value = array(
    'weight' => '0',
    'user_display' => 'full',
    'edit_link' => 0,
    'edit_tab' => 'sub',
    'add_link' => 1,
    'registration_use' => 1,
    'admin_user_create_use' => 1,
    'registration_hide' => array(),
  );

  $export['content_profile_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_profile';
  $strongarm->value = 1;

  $export['content_profile_use_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_profile';
  $strongarm->value = array(
    '0' => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    '1' => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    '2' => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
    '3' => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 1,
      'grant_delete' => 1,
    ),
  );

  $export['nodeaccess_profile'] = $strongarm;
  return $export;
}
