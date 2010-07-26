<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _shift_signup_notifications_ctools_plugin_api() {
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
function _shift_signup_notifications_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer messaging
  $permissions[] = array(
    'name' => 'administer messaging',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer notifications
  $permissions[] = array(
    'name' => 'administer notifications',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: maintain own subscriptions
  $permissions[] = array(
    'name' => 'maintain own subscriptions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: manage all subscriptions
  $permissions[] = array(
    'name' => 'manage all subscriptions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: manage own subscriptions
  $permissions[] = array(
    'name' => 'manage own subscriptions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _shift_signup_notifications_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_default_method';
  $strongarm->value = 'mail';

  $export['messaging_default_method'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_events';
  $strongarm->value = array(
    'reminder' => array(
      'approaching' => 1,
    ),
    'initial' => array(
      'insert' => 1,
    ),
  );

  $export['notifications_events'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_sender';
  $strongarm->value = '0';

  $export['notifications_sender'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_sendself';
  $strongarm->value = 1;

  $export['notifications_sendself'] = $strongarm;
  return $export;
}
