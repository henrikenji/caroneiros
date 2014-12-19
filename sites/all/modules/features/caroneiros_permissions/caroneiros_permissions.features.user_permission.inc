<?php
/**
 * @file
 * caroneiros_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function caroneiros_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access gmap getdirections'.
  $permissions['access gmap getdirections'] = array(
    'name' => 'access gmap getdirections',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'getdirections',
  );

  // Exported permission: 'access user getdirections'.
  $permissions['access user getdirections'] = array(
    'name' => 'access user getdirections',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'getdirections',
  );

  // Exported permission: 'create carona content'.
  $permissions['create carona content'] = array(
    'name' => 'create carona content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create review content'.
  $permissions['create review content'] = array(
    'name' => 'create review content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any carona content'.
  $permissions['delete any carona content'] = array(
    'name' => 'delete any carona content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any review content'.
  $permissions['delete any review content'] = array(
    'name' => 'delete any review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own carona content'.
  $permissions['delete own carona content'] = array(
    'name' => 'delete own carona content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own review content'.
  $permissions['delete own review content'] = array(
    'name' => 'delete own review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any carona content'.
  $permissions['edit any carona content'] = array(
    'name' => 'edit any carona content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any review content'.
  $permissions['edit any review content'] = array(
    'name' => 'edit any review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own carona content'.
  $permissions['edit own carona content'] = array(
    'name' => 'edit own carona content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own review content'.
  $permissions['edit own review content'] = array(
    'name' => 'edit own review content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'rate content'.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fivestar',
  );

  // Exported permission: 'view node map'.
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view user location details'.
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view user map'.
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'gmap_location',
  );

  return $permissions;
}
