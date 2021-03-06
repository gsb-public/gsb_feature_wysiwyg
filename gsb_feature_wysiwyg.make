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

projects[linkit][version] = 2.7
projects[linkit][subdir] = contrib

projects[image_resize_filter][version] = 1.16
projects[image_resize_filter][subdir] = contrib

projects[caption_filter][version] = 1.3
projects[caption_filter][subdir] = contrib

projects[footnotes][version] = 2.x-dev
projects[footnotes][subdir] = contrib
projects[footnotes][download][type] = git
projects[footnotes][download][revision] = 7b12c77
projects[footnotes][download][branch] = 7.x-2.x
projects[footnotes][patch][2296211] = https://www.drupal.org/files/issues/2296211-d7-2.patch

; Include our Editors

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.7/ckeditor_4.4.7_standard.zip

libraries[markitup][download][type] = git
libraries[markitup][download][url] = https://github.com/markitup/1.x.git
libraries[markitup][download][tag] = 1.1.14
libraries[markitup][patch][WP-5186] = https://raw.githubusercontent.com/gsb-public/gsb-revamp-patches/master/WP-5186-jquery-markitup.js.patch

libraries[markdown][download][type] = get
libraries[markdown][download][url] = http://markitup.jaysalvat.com/downloads/download.php?id=markupsets/markdown
libraries[markdown][destination] = libraries/markitup/markitup/sets

; Features Override

projects[features_override][version] = 2.0-rc1
projects[features_override][subdir] = contrib
