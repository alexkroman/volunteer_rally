<?php
// $Id$

/**
 * Return an array of the modules to be enabled when this profile is installed.
 *
 * @return array
 *   An array of modules to enable.
 */
function volunteer_rally_profile_modules() {
  $modules = array(
    // Drupal core modules.
    'help', 'menu', 'taxonomy', 'dblog', 'path', 'search',

    // Contributed modules.
    'advanced_help',
    'better_formats',
    'ctools',
    'content',

    // Date modules.
    'date_api', 'date_timezone', 'date', 'date_repeat', 'date_popup',

    'features',
    'pathauto',

    // Redirect 403 access denied to login screen.
    'r4032login',

    'role_delegation',
    'strongarm',
    'token',
    'vertical_tabs',
    'views',
  );

  return $modules;
}

/**
 * Return a description of the profile for the initial installation screen.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles.
 */
function volunteer_rally_profile_details() {
  return array(
    'name' => 'Volunteer Rally',
    'description' => st('Select this profile to enable a Volunteer Rally installation.'),
  );
}

/**
 * Return a list of tasks that this profile supports.
 *
 * @return
 *   A keyed array of tasks the profile will perform during
 *   the final stage. The keys of the array will be used internally,
 *   while the values will be displayed to the user in the installer
 *   task list.
 */
function volunteer_rally_profile_task_list() {
  $tasks['volunteer-management-modules-batch'] = st('Install volunteer rally modules');
  return $tasks;
}

/**
 * Perform any final installation tasks for this profile.
 *
 * The installer goes through the profile-select -> locale-select
 * -> requirements -> database -> profile-install-batch
 * -> locale-initial-batch -> configure -> locale-remaining-batch
 * -> finished -> done tasks, in this order, if you don't implement
 * this function in your profile.
 *
 * If this function is implemented, you can have any number of
 * custom tasks to perform after 'configure', implementing a state
 * machine here to walk the user through those tasks. First time,
 * this function gets called with $task set to 'profile', and you
 * can advance to further tasks by setting $task to your tasks'
 * identifiers, used as array keys in the hook_profile_task_list()
 * above. You must avoid the reserved tasks listed in
 * install_reserved_tasks(). If you implement your custom tasks,
 * this function will get called in every HTTP request (for form
 * processing, printing your information screens and so on) until
 * you advance to the 'profile-finished' task, with which you
 * hand control back to the installer. Each custom page you
 * return needs to provide a way to continue, such as a form
 * submission or a link. You should also set custom page titles.
 *
 * You should define the list of custom tasks you implement by
 * returning an array of them in hook_profile_task_list(), as these
 * show up in the list of tasks on the installer user interface.
 *
 * Remember that the user will be able to reload the pages multiple
 * times, so you might want to use variable_set() and variable_get()
 * to remember your data and control further processing, if $task
 * is insufficient. Should a profile want to display a form here,
 * it can; the form should set '#redirect' to FALSE, and rely on
 * an action in the submit handler, such as variable_set(), to
 * detect submission and proceed to further tasks. See the configuration
 * form handling code in install_tasks() for an example.
 *
 * Important: Any temporary variables should be removed using
 * variable_del() before advancing to the 'profile-finished' phase.
 *
 * @param $task
 *   The current $task of the install system. When hook_profile_tasks()
 *   is first called, this is 'profile'.
 * @param $url
 *   Complete URL to be used for a link or form action on a custom page,
 *   if providing any, to allow the user to proceed with the installation.
 *
 * @return
 *   An optional HTML string to display to the user. Only used if you
 *   modify the $task, otherwise discarded.
 */
