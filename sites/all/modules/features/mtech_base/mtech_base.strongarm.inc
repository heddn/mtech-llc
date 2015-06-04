<?php
/**
 * @file
 * mtech_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mtech_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_link_rel_profile';
  $strongarm->value = 'nofollow';
  $export['socialmedia_default_link_rel_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_link_rel_sharing';
  $strongarm->value = 'nofollow';
  $export['socialmedia_default_link_rel_sharing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_link_target_profile';
  $strongarm->value = '<none>';
  $export['socialmedia_default_link_target_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_link_target_sharing';
  $strongarm->value = '_blank';
  $export['socialmedia_default_link_target_sharing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_widget_set_default_profile';
  $strongarm->value = array(
    'data' => array(
      'style' => 'horizontal',
      'cache' => array(
        'scope' => 'site',
      ),
    ),
    'elements' => array(
      0 => array(
        'name' => 'socialmedia_socialmedia-twitter-profile-button',
        'weight' => 1,
        'platform' => 'twitter',
        'label' => 'Socialmedia Twitter profile button',
        'group' => 'Social media: Twitter',
        'template' => '<a href="http://twitter.com/[?profile_username=[socialmedia:sm-twitter_username]?]" title="Visit [?profile_username=[socialmedia:sm-twitter_username]?] on Twitter"[?link-target= target="{[socialmedia:sm-default_link_target_profile]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_profile]}"?]><img src="[?icon-path=[socialmedia:sm-twitter_icon-path]?]" alt="Twitter icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
      ),
      1 => array(
        'name' => 'socialmedia_socialmedia-facebook-profile-button',
        'weight' => 2,
        'platform' => 'facebook',
        'label' => 'Socialmedia Facebook profile button',
        'group' => 'Social media: Facebook',
        'template' => '<a href="[?profile_url=[socialmedia:sm-facebook_url]?]" title="Visit [?profile_username=[socialmedia:sm-facebook_username]?] on Facebook"[?link-target= target="{[socialmedia:sm-default_link_target_profile]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_profile]}"?]><img src="[?icon-path=[socialmedia:sm-facebook_icon-path]?]" alt="Facebook icon"></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
      ),
      2 => array(
        'name' => 'socialmedia_socialmedia-googleplus-profile-button',
        'weight' => 3,
        'platform' => 'googleplus',
        'label' => 'Socialmedia Google+ profile button',
        'group' => 'Social media: Google+',
        'template' => '<a href="[?profile_url=[socialmedia:sm-googleplus_url]?]" title="Visit [?profile_username=[socialmedia:sm-googleplus_username]?] on Google+"[?link-target= target="{[socialmedia:sm-default_link_target_profile]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_profile]}"?]><img src="[?icon-path=[socialmedia:sm-googleplus_icon-path]?]" alt="Google+ icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
      ),
      3 => array(
        'name' => 'socialmedia_socialmedia-linkedin-profile-button',
        'weight' => 4,
        'platform' => 'linkedin',
        'label' => 'Socialmedia LinkedIn profile button',
        'group' => 'Social media: LinkedIn',
        'template' => '<a href="[?profile_url=[socialmedia:sm-linkedin_url]?]" title="Visit [?profile_username=[socialmedia:sm-linkedin_username]?] on LinkedIn"[?link-target= target="{[socialmedia:sm-default_link_target_profile]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_profile]}"?]><img src="[?icon-path=[socialmedia:sm-linkedin_icon-path]?]" alt="LinkedIn icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
      ),
    ),
    'name' => 'socialmedia_profile-default',
    'module' => 'socialmedia',
    'storage' => 4,
  );
  $export['socialmedia_widget_set_default_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_widget_set_default_share';
  $strongarm->value = array(
    'data' => array(
      'style' => 'horizontal',
      'cache' => array(
        'scope' => 'page',
      ),
    ),
    'elements' => array(
      0 => array(
        'name' => 'socialmedia_socialmedia-twitter-share-button',
        'platform' => 'twitter',
        'label' => 'Socialmedia Twitter share button',
        'group' => 'Social media: Twitter',
        'template' => '<a href="http://twitter.com/share?url=[|[node:url]||[current-page:url]|]&text=[?message=[|[node:title]||[current-page:title-plain]|] [|[node:url]||[current-page:url]|] via @[socialmedia:sm-twitter_username]?]" title="Tweet this"[?link-target= target="{[socialmedia:sm-default_link_target_sharing]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_sharing]}"?]><img src="[?icon-path=[socialmedia:sm-twitter_icon-path]?]" alt="Twitter icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
        'weight' => 1,
      ),
      1 => array(
        'name' => 'socialmedia_socialmedia-facebook-share-button',
        'platform' => 'facebook',
        'label' => 'Socialmedia Facebook share button',
        'group' => 'Social media: Facebook',
        'template' => '<a href="http://www.facebook.com/sharer.php?u=[|[node:url]||[current-page:url]|]&t=[|[node:title]||[current-page:title-plain]|]" title="Visit [?profile_username=[socialmedia:sm-facebook_username]?] on Facebook"[?link-target= target="{[socialmedia:sm-default_link_target_sharing]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_sharing]}"?]><img src="[?icon-path=[socialmedia:sm-facebook_icon-path]?]" alt="Facebook icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
        'weight' => 2,
      ),
      2 => array(
        'name' => 'socialmedia_socialmedia-googleplus-share-button',
        'platform' => 'googleplus',
        'label' => 'Socialmedia Google+ share button',
        'group' => 'Social media: Google+',
        'template' => '<a href="https://plus.google.com/share?url=[|[node:url]||[current-page:url]|]" [?link-target= target="{[socialmedia:sm-default_link_target_sharing]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_sharing]}"?]><img src="[?icon-path=[socialmedia:sm-googleplus_icon-path]?]" alt="Share on Google+"/></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
        'weight' => 3,
      ),
      3 => array(
        'name' => 'socialmedia_socialmedia-linkedin-share-button',
        'platform' => 'linkedin',
        'label' => 'Socialmedia LinkedIn share button',
        'group' => 'Social media: LinkedIn',
        'template' => '<a href="http://www.linkedin.com/shareArticle?mini=true&url=[|[node:url]||[current-page:url]|]&title=[|[node:title]||[current-page:title-plain]|]" title="[?link-text=Share on LinkedIn?]"[?link-target= target="{[socialmedia:sm-default_link_target_sharing]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_sharing]}"?]><img src="[?icon-path=[socialmedia:sm-linkedin_icon-path]?]" alt="LinkedIn icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
        'weight' => 4,
      ),
    ),
    'name' => 'socialmedia_share-default',
    'module' => 'socialmedia',
    'storage' => 4,
  );
  $export['socialmedia_widget_set_default_share'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_key';
  $strongarm->value = '95x4w8WU15wL0o19uq6ekg';
  $export['twitter_consumer_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_secret';
  $strongarm->value = 'OI2XxeNSBpwkUfs4OIOvr7OlKcsv9ukO6nUsaglk';
  $export['twitter_consumer_secret'] = $strongarm;

  return $export;
}
