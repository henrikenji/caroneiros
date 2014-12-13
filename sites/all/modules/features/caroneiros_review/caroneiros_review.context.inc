<?php
/**
 * @file
 * caroneiros_review.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function caroneiros_review_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'avaliacoes';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-avalia_es-block' => array(
          'module' => 'views',
          'delta' => 'avalia_es-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['avaliacoes'] = $context;

  return $export;
}
