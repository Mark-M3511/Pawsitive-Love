<?php

require_once drupal_get_path('module', 'pl_profile'). '/inc/pl_provinces.inc';

function client_profile_pet_profile(){
  $form = array();

  /** @var  string $key -- get the key used for field set */

  $key = 'client_profile_pet_profile';
  $class_prefix = 'pet-profile-';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Pet Profile'),
    '#collapsible' => FALSE,
  );

  $main_class = array($class_prefix. 'field');

  $custom_class = array($class_prefix. 'medical-history');
  $form[$key]['pet_medical_history'] = array(
    '#type' => 'textarea',
    '#title' => t('Medical History'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $key = 'client_profile_pet_profile_vet';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Veterinarian'),
    '#collapsible' => FALSE,
  );

  $custom_class = array($class_prefix. 'name-of-clinic');
  $form[$key]['name_of_clinic'] = array(
    '#type' => 'textfield',
    '#title' => t('Name Of Clinic'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'name-of-vet');
  $form[$key]['name_of_vet'] = array(
    '#type' => 'textfield',
    '#title' => t('Name Of Veterinarian'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'phone-of-vet');
  $form[$key]['vet_phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone'),
    '#default_value' => '',
    '#size' => 40,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'street-address');
  $form[$key]['name_of_vet'] = array(
    '#type' => 'textfield',
    '#title' => t('Street Address'),
    '#default_value' => '',
    '#size' => 60,
    '#maxlength' => 40,
    '#required' => TRUE,
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

  $key = 'client_profile_pet_profile_meds';
  $class_prefix = 'pet-profile-meds';
  $form[$key] = array(
    '#type' => 'fieldset',
    '#title' => t('Pet Profile - Medications and Vaccinations'),
    '#collapsible' => FALSE,
  );

  $custom_class = array($class_prefix. 'vaccination-expiry-date');
  $form[$key]['vaccination_expiry_date'] = array(
    '#type' => 'date',
    '#title' => t('Vaccination Expiry Date'),
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $options = array(
    'pills' => t('Pills'),
    'ointment' => t('Ointment'),
    'drops' => t('Drops'),
    'syringe' => t('Syringe'),
  );
  $options = drupal_map_assoc($options);
  $custom_class = array($class_prefix. 'type-of-meds');
  $form[$key]['home_entry'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Type Of Medication'),
    '#default_value' => '',
    '#options' => $options,
    '#required' => TRUE,
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  $custom_class = array($class_prefix. 'list-of-meds-dosages');
  $form[$key]['list_of_meds_dosages'] = array(
    '#type' => 'textarea',
    '#title' => t('List Of Medications and Dosages'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t('Please put each name on a separate line'),
  );

  $custom_class = array($class_prefix. 'additional-notes');
  $form[$key]['additional_notes'] = array(
    '#type' => 'textarea',
    '#title' => t('Additional Notes'),
    '#default_value' => '',
    '#attributes' => array('class' => $main_class + $custom_class),
    '#description' => t(''),
  );

  return $form;

}