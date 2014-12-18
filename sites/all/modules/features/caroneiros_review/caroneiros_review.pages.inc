<?php

function caroneiros_review_form($account) {
    global $user;
    
    module_load_include('inc', 'node', 'node.pages');
    $node_form = new stdClass;
    $node_form->type = 'review';
    $node_form->language = LANGUAGE_NONE;
    $node_form->uid = $user->uid;
    $node_form->name = isset($user->name) ? $user->name : '';
    $form = drupal_get_form('review_node_form', $node_form);
    
    // Hide and set a default value for entity reference field
    $form['field_user'][LANGUAGE_NONE]['#value'] = $account->uid;
    $form['#attached']['js'][] = drupal_get_path('module', 'caroneiros_review') . '/js/caroneiros_review.js';
    return $form;
}
