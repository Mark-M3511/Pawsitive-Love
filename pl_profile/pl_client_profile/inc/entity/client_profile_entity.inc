<?php
/**
 * Created by HGT.
 * User: HGT
 * Date: 2017-08-03
 * Time: 7:55 PM
 */


/*
* Extending Entity base class to represent our new entity
*/
class PL_Client_Human_Profile_Entity extends Entity {
  protected function defaultLabel(){
    return $this->cppid;
  }

  protected function defaultUri(){
    return array('path' => 'pl-client-profile/' . $this->identifier());
  }

}

/*
* Extending the EntityAPIController for the PL_Client_Profile entity.
*/
class PL_Client_Human_Profile_EntityMetadataController extends EntityDefaultMetadataController {

  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];
    $properties['eid'] = array(
      'label' => t('Client Profile Id'),
      'description' => t('The primary identifier for records in this table'),
      'type' => 'integer',
      'schema field' => 'cppid',
      'setter callback' => 'entity_property_verbatim_set',
    );
    $properties['date_created'] = array(
      'label' => t('Client Profile Created'),
      'description' => t('Date and Time profile was created in the system'),
      'type' => 'date',
      'schema field' => 'date_created',
      'setter callback' => 'entity_property_verbatim_set',
    );
    $properties['date_updated'] = array(
      'label' => t('Client Profile Updated'),
      'description' => t('Date and Time profile was last updated in the system'),
      'type' => 'date',
      'schema field' => 'date_updated',
      'setter callback' => 'entity_property_verbatim_set',
    );
    $properties['last_name'] = array(
      'label' => t('Client Profile Last Name'),
      'description' => t('Client Profile Last Name'),
      'type' => 'text',
      'schema field' => 'date_updated',
      'setter callback' => 'entity_property_verbatim_set',
    );
    $properties['first_name'] = array(
      'label' => t('Client Profile First Name'),
      'description' => t('Client Profile First Name'),
      'type' => 'text',
      'schema field' => 'date_updated',
      'setter callback' => 'entity_property_verbatim_set',
    );
    $properties['tel_mobile'] = array(
      'label' => t('Client Profile Mobile Number'),
      'description' => t('Client Profile Mobile Number'),
      'type' => 'text',
      'schema field' => 'tel_mobile',
      'setter callback' => 'entity_property_verbatim_set',
    );
    $properties['email'] = array(
      'label' => t('Client Profile Email'),
      'description' => t('Client Profile Email'),
      'type' => 'text',
      'schema field' => 'email',
      'setter callback' => 'entity_property_verbatim_set',
    );
    $properties['street_address'] = array(
      'label' => t('Client Profile Street Adddress'),
      'description' => t('\'Client Profile Street Adddress'),
      'type' => 'text',
      'schema field' => 'street_address',
      'setter callback' => 'entity_property_verbatim_set',
    );
    $properties['city_town'] = array(
      'label' => t('Client Profile City/Town'),
      'description' => t('Client Profile City/Town'),
      'type' => 'text',
      'schema field' => 'street_address',
      'setter callback' => 'entity_property_verbatim_set',
    );
    $properties['province_state'] = array(
      'label' => t('Client Profile Province/State'),
      'description' => t('Client Profile Province/State'),
      'type' => 'text',
      'schema field' => 'street_address',
      'setter callback' => 'entity_property_verbatim_set',
    );

    return $info;

  }
}