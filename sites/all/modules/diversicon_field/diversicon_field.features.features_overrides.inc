<?php
/**
 * @file
 * diversicon_field.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function diversicon_field_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_uuid_resource.foreign keys"]["DELETED"] = TRUE;

  // Exported overrides for: field_group
  $overrides["field_group.group_additional|node|dataset|default.data|children|0"] = 'field_contact_name';
  $overrides["field_group.group_additional|node|dataset|default.data|children|1"] = 'field_frequency';
  $overrides["field_group.group_additional|node|dataset|default.data|children|10"] = 'field_spatial_geographical_cover';
  $overrides["field_group.group_additional|node|dataset|default.data|children|11"] = 'field_public_access_level';
  $overrides["field_group.group_additional|node|dataset|default.data|children|2"] = 'field_data_dictionary';
  $overrides["field_group.group_additional|node|dataset|default.data|children|3"] = 'field_license';
  $overrides["field_group.group_additional|node|dataset|default.data|children|4"] = 'field_spatial';
  $overrides["field_group.group_additional|node|dataset|default.data|children|6"] = 'field_author';
  $overrides["field_group.group_additional|node|dataset|default.data|children|7"] = 'field_temporal_coverage';
  $overrides["field_group.group_additional|node|dataset|default.data|children|8"] = 'og_group_ref';
  $overrides["field_group.group_additional|node|dataset|default.data|children|9"] = 'field_contact_email';

  // Exported overrides for: field_instance
  $overrides["field_instance.fieldable_panels_pane-basic_file-field_basic_file_file.settings|resup"] = 0;
  $overrides["field_instance.fieldable_panels_pane-basic_file-field_basic_file_file.settings|resup_autostart"] = 0;
  $overrides["field_instance.fieldable_panels_pane-basic_file-field_basic_file_file.settings|resup_max_filesize"] = '';
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.settings|resup"] = 0;
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.settings|resup_autostart"] = 0;
  $overrides["field_instance.fieldable_panels_pane-image-field_basic_image_image.settings|resup_max_filesize"] = '';
  $overrides["field_instance.fieldable_panels_pane-video-field_video_file.settings|resup"] = 0;
  $overrides["field_instance.fieldable_panels_pane-video-field_video_file.settings|resup_autostart"] = 0;
  $overrides["field_instance.fieldable_panels_pane-video-field_video_file.settings|resup_max_filesize"] = '';
  $overrides["field_instance.node-dataset-field_related_content.description"] = 'An internal link to a dataset in this catalog (like <a href="/dataset/diversicon-wordnet-31" target="_blank">dataset/diversicon-wordnet-31</a>) or link to an outside resource that provides additional context to the dataset.';
  $overrides["field_instance.node-dataset-field_related_content.label"] = 'Depends on';
  $overrides["field_instance.node-dataset-field_related_content.settings|attributes|configurable_class"] = 0;
  $overrides["field_instance.node-dataset-field_related_content.settings|title_label_use_field_label"] = 0;
  $overrides["field_instance.node-dataset-field_topic.display|default|module"] = 'hierarchical_term_formatter';
  $overrides["field_instance.node-dataset-field_topic.display|default|settings|display"] = 'all';
  $overrides["field_instance.node-dataset-field_topic.display|default|settings|link"] = 1;
  $overrides["field_instance.node-dataset-field_topic.display|default|settings|separator"] = ' » ';
  $overrides["field_instance.node-dataset-field_topic.display|default|settings|wrap"] = 'none';
  $overrides["field_instance.node-dataset-field_topic.display|default|type"] = 'hierarchical_term_formatter';
  $overrides["field_instance.node-dataset-field_topic.display|search_result|module"] = 'hierarchical_term_formatter';
  $overrides["field_instance.node-dataset-field_topic.display|search_result|settings|display"] = 'all';
  $overrides["field_instance.node-dataset-field_topic.display|search_result|settings|link"] = 1;
  $overrides["field_instance.node-dataset-field_topic.display|search_result|settings|separator"] = ' » ';
  $overrides["field_instance.node-dataset-field_topic.display|search_result|settings|wrap"] = 'none';
  $overrides["field_instance.node-dataset-field_topic.display|search_result|type"] = 'hierarchical_term_formatter';
  $overrides["field_instance.node-dataset-field_topic.display|teaser|module"] = 'hierarchical_term_formatter';
  $overrides["field_instance.node-dataset-field_topic.display|teaser|settings|display"] = 'all';
  $overrides["field_instance.node-dataset-field_topic.display|teaser|settings|link"] = 1;
  $overrides["field_instance.node-dataset-field_topic.display|teaser|settings|separator"] = ' » ';
  $overrides["field_instance.node-dataset-field_topic.display|teaser|settings|wrap"] = 'none';
  $overrides["field_instance.node-dataset-field_topic.display|teaser|type"] = 'hierarchical_term_formatter';
  $overrides["field_instance.node-dkan_data_story-field_image.display|default|settings"] = array();
  $overrides["field_instance.visualization-ve_chart-field_file.settings|resup"] = 0;
  $overrides["field_instance.visualization-ve_chart-field_file.settings|resup_autostart"] = 0;
  $overrides["field_instance.visualization-ve_chart-field_file.settings|resup_max_filesize"] = '';

 return $overrides;
}
