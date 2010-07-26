<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _shift_signup_node_info() {
  $items = array(
    'signup' => array(
      'name' => t('Signup'),
      'module' => 'features',
      'description' => t('Sign-up to a shift. '),
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
