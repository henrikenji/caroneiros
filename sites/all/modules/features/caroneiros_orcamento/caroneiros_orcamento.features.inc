<?php
/**
 * @file
 * caroneiros_orcamento.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caroneiros_orcamento_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
