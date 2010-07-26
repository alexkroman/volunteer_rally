<?php

/**
 * Helper to implementation of hook_default_box().
 */
function _shift_signup_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'shift_signup_help';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Shift sign-up form helper text';
  $box->options = array(
    'body' => 'Shift sign-up helper text.',
    'format' => '1',
  );

  $export['shift_signup_help'] = $box;
  return $export;
}

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _shift_signup_content_default_fields() {
  $fields = array();

  // Exported field: field_signup_end_time
  $fields[] = array(
    'field_name' => 'field_signup_end_time',
    'type_name' => 'signup',
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
          '_error_element' => 'default_value_widget][field_signup_end_time][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'End time',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_signup_shift
  $fields[] = array(
    'field_name' => 'field_signup_shift',
    'type_name' => 'signup',
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
      'shift' => 'shift',
      'signup_group' => 0,
      'page' => 0,
      'signup' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 1,
        'full' => 1,
        'title' => 'Sign-up',
        'hover_title' => 'Sign-up for this shift',
        'destination' => 'default',
      ),
      'fallback' => 'page_not_found',
      'edit_fallback' => 0,
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Shift',
      'weight' => '-4',
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_signup_start_time
  $fields[] = array(
    'field_name' => 'field_signup_start_time',
    'type_name' => 'signup',
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
          '_error_element' => 'default_value_widget][field_signup_start_time][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Start time',
      'weight' => '6',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_signup_status
  $fields[] = array(
    'field_name' => 'field_signup_status',
    'type_name' => 'signup',
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0|Did not attend
1|Attended',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '-3',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  array(
    t('End time'),
    t('Shift'),
    t('Start time'),
    t('Status'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _shift_signup_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shift_signup_form';
  $context->description = 'Shift sign-up form';
  $context->tag = 'Shift Sign-ups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'signup' => 'signup',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-shift_signup_help' => array(
          'module' => 'boxes',
          'delta' => 'shift_signup_help',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['shift_signup_form'] = array(
    t('Shift Sign-ups'),
    t('Shift sign-up form'),
  );

  $export['shift_signup_form'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shift_signups';
  $context->description = '';
  $context->tag = 'Shift Sign-ups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'shift' => 'shift',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-shift_signups-block_1' => array(
          'module' => 'views',
          'delta' => 'shift_signups-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['shift_signups'] = array(
    t('Shift Sign-ups'),
  );

  $export['shift_signups'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _shift_signup_ctools_plugin_api() {
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
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _shift_signup_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_signup_details
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'signup',
    'group_name' => 'group_signup_details',
    'label' => 'Shift details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_signup_start_time',
      '1' => 'field_signup_end_time',
    ),
  );

  // Translatables
  array(
    t('Shift details'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _shift_signup_user_default_permissions() {
  $permissions = array();

  // Exported permission: create signup content
  $permissions[] = array(
    'name' => 'create signup content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any signup content
  $permissions[] = array(
    'name' => 'edit any signup content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_end_time
  $permissions[] = array(
    'name' => 'edit field_signup_end_time',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_shift
  $permissions[] = array(
    'name' => 'edit field_signup_shift',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_start_time
  $permissions[] = array(
    'name' => 'edit field_signup_start_time',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_status
  $permissions[] = array(
    'name' => 'edit field_signup_status',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit own signup content
  $permissions[] = array(
    'name' => 'edit own signup content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_end_time
  $permissions[] = array(
    'name' => 'view field_signup_end_time',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_signup_shift
  $permissions[] = array(
    'name' => 'view field_signup_shift',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_start_time
  $permissions[] = array(
    'name' => 'view field_signup_start_time',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_signup_status
  $permissions[] = array(
    'name' => 'view field_signup_status',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _shift_signup_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_signup';
  $strongarm->value = '[field_signup_shift-title] sign-up for [author-name]';

  $export['ant_pattern_signup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_signup';
  $strongarm->value = 0;

  $export['ant_php_signup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_signup';
  $strongarm->value = '1';

  $export['ant_signup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_field_capacity_shift';
  $strongarm->value = 'field_shift_capacity';

  $export['cck_signup_field_capacity_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_field_date_shift';
  $strongarm->value = 'field_shift_date';

  $export['cck_signup_field_date_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_field_shift';
  $strongarm->value = 'field_signup_shift';

  $export['cck_signup_field_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_field_status_shift';
  $strongarm->value = 'field_shift_signup_status';

  $export['cck_signup_field_status_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_signup_type_signup';
  $strongarm->value = 'field_signup_shift';

  $export['cck_signup_signup_type_signup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_type_shift';
  $strongarm->value = 1;

  $export['cck_signup_type_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_signup';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '2',
    'author' => '-3',
    'options' => '6',
    'menu' => '-2',
    'path' => '4',
  );

  $export['content_extra_weights_signup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_signup';
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
      'grant_view' => 1,
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

  $export['nodeaccess_signup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_signup_pattern';
  $strongarm->value = 'signups/[nid]';

  $export['pathauto_node_signup_pattern'] = $strongarm;
  return $export;
}
