<?php
/**
 * @file
 * diversicon_files.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function diversicon_files_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: file_display
  $overrides["file_display.image__default__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__default__file_field_image.settings|image_style"] = 'panopoly_image_original';
  $overrides["file_display.image__preview__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__preview__file_field_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.image__preview__file_field_media_large_icon.status"] = FALSE;
  $overrides["file_display.image__teaser__file_field_file_default.status"] = FALSE;
  $overrides["file_display.image__teaser__file_field_image.settings|image_style"] = 'panopoly_image_quarter';
  $overrides["file_display.video__default__media_vimeo_video.settings|protocol_specify"] = FALSE;
  $overrides["file_display.video__default__media_youtube_video.settings|modestbranding"] = 1;
  $overrides["file_display.video__preview__file_field_file_default.status"] = FALSE;
  $overrides["file_display.video__preview__media_vimeo_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.video__preview__media_youtube_image.settings|image_style"] = 'panopoly_image_thumbnail';

  // Exported overrides for: file_type
  $overrides["file_type.audio.disabled"] = FALSE;
  $overrides["file_type.document.disabled"] = FALSE;
  $overrides["file_type.image.disabled"] = FALSE;
  $overrides["file_type.video.disabled"] = FALSE;

 return $overrides;
}
