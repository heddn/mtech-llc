<?php
/**
 * @file
 * mtech_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mtech_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_semantic_ds_field_h2',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_semantic_ds_field_article',
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|page|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mtech_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_image',
      ),
      'main_content' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'header',
      'title' => 'main_content',
      'body' => 'main_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'hgroup' => 'div',
      'main_content' => 'div',
      'figure' => 'div',
      'aside' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'figure';
  $ds_layout->settings = array(
    'regions' => array(
      'figure' => array(
        0 => 'field_image',
      ),
      'figcaption' => array(
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'figure',
      'body' => 'figcaption',
    ),
    'classes' => array(),
    'wrappers' => array(
      'figure' => 'div',
      'figcaption' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|teaser'] = $ds_layout;

  return $export;
}
