<?php

function caroneiros_carona_request_form($form, $form_state, $node) {
    $form['#node'] = $node;
    
    $form['message'] = array(
        '#title' => t('Send a message'),
        '#type' => 'textarea',
        '#default_value' => 'Olá, gostaria de uma vaga',
    );

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Send'),
    );
    
    return $form;
}

function caroneiros_carona_request_form_submit($form, &$form_state) {
    global $user;
    $carona = $form['#node'];
    
    $node = new stdClass();
    $node->type = 'request';
    $node->title = '123';
    node_object_prepare($node);
    $node->language = LANGUAGE_NONE;
    $node->status = 0;
    $node->uid = $user->uid;
    
    $node->body[$node->language][0]['value'] = check_plain($form_state['values']['message']);
    $node->body[$node->language][0]['summary'] = '';
    $node->body[$node->language][0]['format'] = 'filtered_html';
    
    $node->field_carona[$node->language][0]['target_id'] = $carona->nid;
    
    $node = node_submit($node); // Prepare node for saving
    node_save($node);
  
    drupal_set_message('Sua mensagem foi enviada com sucesso');
    $form_state['redirect']  = "node/$carona->nid";
}