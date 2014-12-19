<?php
/**
 * @file
 * caroneiros_usuario.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caroneiros_usuario_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
