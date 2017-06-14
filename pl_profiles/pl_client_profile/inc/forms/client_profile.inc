<?php

function client_profile_profile(){
  $form = array();

  /** @var  $key -- get the key used for field set */

  $key = 'client_profile_my_profile';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('My Profile'),
    '#collapsible' => FALSE,
  );

  $main_class = array('client-profile-field');

  $custom_class = array('client-profile-last-name');
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

  $custom_class = array('client-profile-first-name');
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

  $custom_class = array('client-profile-tel');
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

  $custom_class = array('client-profile-email');
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
  $custom_class = array('client-profile-communication-options');
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

  $custom_class = array('client-profile-street-address');
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

  $custom_class = array('client-profile-street-address');
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

  $custom_class = array('client-profile-city');
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

  $custom_class = array('client-profile-prov_state');
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

  $custom_class = array('client-profile-postal-zip');
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
  $custom_class = array('client-profile-home-entry');
  $form[$key]['home_entry'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Home Entry'),
    '#default_value' => 'Key',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array('client-profile-access-code');
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
  $custom_class = array('client-profile-home-alarm');
  $form[$key]['home_alarm'] = array(
    '#type' => 'radios',
    '#title' => t('Home Alarm'),
    '#default_value' => 'No',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array('client-profile-security-panel');
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

  $custom_class = array('client-profile-pass-code');
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

  $custom_class = array('client-profile-cleaning-supplies');
  $form[$key]['cleaning_supplies'] = array(
    '#type' => 'textarea',
    '#title' => t('Location of cleaning supplies'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $key = 'client_profile_residence_details';
  $custom_class = array('client-profile-cleaning-supplies');
  $form[$key]['cleaning_supplies'] = array(
    '#type' => 'textarea',
    '#title' => t('Location of cleaning supplies'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

//  $custom_class = array('client-profile-about-yourself');
//  $form[$key]['about_yourself'] = array(
//    '#type' => 'textarea',
//    '#title' => t('About Yourself'),
//    '#default_value' => '',
//    '#required' => TRUE,
//    '#attributes' => array('class' => $main_class + $custom_class),
//  );

//  $custom_class = array('client-profile-photo');
//  $form[$key]['client_profile_photo'] = array(
//    '#type' => 'managed_file',
//    '#title' => t('Photo of your pet'),
//    '#description' => t('This image will help us identify your loved one(s). Be sure to keep it updated'),
//    '#default_value' => variable_get('image_example_image_fid', ''),
//    '#upload_location' => 'public://image_example_images/',
//    '#attributes' => array('class' => $main_class + $custom_class),
//  );

  $custom_class = array('client-profile-photo');


  return $form;
}