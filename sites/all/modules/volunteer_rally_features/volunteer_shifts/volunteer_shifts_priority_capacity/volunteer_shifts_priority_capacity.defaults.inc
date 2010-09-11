<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _volunteer_shifts_priority_capacity_content_default_fields() {
  $fields = array();

  // Exported field: field_shift_priority_code
  $fields[] = array(
    'field_name' => 'field_shift_priority_code',
    'type_name' => 'shift',
    'display_settings' => array(
      'weight' => '3',
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
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'priority_code' => 'priority_code',
      'group' => 0,
      'signup_group' => 0,
      'page' => 0,
      'shift' => 0,
      'signup' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Priority code',
      'weight' => '3',
      'description' => 'Selecting a priority code will hide this shift unless it is access through the special priority url.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  array(
    t('Priority code'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _volunteer_shifts_priority_capacity_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "noderelationships" && $api == "default_node_relationships") {
    return array("version" => 1);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_noderelationships_default_settings().
 */
function _volunteer_shifts_priority_capacity_noderelationships_default_settings() {
  $export = array();
  $noderelationships_default_setting = new stdClass;
  $noderelationships_default_setting->disabled = FALSE; /* Edit this to true to make a default noderelationships_default_setting disabled initially */
  $noderelationships_default_setting->api_version = 1;
  $noderelationships_default_setting->type_name = 'shift';
  $noderelationships_default_setting->relation_type = 'noderef';
  $noderelationships_default_setting->related_type = '';
  $noderelationships_default_setting->field_name = 'field_shift_priority_code';
  $noderelationships_default_setting->settings = 'a:1:{s:20:"create_and_reference";s:25:"field_shift_priority_code";}';
  $noderelationships_default_setting->export_key = 'shift__field_shift_priority_code';
  $export['shift__field_shift_priority_code'] = $noderelationships_default_setting;

  return $export;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _volunteer_shifts_priority_capacity_user_default_permissions() {
  $permissions = array();

  // Exported permission: create priority_code content
  $permissions[] = array(
    'name' => 'create priority_code content',
    'roles' => array(
      '0' => 'volunteer coordinator',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any priority_code content
  $permissions[] = array(
    'name' => 'delete any priority_code content',
    'roles' => array(
      '0' => 'volunteer coordinator',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete own priority_code content
  $permissions[] = array(
    'name' => 'delete own priority_code content',
    'roles' => array(),
  );

  // Exported permission: edit any priority_code content
  $permissions[] = array(
    'name' => 'edit any priority_code content',
    'roles' => array(
      '0' => 'volunteer coordinator',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit field_shift_priority_code
  $permissions[] = array(
    'name' => 'edit field_shift_priority_code',
    'roles' => array(
      '0' => 'volunteer coordinator',
      '1' => 'administrator',
    ),
  );

  // Exported permission: manage volunteer rally priority codes
  $permissions[] = array(
    'name' => 'manage volunteer rally priority codes',
    'roles' => array(
      '0' => 'volunteer coordinator',
      '1' => 'administrator',
    ),
  );

  // Exported permission: view field_shift_priority_code
  $permissions[] = array(
    'name' => 'view field_shift_priority_code',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _volunteer_shifts_priority_capacity_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_method_volunteer_rally_priority';
  $strongarm->value = 'path';

  $export['purl_method_volunteer_rally_priority'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_types';
  $strongarm->value = array(
    'path' => 'path',
    'pair' => 0,
    'subdomain' => 0,
    'domain' => 0,
    'extension' => 0,
    'useragent' => 0,
    'querystring' => 0,
  );

  $export['purl_types'] = $strongarm;
  return $export;
}
