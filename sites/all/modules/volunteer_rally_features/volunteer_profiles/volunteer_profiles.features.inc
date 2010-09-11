<?php

/**
 * Implementation of hook_content_default_fields().
 */
function volunteer_profiles_content_default_fields() {
  module_load_include('inc', 'volunteer_profiles', 'volunteer_profiles.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_profiles_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function volunteer_profiles_context_default_contexts() {
  module_load_include('inc', 'volunteer_profiles', 'volunteer_profiles.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_profiles_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function volunteer_profiles_ctools_plugin_api() {
  module_load_include('inc', 'volunteer_profiles', 'volunteer_profiles.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_profiles_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function volunteer_profiles_node_info() {
  module_load_include('inc', 'volunteer_profiles', 'volunteer_profiles.features.node');
  $args = func_get_args();
  return call_user_func_array('_volunteer_profiles_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function volunteer_profiles_user_default_permissions() {
  module_load_include('inc', 'volunteer_profiles', 'volunteer_profiles.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_profiles_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function volunteer_profiles_strongarm() {
  module_load_include('inc', 'volunteer_profiles', 'volunteer_profiles.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_profiles_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function volunteer_profiles_views_default_views() {
  module_load_include('inc', 'volunteer_profiles', 'volunteer_profiles.features.views');
  $args = func_get_args();
  return call_user_func_array('_volunteer_profiles_views_default_views', $args);
}
