<?php

/**
 * Implementation of hook_content_default_fields().
 */
function volunteer_shifts_priority_capacity_content_default_fields() {
  module_load_include('inc', 'volunteer_shifts_priority_capacity', 'volunteer_shifts_priority_capacity.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_priority_capacity_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function volunteer_shifts_priority_capacity_ctools_plugin_api() {
  module_load_include('inc', 'volunteer_shifts_priority_capacity', 'volunteer_shifts_priority_capacity.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_priority_capacity_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function volunteer_shifts_priority_capacity_node_info() {
  module_load_include('inc', 'volunteer_shifts_priority_capacity', 'volunteer_shifts_priority_capacity.features.node');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_priority_capacity_node_info', $args);
}

/**
 * Implementation of hook_noderelationships_default_settings().
 */
function volunteer_shifts_priority_capacity_noderelationships_default_settings() {
  module_load_include('inc', 'volunteer_shifts_priority_capacity', 'volunteer_shifts_priority_capacity.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_priority_capacity_noderelationships_default_settings', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function volunteer_shifts_priority_capacity_user_default_permissions() {
  module_load_include('inc', 'volunteer_shifts_priority_capacity', 'volunteer_shifts_priority_capacity.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_priority_capacity_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function volunteer_shifts_priority_capacity_strongarm() {
  module_load_include('inc', 'volunteer_shifts_priority_capacity', 'volunteer_shifts_priority_capacity.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_priority_capacity_strongarm', $args);
}
