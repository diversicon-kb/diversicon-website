<?php
/**
 * @file
 * diversicon_field.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function diversicon_field_field_default_field_bases_alter(&$data) {
  if (isset($data['field_uuid_resource'])) {
    unset($data['field_uuid_resource']['foreign keys']);
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function diversicon_field_field_group_info_alter(&$data) {
  if (isset($data['group_additional|node|dataset|default'])) {
    $data['group_additional|node|dataset|default']->data['children'][0] = 'field_contact_name'; /* WAS: 'field_author' */
    $data['group_additional|node|dataset|default']->data['children'][1] = 'field_frequency'; /* WAS: 'field_contact_email' */
    $data['group_additional|node|dataset|default']->data['children'][10] = 'field_spatial_geographical_cover'; /* WAS: 'field_temporal_coverage' */
    $data['group_additional|node|dataset|default']->data['children'][11] = 'field_public_access_level'; /* WAS: 'og_group_ref' */
    $data['group_additional|node|dataset|default']->data['children'][2] = 'field_data_dictionary'; /* WAS: 'field_contact_name' */
    $data['group_additional|node|dataset|default']->data['children'][3] = 'field_license'; /* WAS: 'field_data_dictionary' */
    $data['group_additional|node|dataset|default']->data['children'][4] = 'field_spatial'; /* WAS: 'field_frequency' */
    $data['group_additional|node|dataset|default']->data['children'][6] = 'field_author'; /* WAS: 'field_license' */
    $data['group_additional|node|dataset|default']->data['children'][7] = 'field_temporal_coverage'; /* WAS: 'field_public_access_level' */
    $data['group_additional|node|dataset|default']->data['children'][8] = 'og_group_ref'; /* WAS: 'field_spatial' */
    $data['group_additional|node|dataset|default']->data['children'][9] = 'field_contact_email'; /* WAS: 'field_spatial_geographical_cover' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function diversicon_field_field_default_field_instances_alter(&$data) {
  if (isset($data['fieldable_panels_pane-basic_file-field_basic_file_file'])) {
    $data['fieldable_panels_pane-basic_file-field_basic_file_file']['settings']['resup'] = 0; /* WAS: '' */
    $data['fieldable_panels_pane-basic_file-field_basic_file_file']['settings']['resup_autostart'] = 0; /* WAS: '' */
    $data['fieldable_panels_pane-basic_file-field_basic_file_file']['settings']['resup_max_filesize'] = ''; /* WAS: '' */
  }
  if (isset($data['fieldable_panels_pane-image-field_basic_image_image'])) {
    $data['fieldable_panels_pane-image-field_basic_image_image']['settings']['resup'] = 0; /* WAS: '' */
    $data['fieldable_panels_pane-image-field_basic_image_image']['settings']['resup_autostart'] = 0; /* WAS: '' */
    $data['fieldable_panels_pane-image-field_basic_image_image']['settings']['resup_max_filesize'] = ''; /* WAS: '' */
  }
  if (isset($data['fieldable_panels_pane-video-field_video_file'])) {
    $data['fieldable_panels_pane-video-field_video_file']['settings']['resup'] = 0; /* WAS: '' */
    $data['fieldable_panels_pane-video-field_video_file']['settings']['resup_autostart'] = 0; /* WAS: '' */
    $data['fieldable_panels_pane-video-field_video_file']['settings']['resup_max_filesize'] = ''; /* WAS: '' */
  }
  if (isset($data['node-dataset-field_related_content'])) {
    $data['node-dataset-field_related_content']['description'] = 'An internal link to a dataset in this catalog (like <a href="/dataset/diversicon-wordnet-31" target="_blank">dataset/diversicon-wordnet-31</a>) or link to an outside resource that provides additional context to the dataset.'; /* WAS: 'An internal link or link to an outside resource that provides additional context to the dataset.' */
    $data['node-dataset-field_related_content']['label'] = 'Depends on'; /* WAS: 'Related Content' */
    $data['node-dataset-field_related_content']['settings']['attributes']['configurable_class'] = 0; /* WAS: '' */
    $data['node-dataset-field_related_content']['settings']['title_label_use_field_label'] = 0; /* WAS: FALSE */
  }
  if (isset($data['node-dataset-field_topic'])) {
    $data['node-dataset-field_topic']['display']['default']['module'] = 'hierarchical_term_formatter'; /* WAS: 'dkan_topics' */
    $data['node-dataset-field_topic']['display']['default']['settings']['display'] = 'all'; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['default']['settings']['link'] = 1; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['default']['settings']['separator'] = ' » '; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['default']['settings']['wrap'] = 'none'; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['default']['type'] = 'hierarchical_term_formatter'; /* WAS: 'dkan_topic_formatter' */
    $data['node-dataset-field_topic']['display']['search_result']['module'] = 'hierarchical_term_formatter'; /* WAS: 'dkan_topics' */
    $data['node-dataset-field_topic']['display']['search_result']['settings']['display'] = 'all'; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['search_result']['settings']['link'] = 1; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['search_result']['settings']['separator'] = ' » '; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['search_result']['settings']['wrap'] = 'none'; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['search_result']['type'] = 'hierarchical_term_formatter'; /* WAS: 'dkan_topic_formatter' */
    $data['node-dataset-field_topic']['display']['teaser']['module'] = 'hierarchical_term_formatter'; /* WAS: 'taxonomy' */
    $data['node-dataset-field_topic']['display']['teaser']['settings']['display'] = 'all'; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['teaser']['settings']['link'] = 1; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['teaser']['settings']['separator'] = ' » '; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['teaser']['settings']['wrap'] = 'none'; /* WAS: '' */
    $data['node-dataset-field_topic']['display']['teaser']['type'] = 'hierarchical_term_formatter'; /* WAS: 'taxonomy_term_reference_link' */
  }
  if (isset($data['node-dkan_data_story-field_image'])) {
    $data['node-dkan_data_story-field_image']['display']['default']['settings'] = array(); /* WAS: '' */
  }
  if (isset($data['visualization-ve_chart-field_file'])) {
    $data['visualization-ve_chart-field_file']['settings']['resup'] = 0; /* WAS: '' */
    $data['visualization-ve_chart-field_file']['settings']['resup_autostart'] = 0; /* WAS: '' */
    $data['visualization-ve_chart-field_file']['settings']['resup_max_filesize'] = ''; /* WAS: '' */
  }
}
