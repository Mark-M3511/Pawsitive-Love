<?php

function client_profile_profile(){
  $form = array();

  $form['client_profile_my_profile'] = array(
    '#type' => 'fieldset',
    '#title' => t('My Profile'),
    '#collapsible' => FALSE,
  );

  /** @var  $key -- get the key used for field set */
  $key = key($form);
  $main_classes = array('client-profile-field');

  $custom_classes = array('client-profile-last-name');
  $form[$key]['first_name'] = array(
    '#type' => 'textfield',
    '#title' => t('First Name'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_classes + $custom_classes),
  );

  $custom_classes = array('client-profile-first-name');
  $form[$key]['last_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Last Name'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_classes + $custom_classes),
  );

  $custom_classes = array('client-profile-about-yourself');
  $form[$key]['about_yourself'] = array(
    '#type' => 'textarea',
    '#title' => t('About Yourself'),
    '#default_value' => '',
    '#required' => TRUE,
    '#attributes' => array('class' => $main_classes + $custom_classes),
  );

  $custom_classes = array('client-profile-photo');
  $form[$key]['client_profile_photo'] = array(
    '#type' => 'managed_file',
    '#title' => t('Photo of your pet'),
    '#description' => t('This image will help us identify your loved one(s). Be sure to keep it updated'),
    '#default_value' => variable_get('image_example_image_fid', ''),
    '#upload_location' => 'public://image_example_images/',
    '#attributes' => array('class' => $main_classes + $custom_classes),
  );

  return $form;
}