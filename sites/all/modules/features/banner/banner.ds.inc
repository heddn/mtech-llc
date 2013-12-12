<?php
/**
 * @file
 * banner.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function banner_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|banner|banner';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'banner';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|banner|banner'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|banner|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'banner';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|banner|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function banner_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|banner';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'banner';
  $ds_layout->layout = 'figure';
  $ds_layout->settings = array(
    'regions' => array(
      'figure' => array(
        0 => 'field_image',
      ),
      'figcaption' => array(
        1 => 'field_description',
      ),
    ),
    'fields' => array(
      'field_image' => 'figure',
      'field_description' => 'figcaption',
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
  $export['node|banner|banner'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|banner|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'banner';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'figure';
  $ds_layout->settings = array(
    'regions' => array(
      'figure' => array(
        0 => 'field_reference',
      ),
    ),
    'fields' => array(
      'field_reference' => 'figure',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|banner|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function banner_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'banner';
  $ds_view_mode->label = 'Banner';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['banner'] = $ds_view_mode;

  return $export;
}
