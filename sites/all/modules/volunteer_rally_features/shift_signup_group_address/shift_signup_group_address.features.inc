<?php

/**
 * Implementation of hook_content_default_fields().
 */
function shift_signup_group_address_content_default_fields() {
  module_load_include('inc', 'shift_signup_group_address', 'shift_signup_group_address.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_address_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shift_signup_group_address_ctools_plugin_api() {
  module_load_include('inc', 'shift_signup_group_address', 'shift_signup_group_address.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_address_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function shift_signup_group_address_fieldgroup_default_groups() {
  module_load_include('inc', 'shift_signup_group_address', 'shift_signup_group_address.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_address_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_signup_group_address_user_default_permissions() {
  module_load_include('inc', 'shift_signup_group_address', 'shift_signup_group_address.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_address_user_default_permissions', $args);
}
