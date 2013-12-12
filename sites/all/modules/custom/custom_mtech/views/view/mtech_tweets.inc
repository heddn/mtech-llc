<?php
$view = new view();
$view->name = 'mtech_tweets';
$view->description = 'Displays Twitter.com status messages for users who have associated Twitter accounts.';
$view->tag = '';
$view->base_table = 'twitter';
$view->human_name = 'MTech Tweets';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Tweets */
$handler = $view->new_display('default', 'Tweets', 'default');
$handler->display->display_options['title'] = 'Recent Tweets';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Twitter: Twitter status message ID */
$handler->display->display_options['fields']['twitter_id']['id'] = 'twitter_id';
$handler->display->display_options['fields']['twitter_id']['table'] = 'twitter';
$handler->display->display_options['fields']['twitter_id']['field'] = 'twitter_id';
$handler->display->display_options['fields']['twitter_id']['label'] = '';
$handler->display->display_options['fields']['twitter_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['twitter_id']['element_label_colon'] = FALSE;
/* Field: Twitter: Profile image */
$handler->display->display_options['fields']['profile_image_url']['id'] = 'profile_image_url';
$handler->display->display_options['fields']['profile_image_url']['table'] = 'twitter_account';
$handler->display->display_options['fields']['profile_image_url']['field'] = 'profile_image_url';
$handler->display->display_options['fields']['profile_image_url']['label'] = '';
$handler->display->display_options['fields']['profile_image_url']['element_label_colon'] = FALSE;
/* Field: Twitter: Message text */
$handler->display->display_options['fields']['text']['id'] = 'text';
$handler->display->display_options['fields']['text']['table'] = 'twitter';
$handler->display->display_options['fields']['text']['field'] = 'text';
$handler->display->display_options['fields']['text']['label'] = '';
$handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['text']['link_urls'] = 1;
$handler->display->display_options['fields']['text']['link_usernames'] = 1;
$handler->display->display_options['fields']['text']['link_hashtags'] = 0;
$handler->display->display_options['fields']['text']['link_attributes'] = 1;
/* Field: Twitter: Created time */
$handler->display->display_options['fields']['created_time']['id'] = 'created_time';
$handler->display->display_options['fields']['created_time']['table'] = 'twitter';
$handler->display->display_options['fields']['created_time']['field'] = 'created_time';
$handler->display->display_options['fields']['created_time']['label'] = '';
$handler->display->display_options['fields']['created_time']['date_format'] = 'time ago';
/* Sort criterion: Twitter: Created time */
$handler->display->display_options['sorts']['created_time']['id'] = 'created_time';
$handler->display->display_options['sorts']['created_time']['table'] = 'twitter';
$handler->display->display_options['sorts']['created_time']['field'] = 'created_time';
$handler->display->display_options['sorts']['created_time']['order'] = 'DESC';
/* Filter criterion: Twitter: Protected status */
$handler->display->display_options['filters']['protected']['id'] = 'protected';
$handler->display->display_options['filters']['protected']['table'] = 'twitter_account';
$handler->display->display_options['filters']['protected']['field'] = 'protected';
$handler->display->display_options['filters']['protected']['value'] = 0;
$handler->display->display_options['filters']['protected']['group'] = '0';
$handler->display->display_options['filters']['protected']['expose']['operator'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
