<?php
/**
 * @file
 * gsb_feature_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_allowed_types';
  $strongarm->value = array(
    0 => 'image',
    1 => 'video',
    2 => 'audio',
    3 => 'document',
  );
  $export['media__wysiwyg_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_browser_plugins';
  $strongarm->value = array(
    0 => 'gsb_media_center_image',
    1 => 'gsb_media_center_video',
    2 => 'gsb_media_center_document',
  );
  $export['media__wysiwyg_browser_plugins'] = $strongarm;

  return $export;
}
