<?php

require_once drupal_get_path('module', 'pl_profile'). '/inc/pl_provinces.inc';

function client_profile(){
  return array_merge(
    client_pet_profile(),
    client_basic_profile()
  );
}

function client_pet_profile(){
  $form = array();

  /** @var string $key */
  $key = 'client_profile_pet_profile';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Pet Profile'),
    '#collapsible' => FALSE,
  );

  $class_prefix = 'client-profile-';
  $main_class = array($class_prefix. 'field');

  $custom_class = array($class_prefix. 'last-name');
  $options = array(
    t('Dog'),
    t('Cat'),
    t('Hamster'),
    t('Chinchilla'),
    t('Guinea Pig'),
    t('Rabbit'),
    t('Mice'),
    t('Rat'),
    t('Other'),
  );
  $options = drupal_map_assoc($options);
  $form[$key]['type_of_pet'] = array(
    '#type' => 'select',
    '#title' => t('Type of Pet'),
    '#default_value' => '',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'name-of-pet');
  $form[$key]['name_of_pet'] = array(
    '#type' => 'textfield',
    '#title' => t('Name of Pet'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $options = array(
    t('Male'),
    t('Female'),
  );
  $options = drupal_map_assoc($options);
  $custom_class = array($class_prefix. 'sex-of-pet');
  $form[$key]['sex_of_pet'] = array(
    '#type' => 'radios',
    '#title' => t('Sex'),
    '#default_value' => '',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'dob-of-pet');
  $form[$key]['dob_of_pet'] = array(
    '#type' => 'date',
    '#title' => t('Date of Birth'),
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'breed-of-pet');
  $form[$key]['breed_of_pet'] = array(
    '#type' => 'textfield',
    '#title' => t('Breed'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );


  $custom_class = array($class_prefix. 'dominant-color-of-pet');
  $form[$key]['dominant_color_of_pet'] = array(
    '#type' => 'textfield',
    '#title' => t('Dominant Colour'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $options = array(
    t('Yes'),
    t('No'),
  );
  $options = drupal_map_assoc($options);
  $custom_class = array($class_prefix. 'sterilization-of-pet');
  $form[$key]['sterilization_of_pet'] = array(
    '#type' => 'radios',
    '#title' => t('Spayed or Neutered'),
    '#default_value' => '',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $options = array(
    t('Yes'),
    t('No'),
  );
  $options = drupal_map_assoc($options);
  $custom_class = array($class_prefix. 'chip-status-of-pet');
  $form[$key]['chip_status_of_pet'] = array(
    '#type' => 'radios',
    '#title' => t('Microchipped'),
    '#default_value' => '',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'fav-food-of-pet');
  $form[$key]['fav_food_of_pet'] = array(
    '#type' => 'textfield',
    '#title' => t('What food does your pet?'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'food-location-of-pet');
  $form[$key]['fav_food_of_pet'] = array(
    '#type' => 'textfield',
    '#title' => t('Where is your pet\'s food located?'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'food-qty-of-pet');
  $form[$key]['food_qty_of_pet'] = array(
    '#type' => 'textfield',
    '#title' => t('How much food does your pet get at each meal?'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $key = 'client_profile_pet_profile_behaviour';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Pet\'s Behavioural Profile'),
    '#collapsible' => FALSE,
  );

  $options = array(
    'anxiety' => t('Anxiety'),
    'pet aggressive' => t('Aggression around pets'),
    'food aggressive' => t('Aggression around food'),
    'garbage muncher' => t('Garbage muncher'),
    'dislikes handling' => t('Dislikes handling'),
  );
  $options = drupal_map_assoc($options);
  $custom_class = array($class_prefix. 'behaviour-of-pet');
  $form[$key]['home_entry'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Behavioural Checklist'),
    '#default_value' => '',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'behaviour-aditional-of-pet');
  $form[$key]['behaviour_info_additional'] = array(
    '#type' => 'textarea',
    '#title' => t('Anything else we should be aware of?'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $options = array(
    t('Yes'),
    t('No'),
  );
  $options = drupal_map_assoc($options);
  $custom_class = array($class_prefix. 'crated-status-of-pet');
  $form[$key]['crate_status'] = array(
    '#type' => 'radios',
    '#title' => t('Do you keep your pet crated?'),
    '#default_value' => '',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'crate-location-of-pet');
  $form[$key]['crate_location'] = array(
    '#type' => 'textarea',
    '#title' => t('Create Location'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'litterbox-location-of-pet');
  $form[$key]['litterbox_location'] = array(
    '#type' => 'textarea',
    '#title' => t('Cat Litterbox Location'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'small-pet-cage-location-of-pet');
  $form[$key]['small_pet_cage_location'] = array(
    '#type' => 'textarea',
    '#title' => t('Cat Litterbox Location'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  return $form;
}

function client_basic_profile(){
  $form = array();

  /** @var  string $key -- get the key used for field set */

  $key = 'client_profile_my_profile';
  $class_prefix = 'client-profile-';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('My Profile'),
    '#collapsible' => FALSE,
  );

  $main_class = array($class_prefix. 'field');

  $custom_class = array($class_prefix. 'last-name');
  $form[$key]['first_name'] = array(
    '#type' => 'textfield',
    '#title' => t('First Name'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'first-name');
  $form[$key]['last_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Last Name'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. '-tel');
  $form[$key]['tel'] = array(
    '#type' => 'textfield',
    '#title' => t('Telephone'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. '-email');
  $form[$key]['email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $options = drupal_map_assoc(array(t('Email'), t('SMS'),));
  $custom_class = array($class_prefix. 'communication-options');
  $form[$key]['comm_options'] = array(
    '#type' => 'radios',
    '#title' => t('Communication Options'),
    '#default_value' => 0,
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $key = 'client_profile_additional_info';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Additional Information'),
    '#collapsible' => FALSE,
  );

  $custom_class = array($class_prefix. 'street-address');
  $form[$key]['street_address'] = array(
    '#type' => 'textfield',
    '#title' => t('Street Address'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'street-address');
  $form[$key]['street_unit'] = array(
    '#type' => 'textfield',
    '#title' => t('Unit/Suite/Apt #'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => FALSE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'city');
  $form[$key]['city'] = array(
    '#type' => 'textfield',
    '#title' => t('City'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'prov_state');
  $options = pl_provinces();
  $form[$key]['prov_state'] = array(
    '#type' => 'select',
    '#title' => t('Province'),
    '#default_value' => 'ON',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'postal-zip');
  $form[$key]['postal_zip'] = array(
    '#type' => 'textfield',
    '#title' => t('Postal/Zip'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $options = drupal_map_assoc(array(t('Key'), t('Code'),));
  $custom_class = array($class_prefix. 'home-entry');
  $form[$key]['home_entry'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Home Entry'),
    '#default_value' => 'Key',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'access-code');
  $form[$key]['postal_zip'] = array(
    '#type' => 'textfield',
    '#title' => t('Access Code'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $options = drupal_map_assoc(array(t('Yes'), t('No'),));
  $custom_class = array($class_prefix. 'home-alarm');
  $form[$key]['home_alarm'] = array(
    '#type' => 'radios',
    '#title' => t('Home Alarm'),
    '#default_value' => 'No',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'security-panel');
  $form[$key]['security_panel_location'] = array(
    '#type' => 'textfield',
    '#title' => t('Security Panel Location'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => FALSE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'pass-code');
  $form[$key]['pass_code'] = array(
    '#type' => 'textfield',
    '#title' => t('Pass Code'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => FALSE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $key = 'client_profile_residence_details';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Residence Details'),
    '#collapsible' => FALSE,
  );

  $custom_class = array($class_prefix. 'cleaning-supplies');
  $form[$key]['cleaning_supplies'] = array(
    '#type' => 'textarea',
    '#title' => t('Location of cleaning supplies'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'electricity-shut-off');
  $form[$key]['electricity_shut_off'] = array(
    '#type' => 'textarea',
    '#title' => t('Electricity Shut Off'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'water-shut-off');
  $form[$key]['water_shut_off'] = array(
    '#type' => 'textarea',
    '#title' => t('Electricity Shut Off'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'gas-shut-off');
  $form[$key]['gas_shut_off'] = array(
    '#type' => 'textarea',
    '#title' => t('Gas Shut Off'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  return $form;
}