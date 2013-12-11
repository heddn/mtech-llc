<?php
$view = new view();
$view->name = 'blog';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Blog';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'views_content_cache';
$handler->display->display_options['cache']['results_min_lifespan'] = '300';
$handler->display->display_options['cache']['results_max_lifespan'] = '21600';
$handler->display->display_options['cache']['output_min_lifespan'] = '300';
$handler->display->display_options['cache']['output_max_lifespan'] = '21600';
$handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
        'changed' => 0,
    ),
    'node' => array(
        'blog' => 'blog',
        'page' => 0,
    ),
    'node_only' => array(
        'node_changed' => 0,
    ),
);
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['label'] = 'Author';
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
/* Field: User: Bio */
$handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
$handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_bio']['label'] = '';
$handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_bio']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_bio']['settings'] = array(
    'trim_length' => '300',
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = 'blogs/[name]';
$handler->display->display_options['fields']['name']['alter']['prefix'] = 'More articles by&raquo; ';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Content: Tags */
$handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
$handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['label'] = '';
$handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_tags']['separator'] = ' / ';
/* Field: Content: References */
$handler->display->display_options['fields']['field_links']['id'] = 'field_links';
$handler->display->display_options['fields']['field_links']['table'] = 'field_data_field_links';
$handler->display->display_options['fields']['field_links']['field'] = 'field_links';
$handler->display->display_options['fields']['field_links']['label'] = 'Resources';
$handler->display->display_options['fields']['field_links']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_links']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_links']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_links']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_links']['multi_type'] = 'ul';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
);

/* Display: Blog Author Details */
$handler = $view->new_display('block', 'Blog Author Details', 'author_details');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: User: Bio */
$handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
$handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_bio']['label'] = '';
$handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_bio']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_bio']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_bio']['settings'] = array(
    'trim_length' => '300',
);
/* Field: name_1 */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'users';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['name_1']['ui_name'] = 'name_1';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
/* Field: Content: Author uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: More articles by» [name] */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'More articles by» [name]';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/blog/[uid]">More articles by» [name_1]</a>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['block_caching'] = '4';

/* Display: Blog Article Details */
$handler = $view->new_display('block', 'Blog Article Details', 'article_details');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'month_day_year';
$handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
/* Field: Content: Tags */
$handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
$handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
$handler->display->display_options['fields']['field_tags']['label'] = '';
$handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_tags']['separator'] = ' / ';
/* Field: Content: References */
$handler->display->display_options['fields']['field_links']['id'] = 'field_links';
$handler->display->display_options['fields']['field_links']['table'] = 'field_data_field_links';
$handler->display->display_options['fields']['field_links']['field'] = 'field_links';
$handler->display->display_options['fields']['field_links']['label'] = 'Resources';
$handler->display->display_options['fields']['field_links']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_links']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_links']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_links']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_links']['multi_type'] = 'ul';

/* Display: Blog Author Details - Blog Listing */
$handler = $view->new_display('block', 'Blog Author Details - Blog Listing', 'blog_listing_author_detail');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Picture */
$handler->display->display_options['fields']['picture']['id'] = 'picture';
$handler->display->display_options['fields']['picture']['table'] = 'users';
$handler->display->display_options['fields']['picture']['field'] = 'picture';
$handler->display->display_options['fields']['picture']['relationship'] = 'uid';
$handler->display->display_options['fields']['picture']['label'] = '';
$handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: User: Bio */
$handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
$handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
$handler->display->display_options['fields']['field_bio']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_bio']['label'] = '';
$handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_bio']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_bio']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_bio']['settings'] = array(
    'trim_length' => '300',
);
/* Field: name_1 */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'users';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['name_1']['ui_name'] = 'name_1';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
/* Field: Content: Author uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: More articles by» [name] */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'More articles by» [name]';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/blog/[uid]">More articles by» [name_1]</a>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['block_caching'] = '4';
