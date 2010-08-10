<?php

function author_smart_name_settings() {
  
  $options = array(
    '0' => t('User Name'),
    );
    
  if (module_exists('profile')){
    $options['1'] = y('Profile module (core)');
  }
    
  if (module_exists('content_profile')){
    $options['2'] = l(t('Content Profile'), 'http://drupal.org/project/content_profile', array('absolute'=>TRUE, 'target'=>'_blank')) . t(' module');
  }
  
  $source_default = variable_get('author_smart_name_source', 0);

  $form['author_smart_name_source'] = array(
    '#type' => 'radios',
    '#title' => t('What would you like to use as the source for your Author names?'),
    '#default_value' => $source_default,
    '#description' => t('By default, the authoring information field is autopopulated with usernames.  Because one often has better values than users names available for authoring information, this module allows you to choose from alternate sources of names: Core Profile module, Content Profile module, etc.  Please choose from the options provided.'),
    '#options' => $options,
  );
  
  $form['author_smart_name_markup'] = array(
    '#value' => '<p>'.t('If you have an alternate source that is not supported by this module, please open an issue. ').'</p>',
    );
  
  // TODO details for each option - would be cool if this form were js smart
  
  // TODO which profile field? (option 1)
  if ($source_default == 1){
    $profile_fields = _profile_get_fields();
    // TODO this might not be in the right format - needs testing for this use case
    
    $form['author_smart_name_profile'] = array(
      '#type' => 'select',
      '#title' => t('Which Profile field?'),
      '#options' => $profile_fields,
      '#default_value' => variable_get('author_smart_name_profile', 0),
    );
  }
  
  // TODO which node field? (option 2)
  if ($source_default == 2){
    
    $types = content_profile_get_types('names');
    $type_options = array();
    $count = 1;
    foreach ($types as $type => $name){
      $type_options[$type] = $name;
      if ($count == 1){
        $type_default = $type; 
      }
      $count++;
    }
    if (sizeof($types) != 1) {
      $type_default = variable_get('author_smart_name_profile_type', FALSE);  
    }
    
    $form['author_smart_name_profile_type'] = array(
      '#type' => 'select',
      '#title' => t('Which Content Profile (type)?'),
      '#options' => $type_options,
      '#default_value' => $type_default,
    );
    
    if ($type_default){
    
      // TODO add cck support
      $fields = array('title' => 'Node Title');
      
      $field_default = variable_get('author_smart_name_profile_field', 'title');
      
      $form['author_smart_name_profile_field'] = array(
        '#type' => 'select',
        '#title' => t('Which Content Profile Field?'),
        '#options' => $fields,
        '#default_value' => $field_default,
      );
    } // specified content type
  } // spedified module source

  return system_settings_form($form);
}