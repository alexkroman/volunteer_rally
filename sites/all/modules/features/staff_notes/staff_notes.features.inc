<?php

/**
 * Implementation of hook_content_default_fields().
 */
function staff_notes_content_default_fields() {
  module_load_include('inc', 'staff_notes', 'staff_notes.defaults');
  $args = func_get_args();
  return call_user_func_array('_staff_notes_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function staff_notes_context_default_contexts() {
  module_load_include('inc', 'staff_notes', 'staff_notes.defaults');
  $args = func_get_args();
  return call_user_func_array('_staff_notes_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function staff_notes_ctools_plugin_api() {
  module_load_include('inc', 'staff_notes', 'staff_notes.defaults');
  $args = func_get_args();
  return call_user_func_array('_staff_notes_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function staff_notes_user_default_permissions() {
  module_load_include('inc', 'staff_notes', 'staff_notes.defaults');
  $args = func_get_args();
  return call_user_func_array('_staff_notes_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function staff_notes_views_default_views() {
  module_load_include('inc', 'staff_notes', 'staff_notes.features.views');
  $args = func_get_args();
  return call_user_func_array('_staff_notes_views_default_views', $args);
}
