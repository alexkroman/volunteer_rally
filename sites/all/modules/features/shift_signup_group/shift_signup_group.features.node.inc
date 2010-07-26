<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _shift_signup_group_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'module' => 'features',
      'description' => t('Create a group that can then be signed up to attend volunteer shifts.'),
      'has_title' => '1',
      'title_label' => t('Group name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
