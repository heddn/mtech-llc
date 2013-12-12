<?php
$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'sitewide';
$context->description = '';
$context->tag = 'defaults';
$context->conditions = array(
  'sitewide' => array(
    'values' => array(
      1 => 1,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'nice_menus-1' => array(
        'module' => 'nice_menus',
        'delta' => '1',
        'region' => 'user_first',
        'weight' => '-10',
      ),
      'search-form' => array(
        'module' => 'search',
        'delta' => 'form',
        'region' => 'user_second',
        'weight' => '-10',
      ),
      'views-banner-block' => array(
        'module' => 'views',
        'delta' => 'banner-block',
        'region' => 'branding',
        'weight' => '-10',
      ),
      'widgets-s_socialmedia_share-default' => array(
        'module' => 'widgets',
        'delta' => 's_socialmedia_share-default',
        'region' => 'footer_second',
        'weight' => '-10',
      ),
      'custom_mtech-copyright' => array(
        'module' => 'custom_mtech',
        'delta' => 'copyright',
        'region' => 'footer_second',
        'weight' => '-9',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('defaults');
