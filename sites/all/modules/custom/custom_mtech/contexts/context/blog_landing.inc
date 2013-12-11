<?php
$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'blog_landing';
$context->description = '';
$context->tag = 'defaults';
$context->conditions = array(
    'path' => array(
        'values' => array(
            'blog/*' => 'blog/*',
            'blogs/*' => 'blogs/*',
        ),
    ),
);
$context->reactions = array(
    'block' => array(
        'blocks' => array(
            'views-blog-blog_listing_author_detail' => array(
                'module' => 'views',
                'delta' => 'blog-blog_listing_author_detail',
                'region' => 'sidebar_second',
                'weight' => '-10',
            ),
        ),
    ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('defaults');
