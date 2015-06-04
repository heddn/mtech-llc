<?php
$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'blog';
$context->description = 'Blog entity stuffs';
$context->tag = 'content type';
$context->conditions = array(
  'node' => array(
    'values' => array(
      'blog' => 'blog',
    ),
    'options' => array(
      'node_form' => '0',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-blog-article_details' => array(
        'module' => 'views',
        'delta' => 'blog-article_details',
        'region' => 'sidebar_first',
        'weight' => '-10',
      ),
      'views-blog-author_details' => array(
        'module' => 'views',
        'delta' => 'blog-author_details',
        'region' => 'sidebar_second',
        'weight' => '-10',
      ),
      'disqus-disqus_comments' => array(
        'module' => 'disqus',
        'delta' => 'disqus_comments',
        'region' => 'footer_first',
        'weight' => '-9',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Blog entity stuffs');
t('content type');