function volunteer_rally_profile_tasks(&$task, $url) {

  if ($task == 'profile') {
    // Insert default user-defined node types into the database. For a complete
    // list of available node type attributes, refer to the node type API
    // documentation at: http://api.drupal.org/api/HEAD/function/hook_node_info.
    $types = array(
      array(
        'type' => 'page',
        'name' => st('Page'),
        'module' => 'node',
        'description' => st("A <em>page</em> is a simple method for creating and displaying information that rarely changes, such as an \"About us\" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site's initial home page."),
        'custom' => TRUE,
        'modified' => TRUE,
        'locked' => FALSE,
        'help' => '',
        'min_word_count' => '',
      ),
    );

    foreach ($types as $type) {
      $type = (object) _node_type_set_defaults($type);
      node_type_save($type);
    }

    // Default page to not be promoted, and have comments disabled, and create new revisions.
    variable_set('node_options_page', array('status', 'revision'));
    variable_set('comment_page', COMMENT_NODE_DISABLED);

    // Default footer.
    variable_set('site_footer', st('Volunteer Rally&trade; &mdash; built by <a href="!url">OpenSourcery</a>', array('!url' => url('http://www.opensourcery.com'))));

    // Don't display date and author information for anything by default.
    $theme_settings = variable_get('theme_settings', array());
    $types = array(
      'group',
      'page',
      'priority_code',
      'profile',
      'shift',
      'signup',
    );
    foreach ($types as $type) {
      $theme_settings['toggle_node_info_' . $type] = FALSE;
    }

    variable_set('theme_settings', $theme_settings);

    // Set default theme. This needes some more set up on next page load
    // We cannot do everything here because of _system_theme_data() static cache
    system_theme_data();
    db_query("UPDATE {system} SET status = 0 WHERE type = 'theme' AND name ='%s'", 'garland');
    variable_set('theme_default', 'iggy');
    db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' AND name ='%s'", 'iggy');
    db_query("UPDATE {blocks} SET status = 0, region = ''"); // disable all DB blocks

    // Create roles.
    _volunteer_rally_user_roles();
    // Assign sensible input filter defaults to roles.
    _volunteer_rally_better_formats();
    // Initial permissions.
    _volunteer_rally_set_permissions();
    // Pathauto defaults.
    _volunteer_rally_pathauto();
    // Core configuration and tweaks.
    _volunteer_rally_core();

    $task = 'volunteer-management-modules';
 }

  // We are running a batch task for this profile so basically do
  // nothing and return page.
  if (in_array($task, array('volunteer-management-modules-batch'))) {
    include_once 'includes/batch.inc';
    $output = _batch_page();
  }

  if ($task == 'volunteer-management-modules') {
    $modules = _volunteer_rally_modules();
    $files = module_rebuild_cache();
    // Create batch
    foreach ($modules as $module) {
      $batch['operations'][] = array('_install_module_batch', array($module, $files[$module]->info['name']));
    }
    $batch['operations'][] = array('_volunteer_rally_clean', array());
    $batch['finished'] = '_volunteer_rally_profile_batch_finished';
    $batch['title'] = st('Installing @drupal', array('@drupal' => drupal_install_profile_name()));
    $batch['error_message'] = st('The installation has encountered an error.');

    // Start a batch, switch to 'intranet-modules-batch' task. We need to
    // set the variable here, because batch_process() redirects.
    variable_set('install_task', 'volunteer-management-modules-batch');
    batch_set($batch);
    batch_process($url, $url);
    // Jut for cli installs. We'll never reach here on interactive installs.
    return;
  }

  return $output;
}

/**
 * Implementation of hook_form_alter().
 *
 * Allows the profile to alter the site-configuration form. This is
 * called through custom invocation, so $form_state is not populated.
 */
function volunteer_rally_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'install_configure') {
    // Set default for site name field.
    $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  }
}

/**
 * Creates Volunteer Coordinator and Administrator roles.
 */
function _volunteer_rally_user_roles() {
  foreach (array('volunteer coordinator', 'administrator') as $role) {
    if (!db_result(db_query("SELECT rid FROM {role} WHERE name = '%s'", array(':role_name' => $role)))) {
      db_query("INSERT INTO {role} (name) VALUES ('%s')", $role);
      drupal_set_message(t('The %role role has been added.', array('%role' => $role)));
      $dummy = array();
      better_formats_new_role($dummy, $dummy);
    }
  }
}

/**
 * Set volunteer coordinator and administrator default input format to full HTML.
 */
function _volunteer_rally_better_formats() {
  $roles = array();
  foreach (user_roles() as $rid => $name) {
    if (in_array($name, array('volunteer coordinator', 'administrator'))) {
      $roles[] = $rid;
      // Float admin to top, volunteer coordinator 2nd highest.
      $weight = -2 * $rid;
      db_query("UPDATE {better_formats_defaults} SET format = %d, weight = %d WHERE rid = %d AND type = '%s'", array(':format' => 2, ':weight' => $weight, ':rid' => $rid, ':type' => 'node'));
      db_query("UPDATE {better_formats_defaults} SET format = %d, weight = %d WHERE rid = %d AND type = '%s'", array(':format' => 2, ':weight' => $weight, ':rid' => $rid, ':type' => 'comment'));
    }
  }
  $current = db_result(db_query("SELECT roles FROM {filter_formats} WHERE format = 2"));
  if ($current) {
    $current = explode(',', $roles);
    $roles = array_merge($current, $roles);
  }
  $roles = ','. implode(',', $roles) .',';
  // Allow volunteer coordinators and administrators to use HTML;
  db_query("UPDATE {filter_formats} SET roles = '%s' WHERE format = 2", array(':roles' => $roles));
}

