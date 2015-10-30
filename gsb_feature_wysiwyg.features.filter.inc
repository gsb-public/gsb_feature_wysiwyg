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
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
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
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <div> <p> <br> <i> <u> <cite> <hr> <sub> <sup> <table> <tbody> <thead> <tfoot> <th> <tr> <td> <span> <h1> <h2> <h3> <h4> <h5> <h6> <object> <iframe> <area> <embed> <address> <abbr> <caption> <pre> <code> <script> <img> <b> ',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'gsb_filter_strip' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'typogrify' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(
          'smartypants_enabled' => 1,
          'smartypants_hyphens' => 2,
          'space_hyphens' => 0,
          'wrap_ampersand' => 0,
          'widont_enabled' => 0,
          'space_to_nbsp' => 0,
          'hyphenate_shy' => 0,
          'wrap_abbr' => 0,
          'wrap_caps' => 0,
          'wrap_initial_quotes' => 0,
          'wrap_numbers' => 0,
          'ligatures' => array(
            'ffi' => 0,
            'ffl' => 0,
            'ff' => 0,
            'fi' => 0,
            'fl' => 0,
            'ij' => 0,
            'IJ' => 0,
            'st' => 0,
            'ss' => 0,
          ),
          'arrows' => array(
            '-&gt;&gt;' => 0,
            '&lt;&lt;-' => 0,
            '-&gt;|' => 0,
            '|&lt;-' => 0,
            '&lt;-&gt;' => 0,
            '-&gt;' => 0,
            '&lt;-' => 0,
            '&lt;=&gt;' => 0,
            '=&gt;' => 0,
            '&lt;=' => 0,
          ),
          'fractions' => array(
            '1/4' => 0,
            '1/2' => 0,
            '3/4' => 0,
            '1/3' => 0,
            '2/3' => 0,
            '1/5' => 0,
            '2/5' => 0,
            '3/5' => 0,
            '4/5' => 0,
            '1/6' => 0,
            '5/6' => 0,
            '1/8' => 0,
            '3/8' => 0,
            '5/8' => 0,
            '7/8' => 0,
          ),
          'quotes' => array(
            ',,' => 0,
            '\'\'' => 0,
            '&lt;&lt;' => 0,
            '&gt;&gt;' => 0,
          ),
        ),
      ),
    ),
  );

  // Exported format: Image Text Equivalent.
  $formats['image_text_equivalent'] = array(
    'format' => 'image_text_equivalent',
    'name' => 'Image Text Equivalent',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_markdown' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<h3> <h4> <p> <strong> <em> <ul> <ol> <li> <sup>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'resources_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Markdown.
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_markdown' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<h2> <h3> <h4> <a> <em> <strong> <blockquote> <ul> <ol> <li> <p> <sup> <table> <tbody> <th> <td> <tr> <thead>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_footnotes' => array(
        'weight' => -20,
        'status' => 1,
        'settings' => array(
          'footnotes_collapse' => 0,
        ),
      ),
      'resources_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Markdown Lite (minus Resources).
  $formats['markdown_lite_minus_resources'] = array(
    'format' => 'markdown_lite_minus_resources',
    'name' => 'Markdown Lite (minus Resources)',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_markdown' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<h2> <h3> <h4> <a> <em> <strong> <blockquote> <ul> <ol> <li> <p> <sup> <table> <tbody> <th> <td> <tr> <thead>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_footnotes' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'footnotes_collapse' => 0,
        ),
      ),
    ),
  );

  // Exported format: Sidebar.
  $formats['sidebar'] = array(
    'format' => 'sidebar',
    'name' => 'Sidebar',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_markdown' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <p> <ul> <ol> <li> <strong> <i> <em>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
