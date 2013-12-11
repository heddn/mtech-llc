<?php
/**
 * @file
 * mtech_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mtech_user_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
