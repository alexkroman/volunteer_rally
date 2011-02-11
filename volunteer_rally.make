; $Id$

; Make file for Volunteer Rally

core = 6.x
api = 2

; Volunteer Rally Features
projects[volunteer_rally_features][type] = "module"
projects[volunteer_rally_features][download][type] = "git"
projects[volunteer_rally_features][download][url] = "git://github.com/opensourcery/volunteer_rally_features.git"

; Contrib projects
projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.2"

projects[ajax_load][subdir] = "contrib"
projects[ajax_load][version] = "1.3"

projects[author_smart_name][subdir] = "contrib"
projects[author_smart_name][type] = "module"
projects[author_smart_name][download][type] = "cvs"
projects[author_smart_name][download][module] = "contributions/modules/author_smart_name"
projects[author_smart_name][download][revision] = ":2010-10-04"

projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][version] = "1.2"

projects[better_formats][subdir] = "contrib"
projects[better_formats][version] = "1.2"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.0"

; Calendar - grab 2.x-dev version *and* apply many patches.
; Patch at node 613528 is not necessary since we're using dev version
projects[calendar][subdir] = "contrib"
projects[calendar][type] = "module"
projects[calendar][download][type] = "cvs"
projects[calendar][download][module] = "contributions/modules/calendar"
projects[calendar][download][revision] = "DRUPAL-6--2:2010-08-24"
projects[calendar][patch][] = "http://drupal.org/files/issues/calendar.427388.patch"
projects[calendar][patch][] = "http://drupal.org/files/issues/calendar.preprocess_class.patch"
projects[calendar][patch][] = "http://drupal.org/files/issues/calendar.zebra-stripe.patch"
projects[calendar][patch][] = "http://drupal.org/files/issues/calendar.732896.patch"

projects[cck][subdir] = "contrib"
projects[cck][version] = "2.8"

projects[cck_signup][subdir] = "contrib"
projects[cck_signup][version] = "1.0-alpha4"
; http://drupal.org/node/1039274#comment-4017894
projects[cck_signup][patch][] = "http://drupal.org/files/issues/cck_signup.1039274-9.patch"
; http://drupal.org/node/1039294#comment-4013990
projects[cck_signup][patch][] = "http://drupal.org/files/issues/cck_signup.1039294-2.patch"

projects[content_profile][subdir] = "contrib"
projects[content_profile][version] = "1.0"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.8"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"
projects[date][patch][] = "http://drupal.org/files/issues/385688_related_table_filter_handler_0.patch"

projects[date_single_day][subdir] = "contrib"
projects[date_single_day][version] = "1.2"

projects[designkit][subdir] = "contrib"
projects[designkit][version] = "1.0-beta1"

projects[editablefields][subdir] = "contrib"
projects[editablefields][version] = "2.0"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0"

projects[jquery_ui][subdir] = "contrib"
projects[jquery_ui][version] = "1.4"

projects[messaging][subdir] = "contrib"
projects[messaging][version] = "2.3"

projects[modalframe][subdir] = "contrib"
projects[modalframe][version] = "1.7"

projects[node_repeat][subdir] = "contrib"
projects[node_repeat][version] = "1.1"
projects[node_repeat][patches][] = "http://drupal.org/files/issues/node_repeat.remove_weight.patch"
projects[node_repeat][patches][] = "http://drupal.org/files/issues/node_repeat.patch"

projects[nodeaccess][subdir] = "contrib"
projects[nodeaccess][version] = "1.3"

projects[nodeaccess_userreference][subdir] = "contrib"
projects[nodeaccess_userreference][version] = "2.6"

projects[nodereference_url][subdir] = "contrib"
projects[nodereference_url][version] = "1.6"

projects[noderelationships][subdir] = "contrib"
projects[noderelationships][version] = "1.6"
; http://drupal.org/node/660958#comment-3363320
projects[noderelationships][patch][] = "http://drupal.org/files/issues/noderelationships-660958-41.patch"

projects[notifications][subdir] = "contrib"
projects[notifications][version] = "2.3"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.5"

projects[purl][subdir] = "contrib"
projects[purl][version] = "1.0-beta13"

projects[r4032login][subdir] = "contrib"
projects[r4032login][version] = "1.2"
projects[r4032login][patch][] = "http://drupal.org/files/issues/r4032login.patch"

projects[role_delegation][subdir] = "contrib"
projects[role_delegation][version] = "1.4"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.15"

projects[url_alter][subdir] = "contrib"
projects[url_alter][version] = "1.2"

; This version works with php 5.3
projects[vertical_tabs][subdir] = "contrib"
projects[vertical_tabs][type] = "module"
projects[vertical_tabs][download][type] = "cvs"
projects[vertical_tabs][download][module] = "contributions/modules/vertical_tabs"
projects[vertical_tabs][download][revision] = "DRUPAL-6--1:2010-02-09"

; OpenSourcery administration feature
projects[os_admin][subdir] = "stock"
projects[os_admin][type] = "module"
projects[os_admin][download][type] = "git"
projects[os_admin][download][url] = "git://github.com/opensourcery/os_admin.git"
projects[os_admin][download][tag] = "DRUPAL-6--1-0-ALPHA4"


projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.1"

; Patched projects

projects[views][subdir] = "contrib"
projects[views][version] = "2.12"
; http://drupal.org/node/862072
projects[views][patch][] = "http://drupal.org/files/issues/views.862072.patch"

; Devel modules

projects[devel][subdir] = "development"
projects[devel][version] = "1.23"

projects[simpletest][subdir] = "development"
projects[simpletest][version] = "2.10"

; Themes
projects[zen][version] = "2.0"
; http://drupal.org/node/634552#comment-3244662
projects[zen][patch][] = "http://drupal.org/files/issues/634552-63-context-conflict.patch"

projects[doune][type] = "theme"
projects[doune][download][type] = "git"
projects[doune][download][url] = "git://github.com/opensourcery/doune.git"
projects[doune][download][branch] = "DRUPAL-6--2"

projects[iggy][type] = "theme"
projects[iggy][download][type] = "git"
projects[iggy][download][url] = "git://github.com/opensourcery/iggy.git"

; Libraries
libraries[jquery_ui][download][type] = "get"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery.ui-1.6.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"
