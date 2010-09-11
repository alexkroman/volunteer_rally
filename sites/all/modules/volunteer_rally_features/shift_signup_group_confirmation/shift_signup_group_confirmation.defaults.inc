<?php

/**
 * Helper to implementation of hook_default_box().
 */
function _shift_signup_group_confirmation_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'group_confirmation_help';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Group confirmation helper text';
  $box->options = array(
    'body' => 'Helper text for people confirming attendance of a shift that a group has signed up to attend.',
    'format' => '1',
  );

  $export['group_confirmation_help'] = $box;
  return $export;
}

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _shift_signup_group_confirmation_content_default_fields() {
  $fields = array();

  // Exported field: field_confirmation_group_count
  $fields[] = array(
    'field_name' => 'field_confirmation_group_count',
    'type_name' => 'group_confirmation',
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '1',
          '_error_element' => 'default_value_widget][field_confirmation_group_count][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Number of volunteers',
      'weight' => '-3',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_confirmation_valid_count_1
  $fields[] = array(
    'field_name' => 'field_confirmation_valid_count_1',
    'type_name' => 'group_confirmation',
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
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_confirmation_valid_count_1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Children (ages 4-8)',
      'weight' => '-2',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_confirmation_valid_count_2
  $fields[] = array(
    'field_name' => 'field_confirmation_valid_count_2',
    'type_name' => 'group_confirmation',
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
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_confirmation_valid_count_2][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Children (ages 8-11)',
      'weight' => '-1',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_confirmation_valid_count_3
  $fields[] = array(
    'field_name' => 'field_confirmation_valid_count_3',
    'type_name' => 'group_confirmation',
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
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_confirmation_valid_count_3][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Middle school/Jr. high school students',
      'weight' => 0,
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_confirmation_valid_count_4
  $fields[] = array(
    'field_name' => 'field_confirmation_valid_count_4',
    'type_name' => 'group_confirmation',
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
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_confirmation_valid_count_4][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'High school students',
      'weight' => '1',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_confirmation_valid_count_5
  $fields[] = array(
    'field_name' => 'field_confirmation_valid_count_5',
    'type_name' => 'group_confirmation',
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
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_confirmation_valid_count_5][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Special needs',
      'weight' => '2',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_group_confirmation_signup
  $fields[] = array(
    'field_name' => 'field_group_confirmation_signup',
    'type_name' => 'group_confirmation',
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
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'signup' => 'signup',
      'group' => 0,
      'group_confirmation' => 0,
      'page' => 0,
      'priority_code' => 0,
      'profile' => 0,
      'shift' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Confirm attendance as part of this group',
        'hover_title' => '',
        'destination' => 'default',
      ),
      'fallback' => 'page_not_found',
      'edit_fallback' => 0,
      'label' => 'Group Sign-up',
      'weight' => '-4',
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Translatables
  array(
    t('Children (ages 4-8)'),
    t('Children (ages 8-11)'),
    t('Group Sign-up'),
    t('High school students'),
    t('Middle school/Jr. high school students'),
    t('Number of volunteers'),
    t('Special needs'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _shift_signup_group_confirmation_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_confirmation_form';
  $context->description = 'Context for group confirmation form';
  $context->tag = 'Groups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group_confirmation' => 'group_confirmation',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-group_confirmation_help' => array(
          'module' => 'boxes',
          'delta' => 'group_confirmation_help',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['group_confirmation_form'] = array(
    t('Context for group confirmation form'),
    t('Groups'),
  );

  $export['group_confirmation_form'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_shift_signups';
  $context->description = 'Group shift sign-up context';
  $context->tag = 'Groups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'signup' => 'signup',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group_shift_signups-block_1' => array(
          'module' => 'views',
          'delta' => 'group_shift_signups-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['group_shift_signups'] = array(
    t('Group shift sign-up context'),
    t('Groups'),
  );

  $export['group_shift_signups'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _shift_signup_group_confirmation_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _shift_signup_group_confirmation_user_default_permissions() {
  $permissions = array();

  // Exported permission: create group_confirmation content
  $permissions[] = array(
    'name' => 'create group_confirmation content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any group_confirmation content
  $permissions[] = array(
    'name' => 'delete any group_confirmation content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: delete own group_confirmation content
  $permissions[] = array(
    'name' => 'delete own group_confirmation content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any group_confirmation content
  $permissions[] = array(
    'name' => 'edit any group_confirmation content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_confirmation_group_count
  $permissions[] = array(
    'name' => 'edit field_confirmation_group_count',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_1
  $permissions[] = array(
    'name' => 'edit field_confirmation_valid_count_1',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_2
  $permissions[] = array(
    'name' => 'edit field_confirmation_valid_count_2',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_3
  $permissions[] = array(
    'name' => 'edit field_confirmation_valid_count_3',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_4
  $permissions[] = array(
    'name' => 'edit field_confirmation_valid_count_4',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_5
  $permissions[] = array(
    'name' => 'edit field_confirmation_valid_count_5',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_confirmation_signup
  $permissions[] = array(
    'name' => 'edit field_group_confirmation_signup',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own group_confirmation content
  $permissions[] = array(
    'name' => 'edit own group_confirmation content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_group_count
  $permissions[] = array(
    'name' => 'view field_confirmation_group_count',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_1
  $permissions[] = array(
    'name' => 'view field_confirmation_valid_count_1',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_2
  $permissions[] = array(
    'name' => 'view field_confirmation_valid_count_2',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_3
  $permissions[] = array(
    'name' => 'view field_confirmation_valid_count_3',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_4
  $permissions[] = array(
    'name' => 'view field_confirmation_valid_count_4',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_5
  $permissions[] = array(
    'name' => 'view field_confirmation_valid_count_5',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_confirmation_signup
  $permissions[] = array(
    'name' => 'view field_group_confirmation_signup',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _shift_signup_group_confirmation_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_group_confirmation';
  $strongarm->value = '1';

  $export['ant_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_group_confirmation';
  $strongarm->value = 'Confirmation for [author-name-raw]';

  $export['ant_pattern_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_group_confirmation';
  $strongarm->value = 0;

  $export['ant_php_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_group_confirmation_field_signup';
  $strongarm->value = 'field_group_confirmation_signup';

  $export['cck_signup_group_confirmation_field_signup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_group_confirmation_type_group_confirmation';
  $strongarm->value = 'field_group_confirmation_signup';

  $export['cck_signup_group_confirmation_type_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_group_confirmation';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '4',
    'menu' => '3',
    'path' => '5',
  );

  $export['content_extra_weights_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_group_confirmation';
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

  $export['nodeaccess_group_confirmation'] = $strongarm;
  return $export;
}