/**
 * Set some sensible permissions.
 */
function _volunteer_rally_set_permissions() {
  $roles = user_roles();
  $admin_rid = array_search('administrator', $roles);
  $admin_user_perms = array(
    'access administration menu',
    'administer blocks',
    'create url aliases',
    'administer menu',
    'administer nodes',
    'create page content',
    'delete any page content',
    'edit any page content',
    'revert revisions',
    'view revisions',
    'assign volunteer coordinator role',
    'assign administrator role',
    'administer users',
    'access administration pages',
    'access user profiles',
  );
  if (!db_result(db_query("SELECT rid FROM {permission} LEFT JOIN {role} USING (rid) WHERE name = '%s'", array(':role_name' => 'administrator')))) {
    db_query("INSERT INTO {permission} (rid, perm) VALUES (%d, '%s')", array(':rid' => $admin_rid, implode(', ', $admin_user_perms)));
    drupal_set_message(t("Set sensible defaults for %role role.", array('%role' => 'administrator')));
  }

  $volunteer_coordinator_rid = array_search('volunteer coordinator', $roles);
  $volunteer_coordinator_user_perms = array(
    'access administration pages',
    'access user profiles',
    'administer users',
    'administer nodes', // This is needed so that volunteer coordinators can change the 'author' of signup nodes
    'create page content',
    'delete own page content',
    'edit any page content',
    'revert revisions',
    'view revisions',
  );
  if (!db_result(db_query("SELECT rid FROM {permission} LEFT JOIN {role} USING (rid) WHERE name = '%s'", array(':role_name' => 'volunteer coordinator')))) {
    db_query("INSERT INTO {permission} (rid, perm) VALUES (%d, '%s')", array(':rid' => $volunteer_coordinator_rid, implode(', ', $volunteer_coordinator_user_perms)));
    drupal_set_message(t("Set sensible defaults for %role role.", array('%role' => 'volunteer coordinator')));
  }
}

/**
 * Initial settings for pathauto and path redirect.
 */
function _volunteer_rally_pathauto() {
  // Get rid of wonky content/foo pattern.
  // The rationale is that it's easier to bulk-update pathauto aliases
  // than it is to remove unwanted ones.
  // We leave this blank because there's no one-size-fits all pattern.
  variable_set('pathauto_node_pattern', '');
  // Remove story pattern.  Even though we didn't create a story type,
  // pathauto will insert this default anyway.
  variable_del('pathauto_node_story_pattern');

  // Path redirect settings.
  $conf['path_redirect_allow_bypass'] = 0;
  $conf['path_redirect_auto_redirect'] = 1;
  $conf['path_redirect_default_status'] = '301';
  $conf['path_redirect_purge_inactive'] = '31536000'; // 1 year.
  $conf['path_redirect_redirect_warning'] = 0;
  foreach ($conf as $var => $val) {
    variable_set($var, $val);
  }
}

/**
 * Core customization.
 */
function _volunteer_rally_core() {
  // Change default anonymous to "Visitor".
  variable_set('anonymous', 'Visitor');
  
  // Increase the capacity of the Drupal watchdog.
  // The default of 1000 rows overflows too quickly, sometimes losing important
  // debug information.  100k rows is big, yet should still keep the watchdog
  // table under 10MB.
  variable_set('dblog_row_limit', 100000);
  
  // Set to open registration.
  variable_set('user_register', 1);

  // Disable all blocks.
  db_query("UPDATE {blocks} SET status = 0, region = ''");

  // Date formats are set here or the homepage calendar view breaks.
  variable_set('date_format_short', 'M j Y - g:ia');
  variable_set('date_format_long', 'l, F j, Y - H:i');
  variable_set('date_format_medium', 'D, Y-m-d H:i');
  variable_set('date_format_day', 'j F Y');
  variable_set('date_format_time', 'g:ia');

  // Timezones.
  if (variable_get('date_default_timezone', FALSE) === FALSE) {
    variable_set('date_default_timezone', date('Z'));
  }
  // Set for the date module as well.
  $timezone = date('e');
  variable_set('date_default_timezone_name', date('e'));

  // Disable per-user timezones for simplicity.
  variable_set('configurable_timezones', 0);

  // Set first day to 0 (date and calendar modules have seemingly
  // random defaults http://drupal.org/node/552154).
  variable_set('date_first_day', 0);

  // Add sign-in/logout link to primary.
  _volunteer_rally_menu_items();
}

