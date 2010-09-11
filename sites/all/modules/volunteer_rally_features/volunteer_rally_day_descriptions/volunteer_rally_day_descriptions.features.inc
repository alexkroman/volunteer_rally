<?php

/**
 * Implementation of hook_default_box().
 */
function volunteer_rally_day_descriptions_default_box() {
  module_load_include('inc', 'volunteer_rally_day_descriptions', 'volunteer_rally_day_descriptions.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_rally_day_descriptions_default_box', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function volunteer_rally_day_descriptions_ctools_plugin_api() {
  module_load_include('inc', 'volunteer_rally_day_descriptions', 'volunteer_rally_day_descriptions.defaults');
  $args = func_get_args();
  return call_user_func_array('_volunteer_rally_day_descriptions_ctools_plugin_api', $args);
}
