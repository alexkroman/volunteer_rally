<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _volunteer_shifts_priority_capacity_node_info() {
  $items = array(
    'priority_code' => array(
      'name' => t('Priority code'),
      'module' => 'features',
      'description' => t('A priority code can be associated with specific shifts to allow privileged access and sign-ups.'),
      'has_title' => '1',
      'title_label' => t('Code'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
