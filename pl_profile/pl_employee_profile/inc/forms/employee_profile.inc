<?php

require_once drupal_get_path('module', 'pl_profile'). '/inc/pl_provinces.inc';

function employee_profile() {

  $forms = array();

  $key = 'employee_profile';
  $forms[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Employee Profile'),
    '#collapsible' => FALSE,
  );

  $class_prefix = 'employee-profile-';
  $main_class = array($class_prefix. 'field');

  $custom_class = array($class_prefix. 'first-name');
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

  $custom_class = array($class_prefix. 'last-name');
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

  $key = 'employee_profile_additional_info';
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

//  $custom_class = array($class_prefix. 'street-address');
//  $form[$key]['street_unit'] = array(
//    '#type' => 'textfield',
//    '#title' => t('Unit/Suite/Apt #'),
//    '#default_value' => '',
//    '#size' => 40,
//    '#maxlength' => 20,
//    '#required' => FALSE,
//    '#attributes' => array('class' => $main_class + $custom_class),
//    '#description' => t(''),
//  );

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

  /** Place province array in it's own file */
  $custom_class = array($class_prefix. 'prov_state');
//  $options = array(
//    'AB' => 'Alberta',
//    'BC' => 'British Columbia',
//    'MB' => 'Manitoba',
//    'NB' => 'New Brunswick',
//    'NL' => 'Newfoundland and Labador',
//    'NT' => 'Northwest Territories',
//    'NS' => 'Nova Scotia',
//    'NU' => 'Nunavut',
//    'ON' => 'Ontario',
//    'PE' => 'Prince Edward Island',
//    'QC' => 'Quebec',
//    'SK' => 'Saskatchewan',
//    'YT' => 'Yukon',
//  );
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


  $custom_class = array($class_prefix. 'about=yourself');
  $form[$key]['about_yourself'] = array(
    '#type' => 'textarea',
    '#title' => t('About Yourself'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'photo');
  $form[$key]['employee_profile_photo'] = array(
    '#type' => 'managed_file',
    '#title' => t('Photo of your pet'),
    '#description' => t('This image will help us identify your loved one(s). Be sure to keep it updated'),
    '#default_value' => variable_get('image_example_image_fid', ''),
    '#upload_location' => 'public://image_example_images/',
    '#attributes' => array('class' => $main_class + $custom_class),
  );

  return $form;

}

function employee_emergency_contact(){

  $form = array();

  $key = 'employee_profile_emergency_contact';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Employee Profile - Emergency Contact'),
    '#collapsible' => FALSE,
  );

  $class_prefix = 'employee-profile-emergency-contact-';
  $main_class = array($class_prefix. 'emergency-contact');

  $custom_class = array($class_prefix. 'first-name');
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

  $custom_class = array($class_prefix. 'last-name');
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

  $custom_class = array($class_prefix. 'tel');
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

  $custom_class = array($class_prefix. 'email');
  $form[$key]['email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  return $form;

}

function employee_vehicle_information() {
  $form = array();

  $key = 'employee_profile_vehicle';

  $class_prefix = 'employee-profile-';
  $main_class = array($class_prefix. 'vehicle');

  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Employee Profile - Vehicle Information'),
    '#collapsible' => FALSE,
  );

  $custom_class = array($class_prefix. 'year');
  $options = array();
  $year = (int)date('Y');
  $year += 1;
  for ($ctr = ($year - 10); $ctr <= $year;$ctr++){
    $options = array($year => $year);
  }
  $form[$key]['vehicle_year'] = array(
    '#type' => 'select',
    '#title' => t('Year'),
    '#default_value' => $year,
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'vehicle-make');
  $form[$key]['vehicle_make'] = array(
    '#type' => 'textfield',
    '#title' => t('Make'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'vehicle-model');
  $form[$key]['vehicle_model'] = array(
    '#type' => 'textfield',
    '#title' => t('Model'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'licence-plate');
  $form[$key]['vehicle_licence_plate'] = array(
    '#type' => 'textfield',
    '#title' => t('Licence Plate'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $options = array(
    t('Yes'),
    t('No'),
  );
  $options = drupal_map_assoc($options);
  $custom_class = array('valid-driver-licence');
  $form[$key]['valid_drivers_licence'] = array(
    '#type' => 'radios',
    '#title' => t('Valid Driver\'s Licence'),
    '#default_value' => '',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'dl-expiry-date');
  $form[$key]['dl_expiry_date'] = array(
    '#type' => 'date',
    '#title' => t('Driver\'s Licence Expiry Date'),
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  return $form;
}