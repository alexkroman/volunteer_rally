<?php

/**
 * Implementation of hook_content_default_fields().
 */
function shift_restrictions_content_default_fields() {
  module_load_include('inc', 'shift_restrictions', 'shift_restrictions.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_restrictions_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shift_restrictions_ctools_plugin_api() {
  module_load_include('inc', 'shift_restrictions', 'shift_restrictions.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_restrictions_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_restrictions_user_default_permissions() {
  module_load_include('inc', 'shift_restrictions', 'shift_restrictions.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_restrictions_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function shift_restrictions_strongarm() {
  module_load_include('inc', 'shift_restrictions', 'shift_restrictions.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_restrictions_strongarm', $args);
}
