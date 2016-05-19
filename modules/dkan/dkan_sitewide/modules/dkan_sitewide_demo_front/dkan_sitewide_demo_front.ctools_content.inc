<?php

/**
 * Implements hook_default_ctools_custom_content().
 */
function dkan_sitewide_demo_front_default_ctools_custom_content() {
  return _panels_import_load_defaults('ctools', 'ctools_contents', 'content');
}
