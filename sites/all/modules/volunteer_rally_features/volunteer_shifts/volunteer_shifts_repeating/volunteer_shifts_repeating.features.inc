<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function volunteer_shifts_repeating_ctools_plugin_api() {
  module_load_include('inc', 'volunteer_shifts_repeating', 'volunteer_shifts_repeating.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_repeating_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function volunteer_shifts_repeating_user_default_permissions() {
  module_load_include('inc', 'volunteer_shifts_repeating', 'volunteer_shifts_repeating.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_repeating_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function volunteer_shifts_repeating_strongarm() {
  module_load_include('inc', 'volunteer_shifts_repeating', 'volunteer_shifts_repeating.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_repeating_strongarm', $args);
}
