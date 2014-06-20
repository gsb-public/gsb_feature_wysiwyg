<?php
/**
 * @file
 * gsb_feature_wysiwyg.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_wysiwyg_defaultconfig_features() {
  return array(
    'gsb_feature_wysiwyg' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function gsb_feature_wysiwyg_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format gsb_html_text'.
  $permissions['use text format gsb_html_text'] = array(
    'name' => 'use text format gsb_html_text',
    'roles' => array(
      'aa' => 'aa',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'fa' => 'fa',
      'marketing_admin' => 'marketing_admin',
      'section editor' => 'section editor',
      'section manager' => 'section manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format gsb_wysiwyg_text'.
  $permissions['use text format gsb_wysiwyg_text'] = array(
    'name' => 'use text format gsb_wysiwyg_text',
    'roles' => array(
      'aa' => 'aa',
      'administrator' => 'administrator',
      'editor' => 'editor',
      'fa' => 'fa',
      'marketing_admin' => 'marketing_admin',
      'section editor' => 'section editor',
      'section manager' => 'section manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format markdown'.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
