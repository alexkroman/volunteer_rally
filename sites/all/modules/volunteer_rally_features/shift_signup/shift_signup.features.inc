<?php

/**
 * Implementation of hook_default_box().
 */
function shift_signup_default_box() {
  module_load_include('inc', 'shift_signup', 'shift_signup.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_default_box', $args);
}

/**
 * Implementation of hook_content_default_fields().
 */
function shift_signup_content_default_fields() {
  module_load_include('inc', 'shift_signup', 'shift_signup.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function shift_signup_context_default_contexts() {
  module_load_include('inc', 'shift_signup', 'shift_signup.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shift_signup_ctools_plugin_api() {
  module_load_include('inc', 'shift_signup', 'shift_signup.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function shift_signup_fieldgroup_default_groups() {
  module_load_include('inc', 'shift_signup', 'shift_signup.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_node_info().
 */
function shift_signup_node_info() {
  module_load_include('inc', 'shift_signup', 'shift_signup.features.node');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_signup_user_default_permissions() {
  module_load_include('inc', 'shift_signup', 'shift_signup.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function shift_signup_strongarm() {
  module_load_include('inc', 'shift_signup', 'shift_signup.defaults');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function shift_signup_views_default_views() {
  module_load_include('inc', 'shift_signup', 'shift_signup.features.views');
  $args = func_get_args();
  return call_user_func_array('_shift_signup_views_default_views', $args);
}
