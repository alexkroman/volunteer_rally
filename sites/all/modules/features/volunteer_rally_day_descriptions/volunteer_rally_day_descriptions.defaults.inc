<?php

/**
 * Helper to implementation of hook_default_box().
 */
function _volunteer_rally_day_descriptions_default_box() {
  $export = array();

  for ($i = 0; $i < 7; $i ++) {
    $box = new stdClass;
    $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
    $box->api_version = 1;
    $box->delta = 'vr_day_description_' . $i;
    $box->plugin_key = 'simple';
    $box->title = '';
    $box->description = 'Calendar: Day ' . $i . ' description';
    $box->options = array(
      'body' => 'Description',
      'format' => '1',
    );

    $export['vr_day_description_' . $i] = $box;
  }
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _volunteer_rally_day_descriptions_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
}
