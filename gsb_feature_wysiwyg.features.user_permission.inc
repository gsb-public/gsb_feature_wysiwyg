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
    'roles' => array(),
    'module' => 'filter',
  );

  return $permissions;
}
