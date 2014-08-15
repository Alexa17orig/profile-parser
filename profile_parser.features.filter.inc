<?php
/**
 * @file
 * profile_parser.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function profile_parser_filter_default_formats() {
  $formats = array();

  // Exported format: Profile parser format.
  $formats['profile_parser_format'] = array(
    'format' => 'profile_parser_format',
    'name' => 'Profile parser format',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd><p><span><h1><h2><h3><h4><h5><h6>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
