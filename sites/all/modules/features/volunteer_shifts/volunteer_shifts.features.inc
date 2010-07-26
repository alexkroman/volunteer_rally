<?php

/**
 * Implementation of hook_default_box().
 */
function volunteer_shifts_default_box() {
  module_load_include('inc', 'volunteer_shifts', 'volunteer_shifts.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_default_box', $args);
}

/**
 * Implementation of hook_content_default_fields().
 */
function volunteer_shifts_content_default_fields() {
  module_load_include('inc', 'volunteer_shifts', 'volunteer_shifts.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function volunteer_shifts_context_default_contexts() {
  module_load_include('inc', 'volunteer_shifts', 'volunteer_shifts.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function volunteer_shifts_ctools_plugin_api() {
  module_load_include('inc', 'volunteer_shifts', 'volunteer_shifts.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function volunteer_shifts_node_info() {
  module_load_include('inc', 'volunteer_shifts', 'volunteer_shifts.features.node');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function volunteer_shifts_user_default_permissions() {
  module_load_include('inc', 'volunteer_shifts', 'volunteer_shifts.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function volunteer_shifts_strongarm() {
  module_load_include('inc', 'volunteer_shifts', 'volunteer_shifts.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function volunteer_shifts_views_default_views() {
  module_load_include('inc', 'volunteer_shifts', 'volunteer_shifts.features.views');
  $args = func_get_args();
  return call_user_func_array('_volunteer_shifts_views_default_views', $args);
}
