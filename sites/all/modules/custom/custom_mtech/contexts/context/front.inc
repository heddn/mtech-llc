<?php
$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'front';
$context->description = '';
$context->tag = 'defaults';
$context->conditions = array(
  'path' => array(
    'values' => array(
      '<front>' => '<front>',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-portfolio-block' => array(
        'module' => 'views',
        'delta' => 'portfolio-block',
        'region' => 'content',
        'weight' => '-10',
      ),
      'views-frontpage_blog-block_1' => array(
        'module' => 'views',
        'delta' => 'frontpage_blog-block_1',
        'region' => 'content',
        'weight' => '-9',
      ),
      'views-mtech_tweets-block' => array(
        'module' => 'views',
        'delta' => 'mtech_tweets-block',
        'region' => 'content',
        'weight' => '-8',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('defaults');
