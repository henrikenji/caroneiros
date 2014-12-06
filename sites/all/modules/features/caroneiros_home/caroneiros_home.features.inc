<?php
/**
 * @file
 * caroneiros_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caroneiros_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function caroneiros_home_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function caroneiros_home_image_default_styles() {
  $styles = array();

  // Exported image style: icone.
  $styles['icone'] = array(
    'name' => 'icone',
    'label' => 'icone',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function caroneiros_home_node_info() {
  $items = array(
    'icone' => array(
      'name' => t('icone'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('title'),
      'help' => '',
    ),
    'images' => array(
      'name' => t('images'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('images'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
