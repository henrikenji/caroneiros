<?php
/**
 * @file
 * caroneiros_home.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function caroneiros_home_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-banner-block' => array(
          'module' => 'views',
          'delta' => 'banner-block',
          'region' => 'header',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['front_page'] = $context;

  return $export;
}
