<?php

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

  /** Place province array in it's own file */
  $custom_class = array($class_prefix. 'prov_state');
  $options = array(
    'AB' => 'Alberta',
    'BC' => 'British Columbia',
    'MB' => 'Manitoba',
    'NB' => 'New Brunswick',
    'NL' => 'Newfoundland and Labador',
    'NT' => 'Northwest Territories',
    'NS' => 'Nova Scotia',
    'NU' => 'Nunavut',
    'ON' => 'Ontario',
    'PE' => 'Prince Edward Island',
    'QC' => 'Quebec',
    'SK' => 'Saskatchewan',
    'YT' => 'Yukon',
  );
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

  $class_prefix = 'employee-profile-';
  $main_class = array($class_prefix. 'emergency-contact');

  $custom_class = array($class_prefix. 'emergency-contact-first-name');
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

  $custom_class = array($class_prefix. 'emergency-contact-last-name');
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

  $custom_class = array($class_prefix. 'emergency-contact-tel');
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

  $custom_class = array($class_prefix. 'emergency-contact-email');
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

  $key = 'employee_profile_vehicle_contact';

  $class_prefix = 'employee-profile-';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Employee Profile - Vehicle Information'),
    '#collapsible' => FALSE,
  );

  return $form;
}