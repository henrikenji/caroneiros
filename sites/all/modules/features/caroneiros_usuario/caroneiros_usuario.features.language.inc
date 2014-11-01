<?php
/**
 * @file
 * caroneiros_usuario.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function caroneiros_usuario_locale_default_languages() {
  $languages = array();

  // Exported language: pt-br.
  $languages['pt-br'] = array(
    'language' => 'pt-br',
    'name' => 'Portuguese, Brazil',
    'native' => 'Português',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'pt-br',
    'weight' => -10,
  );
  return $languages;
}
