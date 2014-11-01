<?php
/**
 * @file
 * caroneiros_empresa.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function caroneiros_empresa_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-empresa-field_cnpj'
  $field_instances['taxonomy_term-empresa-field_cnpj'] = array(
    'bundle' => 'empresa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'CNPJ da empresa',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_cnpj',
    'label' => 'CNPJ',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'br_tax_number_fields',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'number_cnpj',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-empresa-field_email'
  $field_instances['taxonomy_term-empresa-field_email'] = array(
    'bundle' => 'empresa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Email do responsável pela empresa',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'taxonomy_term-empresa-field_logo'
  $field_instances['taxonomy_term-empresa-field_logo'] = array(
    'bundle' => 'empresa',
    'deleted' => 0,
    'description' => 'Logo da empresa',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '256x256',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'taxonomy_term-empresa-field_nome_fantasia'
  $field_instances['taxonomy_term-empresa-field_nome_fantasia'] = array(
    'bundle' => 'empresa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nome fantasia da empresa
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_nome_fantasia',
    'label' => 'Nome Fantasia',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-empresa-field_razao_social'
  $field_instances['taxonomy_term-empresa-field_razao_social'] = array(
    'bundle' => 'empresa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Razão social da empresa',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_razao_social',
    'label' => 'Razão Social',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-empresa-field_responsavel'
  $field_instances['taxonomy_term-empresa-field_responsavel'] = array(
    'bundle' => 'empresa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nome do responsável pela empresa',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_responsavel',
    'label' => 'Responsável',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-empresa-field_telefone'
  $field_instances['taxonomy_term-empresa-field_telefone'] = array(
    'bundle' => 'empresa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Telefone do responsável pelo empresa',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_telefone',
    'label' => 'Telefone',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CNPJ');
  t('CNPJ da empresa');
  t('Email');
  t('Email do responsável pela empresa');
  t('Logo');
  t('Logo da empresa');
  t('Nome Fantasia');
  t('Nome do responsável pela empresa');
  t('Nome fantasia da empresa
');
  t('Razão Social');
  t('Razão social da empresa');
  t('Responsável');
  t('Telefone');
  t('Telefone do responsável pelo empresa');

  return $field_instances;
}
