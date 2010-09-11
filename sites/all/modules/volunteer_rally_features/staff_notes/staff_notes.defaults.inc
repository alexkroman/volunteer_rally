<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _staff_notes_content_default_fields() {
  $fields = array();

  // Exported field: field_staff_memo
  $fields[] = array(
    'field_name' => 'field_staff_memo',
    'type_name' => 'group',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_staff_memo][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Memo',
      'weight' => '-3',
      'description' => 'Private memo regarding this record.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_staff_memo
  $fields[] = array(
    'field_name' => 'field_staff_memo',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_staff_memo][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Memo',
      'weight' => '6',
      'description' => 'Private memo regarding this record.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_staff_memo
  $fields[] = array(
    'field_name' => 'field_staff_memo',
    'type_name' => 'shift',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_staff_memo][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Memo',
      'weight' => '6',
      'description' => 'Private memo regarding this record.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_staff_memo
  $fields[] = array(
    'field_name' => 'field_staff_memo',
    'type_name' => 'signup',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_staff_memo][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Memo',
      'weight' => '7',
      'description' => 'Private memo regarding this record.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Memo'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _staff_notes_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'staff_notes';
  $context->description = 'Display staff notes for various content types';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
        'profile' => 'profile',
        'shift' => 'shift',
        'signup' => 'signup',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-staff_notes-block_1' => array(
          'module' => 'views',
          'delta' => 'staff_notes-block_1',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['staff_notes'] = array(
    t('Display staff notes for various content types'),
    t('Volunteer Rally'),
  );

  $export['staff_notes'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _staff_notes_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _staff_notes_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_staff_memo
  $permissions[] = array(
    'name' => 'edit field_staff_memo',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_staff_memo
  $permissions[] = array(
    'name' => 'view field_staff_memo',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  return $permissions;
}
