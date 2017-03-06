<?php
/**
 * @file
 * diversicon_files.features.inc
 */

/**
 * Implements hook_file_default_displays_alter().
 */
function diversicon_files_file_default_displays_alter(&$data) {
  if (isset($data['image__default__file_field_file_default'])) {
    $data['image__default__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__default__file_field_image'])) {
    $data['image__default__file_field_image']->settings['image_style'] = 'panopoly_image_original'; /* WAS: '' */
  }
  if (isset($data['image__preview__file_field_file_default'])) {
    $data['image__preview__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__preview__file_field_image'])) {
    $data['image__preview__file_field_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'thumbnail' */
  }
  if (isset($data['image__preview__file_field_media_large_icon'])) {
    $data['image__preview__file_field_media_large_icon']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__teaser__file_field_file_default'])) {
    $data['image__teaser__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['image__teaser__file_field_image'])) {
    $data['image__teaser__file_field_image']->settings['image_style'] = 'panopoly_image_quarter'; /* WAS: 'medium' */
  }
  if (isset($data['video__default__media_vimeo_video'])) {
    $data['video__default__media_vimeo_video']->settings['protocol_specify'] = FALSE; /* WAS: 0 */
  }
  if (isset($data['video__default__media_youtube_video'])) {
    $data['video__default__media_youtube_video']->settings['modestbranding'] = 1; /* WAS: 0 */
  }
  if (isset($data['video__preview__file_field_file_default'])) {
    $data['video__preview__file_field_file_default']->status = FALSE; /* WAS: TRUE */
  }
  if (isset($data['video__preview__media_vimeo_image'])) {
    $data['video__preview__media_vimeo_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'media_thumbnail' */
  }
  if (isset($data['video__preview__media_youtube_image'])) {
    $data['video__preview__media_youtube_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'media_thumbnail' */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function diversicon_files_file_default_types_alter(&$data) {
  if (isset($data['audio'])) {
    $data['audio']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['document'])) {
    $data['document']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['video'])) {
    $data['video']->disabled = FALSE; /* WAS: '' */
  }
}
