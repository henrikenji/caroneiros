<?php
/**
 * @file
 * caroneiros_carona.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function caroneiros_carona_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'caronas_disponiveis';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Caronas Disponíveis';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Caronas Disponíveis';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Tipo */
  $handler->display->display_options['fields']['field_tipo']['id'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['table'] = 'field_data_field_tipo';
  $handler->display->display_options['fields']['field_tipo']['field'] = 'field_tipo';
  $handler->display->display_options['fields']['field_tipo']['label'] = '';
  $handler->display->display_options['fields']['field_tipo']['element_label_colon'] = FALSE;
  /* Field: Content: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Vagas */
  $handler->display->display_options['fields']['field_vagas']['id'] = 'field_vagas';
  $handler->display->display_options['fields']['field_vagas']['table'] = 'field_data_field_vagas';
  $handler->display->display_options['fields']['field_vagas']['field'] = 'field_vagas';
  $handler->display->display_options['fields']['field_vagas']['label'] = '';
  $handler->display->display_options['fields']['field_vagas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vagas']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carona' => 'carona',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'caronas-disponiveis';
  $translatables['caronas_disponiveis'] = array(
    t('Master'),
    t('Caronas Disponíveis'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('Page'),
  );
  $export['caronas_disponiveis'] = $view;

  return $export;
}
