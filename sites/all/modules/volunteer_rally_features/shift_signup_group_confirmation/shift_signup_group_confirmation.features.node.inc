<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _shift_signup_group_confirmation_node_info() {
  $items = array(
    'group_confirmation' => array(
      'name' => t('Group Confirmation'),
      'module' => 'features',
      'description' => t('Confirmation of attendance as a part of a group sign-up.'),
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
