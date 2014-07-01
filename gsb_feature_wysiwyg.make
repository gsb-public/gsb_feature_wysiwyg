; GSB Feature WYSIWYG Makefile

api = 2
core = 7.x

; The WYSIWYG Module Family

projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = 40b26a1
projects[wysiwyg][download][branch] = 7.x-2.x
projects[wysiwyg][patch][397994] = https://www.drupal.org/files/issues/397994-d7-32.patch

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

libraries[markitup][download][type] = get
libraries[markitup][download][url] = https://github.com/markitup/1.x/archive/1.1.14.zip

libraries[markdown][download][type] = get
libraries[markdown][download][url] = http://markitup.jaysalvat.com/downloads/download.php?id=markupsets/markdown
libraries[markdown][destination] = libraries/markitup/markitup/sets

; Features Override

projects[features_override][version] = 2.0-rc1
projects[features_override][subdir] = contrib
