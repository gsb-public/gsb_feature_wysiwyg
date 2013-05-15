; GSB Feature WYSIWYG Makefile

api = 2
core = 7.x

; The WYSIWYG Module Family

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.2
projects[wysiwyg][patch][1489096] = http://drupal.org/files/wysiwyg-table-format.patch
projects[wysiwyg][patch][1786732] = http://drupal.org/files/wysiwyg-arbitrary_image_paths_markitup-1786732-3.patch

projects[wysiwyg_filter][version] = 1.6-rc2
projects[wysiwyg_filter][subdir] = contrib

; The WYSIWYG Helpers

projects[linkit][version] = 2.5
projects[linkit][subdir] = contrib

projects[image_resize_filter][version] = 1.13
projects[image_resize_filter][subdir] = contrib

projects[caption_filter][version] = 1.2
projects[caption_filter][subdir] = contrib
projects[caption_filter][patch][1432092] = http://drupal.org/files/1432092-button-and-image.patch

; Include our Editors

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6/ckeditor_3.6.6.zip

libraries[markitup][download][type] = get
libraries[markitup][download][url] = https://github.com/markitup/1.x/tarball/master
libraries[markitup][patch][1715642] = http://drupal.org/files/1715642-adding-html-set-markitup-editor.patch

; Features Override

projects[features_override][version] = 2.0-beta2
projects[features_override][subdir] = contrib