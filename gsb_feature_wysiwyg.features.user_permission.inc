<?php
/**
 * @file
 * gsb_feature_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gsb_feature_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format markdown'.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format sidebar'.
  $permissions['use text format sidebar'] = array(
    'name' => 'use text format sidebar',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
