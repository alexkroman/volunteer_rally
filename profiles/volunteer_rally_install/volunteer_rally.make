; $Id$

; Make file for Volunteer Rally

core = 6.x

; Contrib projects

projects[admin][subdir] = "contrib"
projects[admin][version] = "2.0"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.2"

projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][version] = "1.2"

projects[better_formats][subdir] = "contrib"
projects[better_formats][version] = "1.2"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.0"

projects[calendar][subdir] = "contrib"
projects[calendar][version] = "2.2"

projects[cck][subdir] = "contrib"
projects[cck][version] = "2.8"

projects[cck_signup][subdir] = "contrib"
projects[cck_signup][version] = "1.0-alpha3"

projects[content_profile][subdir] = "contrib"
projects[content_profile][version] = "1.0"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.7"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[date_single_day][subdir] = "contrib"
projects[date_single_day][version] = "1.2"

projects[editablefields][subdir] = "contrib"
projects[editablefields][version] = "2.0"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0"

projects[jquery_ui][subdir] = "contrib"
projects[jquery_ui][version] = "1.3"

projects[less][subdir] = "contrib"
projects[less][version] = "2.1"

projects[messaging][subdir] = "contrib"
projects[messaging][version] = "2.2"

projects[modalframe][subdir] = "contrib"
projects[modalframe][version] = "1.7"

projects[node_repeat][subdir] = "contrib"
projects[node_repeat][version] = "1.1"

projects[nodeaccess][subdir] = "contrib"
projects[nodeaccess][version] = "1.3"

projects[nodeaccess_userreference][subdir] = "contrib"
projects[nodeaccess_userreference][version] = "2.6"

projects[nodereference_url][subdir] = "contrib"
projects[nodereference_url][version] = "1.6"

projects[noderelationships][subdir] = "contrib"
projects[noderelationships][version] = "1.6"

projects[notifications][subdir] = "contrib"
projects[notifications][version] = "2.2"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.4"

projects[purl][subdir] = "contrib"
projects[purl][version] = "1.0-beta13"

projects[r4032login][subdir] = "contrib"
projects[r4032login][version] = "1.2"

projects[role_delegation][subdir] = "contrib"
projects[role_delegation][version] = "1.3"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.14"

projects[url_alter][subdir] = "contrib"
projects[url_alter][version] = "1.2"

projects[vertical_tabs][subdir] = "contrib"
projects[vertical_tabs][type] = "module"
projects[vertical_tabs][download][type] = "cvs"
projects[vertical_tabs][download][module] = "contributions/modules/vertical_tabs"
projects[vertical_tabs][download][revision] = "DRUPAL-6--2:2010-02-09"

; Patched projects

projects[views][subdir] = "contrib"
projects[views][version] = "2.11"
; http://drupal.org/node/862072
projects[views][patch][] = "http://drupal.org/files/issues/views.862072.patch"

; Devel modules

projects[devel][subdir] = "development"
projects[devel][version] = "1.22"

projects[simpletest][subdir] = "development"
projects[simpletest][version] = "2.10"
