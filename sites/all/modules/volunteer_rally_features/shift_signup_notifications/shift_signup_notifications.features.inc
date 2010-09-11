<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shift_signup_notifications_ctools_plugin_api() {
  module_load_include('inc', 'shift_signup_notifications', 'shift_signup_notifications.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_notifications_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_signup_notifications_user_default_permissions() {
  module_load_include('inc', 'shift_signup_notifications', 'shift_signup_notifications.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_notifications_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function shift_signup_notifications_strongarm() {
  module_load_include('inc', 'shift_signup_notifications', 'shift_signup_notifications.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_notifications_strongarm', $args);
}
