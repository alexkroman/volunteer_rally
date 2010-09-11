<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _volunteer_shifts_node_info() {
  $items = array(
    'shift' => array(
      'name' => t('Shift'),
      'module' => 'features',
      'description' => t('A single, or repeating, shift.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
