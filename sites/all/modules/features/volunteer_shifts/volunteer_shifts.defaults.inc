<?php

/**
 * Helper to implementation of hook_default_box().
 */
function _volunteer_shifts_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'volunteer_rally_site_message';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Sitewide message for authenticated users';
  $box->options = array(
    'body' => 'Placeholder content for a site-wide message to authenticated users.',
    'format' => 1,
  );

  $export['volunteer_rally_site_message'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'volunteer_rally_welcome_message';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome';
  $box->description = 'Welcome message';
  $box->options = array(
    'body' => 'Welcome to Volunteer Rally. Customize this box with a message to users that are not logged in.',
    'format' => 1,
  );

  $export['volunteer_rally_welcome_message'] = $box;
  return $export;
}

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _volunteer_shifts_content_default_fields() {
  $fields = array();

  // Exported field: field_shift_capacity
  $fields[] = array(
    'field_name' => 'field_shift_capacity',
    'type_name' => 'shift',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_shift_capacity][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Total capacity',
      'weight' => '-2',
      'description' => 'The total capacity for the shift. Signups will be disabled once this capacity is hit.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_shift_date
  $fields[] = array(
    'field_name' => 'field_shift_date',
    'type_name' => 'shift',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'time',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'short',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'required',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - g:ia',
      'input_format_custom' => '',
      'increment' => '5',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'single_day' => 1,
      'label' => 'Date/time',
      'weight' => '-4',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_shift_signup_status
  $fields[] = array(
    'field_name' => 'field_shift_signup_status',
    'type_name' => 'shift',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Closed
1|Open',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '1',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sign-up status',
      'weight' => '-3',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  array(
    t('Date/time'),
    t('Sign-up status'),
    t('Total capacity'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _volunteer_shifts_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front page, anonymous';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
    'views' => array(
      'values' => array(
        'shift_calendar' => 'shift_calendar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-volunteer_rally_welcome_message' => array(
          'module' => 'boxes',
          'delta' => 'volunteer_rally_welcome_message',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'volunteer_rally-simple_login' => array(
          'module' => 'volunteer_rally',
          'delta' => 'simple_login',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  $translatables['front'] = array(
    t('Front page, anonymous'),
    t('Volunteer Rally'),
  );

  $export['front'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_authenticated';
  $context->description = 'Front, authenticated';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-my_shift_signups-block_1' => array(
          'module' => 'views',
          'delta' => 'my_shift_signups-block_1',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'boxes-volunteer_rally_site_message' => array(
          'module' => 'boxes',
          'delta' => 'volunteer_rally_site_message',
          'region' => 'content_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  $translatables['front_authenticated'] = array(
    t('Front, authenticated'),
    t('Volunteer Rally'),
  );

  $export['front_authenticated'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _volunteer_shifts_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _volunteer_shifts_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer nodes
  $permissions[] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create shift content
  $permissions[] = array(
    'name' => 'create shift content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: delete any shift content
  $permissions[] = array(
    'name' => 'delete any shift content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own shift content
  $permissions[] = array(
    'name' => 'delete own shift content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit any shift content
  $permissions[] = array(
    'name' => 'edit any shift content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_shift_capacity
  $permissions[] = array(
    'name' => 'edit field_shift_capacity',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_shift_date
  $permissions[] = array(
    'name' => 'edit field_shift_date',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_shift_signup_status
  $permissions[] = array(
    'name' => 'edit field_shift_signup_status',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit own shift content
  $permissions[] = array(
    'name' => 'edit own shift content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: search content
  $permissions[] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: use advanced search
  $permissions[] = array(
    'name' => 'use advanced search',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_shift_capacity
  $permissions[] = array(
    'name' => 'view field_shift_capacity',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_shift_date
  $permissions[] = array(
    'name' => 'view field_shift_date',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _volunteer_shifts_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_shift';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '1',
    'menu' => '0',
    'path' => '2',
  );

  $export['content_extra_weights_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_shift';
  $strongarm->value = array(
    '0' => 'status',
    '1' => 'revision',
  );

  $export['node_options_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_shift_pattern';
  $strongarm->value = 'shifts/[nid]';

  $export['pathauto_node_shift_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_display_denied_message';
  $strongarm->value = 'You must login to view this page.';

  $export['r4032login_display_denied_message'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'welcome';

  $export['site_frontpage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_forms';
  $strongarm->value = array(
    'signup_node_form' => array(
      'author' => 0,
      'menu' => 'menu',
      'revision_information' => 'revision_information',
      'options' => 'options',
      'path' => 'path',
      'group_signup_group' => 0,
      'group_signup_details' => 0,
    ),
    // Unfortunately, vertical tabs stores all of these in a single
    // variable, so we have feature cross-over.
    'group_node_form' => array(
      'menu' => 'menu',
      'revision_information' => 'revision_information',
      'author' => 'author',
      'options' => 'options',
      'path' => 'path',
      'group_address' => 0,
    ),
  );

  $export['vertical_tabs_forms'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_node_type_settings';
  $strongarm->value = 1;

  $export['vertical_tabs_node_type_settings'] = $strongarm;
  return $export;
}
