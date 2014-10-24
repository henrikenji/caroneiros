<?php
/**
 * @file
 * caroneiros_carona.features.inc
 */

/**
 * Implements hook_node_info().
 */
function caroneiros_carona_node_info() {
  $items = array(
    'carona' => array(
      'name' => t('Carona'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
