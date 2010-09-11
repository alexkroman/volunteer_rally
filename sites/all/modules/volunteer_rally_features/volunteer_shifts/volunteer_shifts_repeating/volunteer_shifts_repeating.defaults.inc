<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _volunteer_shifts_repeating_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _volunteer_shifts_repeating_user_default_permissions() {
  $permissions = array();

  // Exported permission: Create sequences
  $permissions[] = array(
    'name' => 'Create sequences',
    'roles' => array(
      '0' => 'volunteer coordinator',
      '1' => 'administrator',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _volunteer_shifts_repeating_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_repeat_autodetachondatechange_shift';
  $strongarm->value = 1;

  $export['node_repeat_autodetachondatechange_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_repeat_type_shift';
  $strongarm->value = 'field_shift_date';

  $export['node_repeat_type_shift'] = $strongarm;
  return $export;
}
