// $Id: cck-signup-group.js,v 1.5 2010/07/26 23:41:06 jhedstrom Exp $
Drupal.behaviors.cckSignupGroup = function (context) {
  var field = $('#edit-' + Drupal.settings.cckSignupGroup.field + '-0-value', context);
  var group = $('.' + Drupal.settings.cckSignupGroup.group, context);
  if (field.val() < 2) {
    group.hide();
  }
  field.change(function () {
    if ($(this).val() < 2) {
      group.hide();
    }
    else {
      group.fadeIn();
    }
  });
}