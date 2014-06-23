; GSB Feature WYSIWYG Makefile

api = 2
core = 7.x

; The WYSIWYG Module Family

projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = 40b26a1
projects[wysiwyg][download][branch] = 7.x-2.x
projects[wysiwyg][patch][397994] = https://www.drupal.org/files/397994_markitup-markdown_22.patch.txt

projects[wysiwyg_filter][version] = 1.6-rc2
projects[wysiwyg_filter][subdir] = contrib

; The WYSIWYG Helpers

projects[linkit][version] = 2.6
projects[linkit][subdir] = contrib

projects[image_resize_filter][version] = 1.14
projects[image_resize_filter][subdir] = contrib

projects[caption_filter][version] = 1.2
projects[caption_filter][subdir] = contrib
projects[caption_filter][patch][1432092] = http://drupal.org/files/1432092-button-and-image.patch

; Include our Editors

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6/ckeditor_3.6.6.zip

; Features Override

projects[features_override][version] = 2.0-rc1
projects[features_override][subdir] = contrib
