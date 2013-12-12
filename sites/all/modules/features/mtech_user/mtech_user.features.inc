<?php
/**
 * @file
 * mtech_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mtech_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
