<?php
/**
 * @file
 * gsb_feature_wysiwyg.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function gsb_feature_wysiwyg_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'content_editors';
  $linkit_profile->admin_title = 'Content Editors';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:file' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
    'entity:node' => array(
      'result_description' => '[node:title]',
      'bundles' => array(
        'academic_calendar_event' => 0,
        'alumni' => 0,
        'business_insight' => 0,
        'case_study' => 0,
        'club' => 0,
        'event' => 0,
        'faculty' => 0,
        'msx_fellows' => 0,
        'media_mention' => 0,
        'news' => 0,
        'page' => 0,
        'phd_candidate' => 0,
        'publication' => 0,
        'research_paper' => 0,
        'staff' => 0,
        'student' => 0,
        'gsb_video' => 0,
        'webform' => 0,
        'week_in_the_life' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'academic_area' => 0,
        'business_insight_topic' => 0,
        'centers_research_programs' => 0,
        'club_category' => 0,
        'company_organization' => 0,
        'department' => 0,
        'discipline' => 0,
        'event_category' => 0,
        'event_series' => 0,
        'industry' => 0,
        'program' => 0,
        'region' => 0,
        'tag' => 0,
        'target_audience' => 0,
        'workbench_sections' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'rel' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    11 => 1,
    16 => 1,
    21 => 1,
  );
  $linkit_profile->weight = 0;
  $export['content_editors'] = $linkit_profile;

  return $export;
}