/**
 * Additional modules to enable.
 */
function _volunteer_rally_modules() {
  return array(
    // Modules required by the features below.
    'auto_nodetitle',
    'boxes',
    'calendar', 'jcalendar',
    'cck_signup',
    'cck_signup_group',
    'cck_signup_group_confirmation',
    'cck_signup_restrictions',
    'content_permissions',
    'content_profile',
    'content_profile_registration',
    'context',
    'date',
    'date_single_day',
    'editablefields',
    'fieldgroup',
    'jquery_ui',
    'messaging',
    'messaging_mail',
    'modalframe',
    'node_repeat',
    'nodeaccess',
    'nodeaccess_userreference',
    'nodereference',
    'nodereference_url',
    'noderelationships',
    'notifications',
    'notifications_cck_signup',
    'number',
    'optionwidgets',
    'purl',
    'text',
    'url_alter',
    'userreference',

    // Volunteer Rally features.
    'shift_restrictions',
    'shift_signup',
    'shift_signup_group',
    'shift_signup_group_address',
    'shift_signup_group_confirmation',
    'shift_signup_management',
    'shift_signup_notifications',
    'staff_notes',
    'volunteer_profiles',
    'volunteer_rally_day_descriptions',
    'volunteer_shifts',
    'volunteer_shifts_priority_capacity',
    'volunteer_shifts_repeating',

    // Theme
    'less',

    // Admin section.
    'admin',
    'os_admin',
  );
}

/**
 * Finished callback.
 */
function _volunteer_rally_profile_batch_finished($success, $results) {
  variable_set('install_task', 'profile-finished');
}

/**
 * Clear and rebuild caches.
 */
function _volunteer_rally_clean() {
  // Since content_profile adds a value for this variable during
  // install, we must delete it here.
  variable_del('content_profile_profile');

  // Rebuild key tables/caches
  module_rebuild_cache(); // Detects the newly added bootstrap modules
  node_access_rebuild();
  drupal_get_schema(NULL, TRUE); // Clear schema DB cache
  drupal_flush_all_caches();    
  system_theme_data();  // Rebuild theme cache.
  _block_rehash();      // Rebuild block cache.
  views_invalidate_cache(); // Rebuild the views.
  menu_rebuild();       // Rebuild the menu.
  features_rebuild();   // Features rebuild scripts.
  node_access_needs_rebuild(FALSE);
}

/**
 * Menu items.
 */
function _volunteer_rally_menu_items() {
  $primary = array(
    'user/login' => t('Sign In'),
    'logout' => t('Log out'),
  );
  $secondary = array(
    'search' => t('Search'),
    'admin/user/user/create' => t('Create new user'),
  );
  $weight = 10;
  foreach ($primary as $path => $title) {
    $link = array(
      'menu_name'     => 'primary-links',
      'weight'        => $weight,
      'link_title'    => $title,
      'options'       => array(),
      'module'        => 'menu',
      'link_path'     => drupal_get_normal_path($path),
      'hidden'        => 0,
      'has_children'  => 0,
      'expanded'      => 0,
      'customized'    => 0,
      'updated'       => 0,
    );

    // Since menu_save_link will do a query if any plid is passed.
    // Omit it if this is a top level link.
    if ($plid) {
      $link['plid'] = $plid;
    }

    $return = menu_link_save($link);
    $weight ++;
  }

  $weight = -5;
  foreach ($secondary as $path => $title) {
    $link = array(
      'menu_name'     => 'secondary-links',
      'weight'        => $weight,
      'link_title'    => $title,
      'options'       => array(),
      'module'        => 'menu',
      'link_path'     => drupal_get_normal_path($path),
      'hidden'        => 0,
      'has_children'  => 0,
      'expanded'      => 0,
      'customized'    => 0,
      'updated'       => 0,
    );

    // Since menu_save_link will do a query if any plid is passed.
    // Omit it if this is a top level link.
    if ($plid) {
      $link['plid'] = $plid;
    }

    $return = menu_link_save($link);
    $weight += 10;
  }
}

/**
 * Set Volunteer Rally as the default install profile.
 */
if (!function_exists('system_form_install_select_profile_form_alter')) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'volunteer_rally';
    }
  }
}
