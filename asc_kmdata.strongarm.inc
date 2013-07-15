<?php
/**
 * @file
 * asc_kmdata.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_kmdata_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_people_kmdata_importer_group_slug';
  $strongarm->value = 'system-hr-fs-asc-technology';
  $export['asc_people_kmdata_importer_group_slug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_people_kmdata_use_address';
  $strongarm->value = 1;
  $export['asc_people_kmdata_use_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_people_kmdata_use_appointments';
  $strongarm->value = 1;
  $export['asc_people_kmdata_use_appointments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_people_kmdata_use_email';
  $strongarm->value = 1;
  $export['asc_people_kmdata_use_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_people_kmdata_use_first_name';
  $strongarm->value = 1;
  $export['asc_people_kmdata_use_first_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_people_kmdata_use_inst_username';
  $strongarm->value = 1;
  $export['asc_people_kmdata_use_inst_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_people_kmdata_use_last_name';
  $strongarm->value = 1;
  $export['asc_people_kmdata_use_last_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_people_kmdata_use_phone_number';
  $strongarm->value = 1;
  $export['asc_people_kmdata_use_phone_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_people_kmdata_use_working_title';
  $strongarm->value = 1;
  $export['asc_people_kmdata_use_working_title'] = $strongarm;

  return $export;
}
