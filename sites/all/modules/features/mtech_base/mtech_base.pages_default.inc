<?php
/**
 * @file
 * mtech_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function mtech_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_af126dd0-42cd-4c2a-b7dd-fa5844472a0d';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_four_adaptive';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cb240240-27c7-49d9-a5fc-714fc4be5742';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1c6f5ea2-d3ed-4246-9ec5-784156dfdf20';
    $pane->panel = '11';
    $pane->type = 'block';
    $pane->subtype = 'views-banner-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1c6f5ea2-d3ed-4246-9ec5-784156dfdf20';
    $display->content['new-1c6f5ea2-d3ed-4246-9ec5-784156dfdf20'] = $pane;
    $display->panels['11'][0] = 'new-1c6f5ea2-d3ed-4246-9ec5-784156dfdf20';
    $pane = new stdClass();
    $pane->pid = 'new-e9649602-b1f1-4ac2-9996-947bec7a7af7';
    $pane->panel = '21';
    $pane->type = 'block';
    $pane->subtype = 'views-portfolio-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e9649602-b1f1-4ac2-9996-947bec7a7af7';
    $display->content['new-e9649602-b1f1-4ac2-9996-947bec7a7af7'] = $pane;
    $display->panels['21'][0] = 'new-e9649602-b1f1-4ac2-9996-947bec7a7af7';
    $pane = new stdClass();
    $pane->pid = 'new-63683243-6a71-4a1c-896f-0d5290700256';
    $pane->panel = '23';
    $pane->type = 'block';
    $pane->subtype = 'views-mtech_tweets-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63683243-6a71-4a1c-896f-0d5290700256';
    $display->content['new-63683243-6a71-4a1c-896f-0d5290700256'] = $pane;
    $display->panels['23'][0] = 'new-63683243-6a71-4a1c-896f-0d5290700256';
    $pane = new stdClass();
    $pane->pid = 'new-429ffff0-b974-4da1-910b-6b634e02882a';
    $pane->panel = '41';
    $pane->type = 'block';
    $pane->subtype = 'views-frontpage_blog-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '429ffff0-b974-4da1-910b-6b634e02882a';
    $display->content['new-429ffff0-b974-4da1-910b-6b634e02882a'] = $pane;
    $display->panels['41'][0] = 'new-429ffff0-b974-4da1-910b-6b634e02882a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
