<?php

/**
 * Implementation of hook_content_default_fields().
 */
function shift_signup_group_content_default_fields() {
  module_load_include('inc', 'shift_signup_group', 'shift_signup_group.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function shift_signup_group_context_default_contexts() {
  module_load_include('inc', 'shift_signup_group', 'shift_signup_group.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shift_signup_group_ctools_plugin_api() {
  module_load_include('inc', 'shift_signup_group', 'shift_signup_group.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function shift_signup_group_fieldgroup_default_groups() {
  module_load_include('inc', 'shift_signup_group', 'shift_signup_group.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_node_info().
 */
function shift_signup_group_node_info() {
  module_load_include('inc', 'shift_signup_group', 'shift_signup_group.features.node');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_node_info', $args);
}

/**
 * Implementation of hook_noderelationships_default_settings().
 */
function shift_signup_group_noderelationships_default_settings() {
  module_load_include('inc', 'shift_signup_group', 'shift_signup_group.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_noderelationships_default_settings', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_signup_group_user_default_permissions() {
  module_load_include('inc', 'shift_signup_group', 'shift_signup_group.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function shift_signup_group_strongarm() {
  module_load_include('inc', 'shift_signup_group', 'shift_signup_group.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function shift_signup_group_views_default_views() {
  module_load_include('inc', 'shift_signup_group', 'shift_signup_group.features.views');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_group_views_default_views', $args);
}
