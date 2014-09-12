<?php
/**
 * @file
 * gsb_feature_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function gsb_feature_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: gsb_wysiwyg_text
  $profiles['gsb_wysiwyg_text'] = array(
    'format' => 'gsb_wysiwyg_text',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'Superscript' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'SpecialChar' => 1,
          'Styles' => 1,
          'Table' => 1,
          'SelectAll' => 1,
          'SpellChecker' => 1,
          'Scayt' => 1,
        ),
        'linkit' => array(
          'linkit' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'simple_source_formatting' => 1,
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => 'Paragraph=p.paragraph
Accordion Body=p.acc-body
Accordion Title=p.acc-title
Heading H2=h2
Heading H3=h3
Heading H4=h4
Heading H5=h5
Heading H6=h6
Intro Copy=p.intro-copy
Quote=div.callout
Image float left=img.caption-left
Image float right=img.caption-right
Footnote=p.footnote',
    ),
  );

  // Exported profile: markdown
  $profiles['markdown'] = array(
    'format' => 'markdown',
    'editor' => 'markitup',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'h2' => 1,
          'h3' => 1,
          'h4' => 1,
          'bold' => 1,
          'italic' => 1,
          'ul' => 1,
          'ol' => 1,
          'link' => 1,
          'quotes' => 1,
        ),
        'footnotes' => array(
          'footnotes' => 1,
        ),
      ),
      'set' => 'markdown',
      'css_setting' => 'theme',
      'css_path' => '',
      'advanced__active_tab' => 'edit-basic',
    ),
  );

  return $profiles;
}
