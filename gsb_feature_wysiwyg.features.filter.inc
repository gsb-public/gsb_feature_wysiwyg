<?php
/**
 * @file
 * gsb_feature_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function gsb_feature_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: HTML.
  $formats['gsb_html_text'] = array(
    'format' => 'gsb_html_text',
    'name' => 'HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'image_resize_filter' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 'remote',
          ),
        ),
      ),
      'caption_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  // Exported format: WYSIWYG.
  $formats['gsb_wysiwyg_text'] = array(
    'format' => 'gsb_wysiwyg_text',
    'name' => 'WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'image_resize_filter' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 'remote',
          ),
        ),
      ),
      'caption_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <div> <p> <br> <i> <u> <cite> <hr> <sub> <sup> <table> <tbody> <thead> <th> <tr> <td> <span> <h1> <h2> <h3> <h4> <h5> <h6> <object> <iframe> <area> <embed> <address> <abbr> <caption> <pre> <code> <script> <img>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
