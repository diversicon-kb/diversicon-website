<?php
/**
 * @file
 * diversicon_other_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function diversicon_other_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: eck_bundle
  $overrides["eck_bundle.visualization_ve_chart.config"] = array();

  // Exported overrides for: facetapi
  $overrides["facetapi.search_api@datasets:block:field_topic.settings|facet_fewer_text"] = 'Show fewer';
  $overrides["facetapi.search_api@datasets:block:field_topic.settings|facet_more_text"] = 'Show more';
  $overrides["facetapi.search_api@datasets:block:field_topic.settings|show_expanded"] = 1;

  // Exported overrides for: node
  $overrides["node.blog.has_title"] = 1;
  $overrides["node.blog.help"] = '';
  $overrides["node.blog.title_label"] = 'Title';

  // Exported overrides for: og_membership_type
  $overrides["og_membership_type.og_membership_type_default.language"] = '';

  // Exported overrides for: open_data_schema_apis
  $overrides["open_data_schema_apis.ckan_package_list.arguments|1"]["DELETED"] = TRUE;
  $overrides["open_data_schema_apis.ckan_package_list.arguments|2"]["DELETED"] = TRUE;
  $overrides["open_data_schema_apis.ckan_package_list.bundle"] = '';
  $overrides["open_data_schema_apis.ckan_package_list.callback"] = 'open_data_schema_ckan_package_list_callback';
  $overrides["open_data_schema_apis.ckan_package_list.description"]["DELETED"] = TRUE;
  $overrides["open_data_schema_apis.ckan_package_list.enabled"] = TRUE;
  $overrides["open_data_schema_apis.ckan_package_list.entity"] = '';
  $overrides["open_data_schema_apis.ckan_package_list.mapping"]["DELETED"] = TRUE;
  $overrides["open_data_schema_apis.ckan_package_list.type"]["DELETED"] = TRUE;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panel_context_2.conf|display|content|new-6c4c5cf1-b622-4fe5-a5e6-b1089489a13f"] = (object) array(
      'pid' => 'new-6c4c5cf1-b622-4fe5-a5e6-b1089489a13f',
      'panel' => 'contentmain',
      'type' => 'node_body',
      'subtype' => 'node_body',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'argument_entity_id:node_1',
        'override_title' => 1,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '6c4c5cf1-b622-4fe5-a5e6-b1089489a13f',
    );
  $overrides["page_manager_handlers.node_view_panel_context_2.conf|display|panels|contentmain|1"] = 'new-6c4c5cf1-b622-4fe5-a5e6-b1089489a13f';
  $overrides["page_manager_handlers.node_view_panel_context_2.conf|display|title_pane"] = 'new-6c4c5cf1-b622-4fe5-a5e6-b1089489a13f';

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets__without-topics|weight"] = -29;
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|content|new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd|position"] = 1;
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|content|new-51b9a740-77dd-44f7-8aa8-57d1728afbe7|configuration|override_title_text"] = 'Domains';
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|content|new-51b9a740-77dd-44f7-8aa8-57d1728afbe7|position"] = 0;
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|panels|sidebar|0"] = 'new-51b9a740-77dd-44f7-8aa8-57d1728afbe7';
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|panels|sidebar|1"] = 'new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd';
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|weight"] = -30;
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|content|new-11969a4b-795a-40df-8d66-91f6daec6c20|panel"] = 'top-first';
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|content|new-949696cf-520f-40a4-af80-725bca8b2f13|panel"] = 'top-first';
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|content|new-d3655ff2-8c3c-4a0b-b492-8aa98ea1b7f3"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|content|new-e0213e1b-cd3b-44fa-b35d-3be1eb05c0e4"] = (object) array(
      'pid' => 'new-e0213e1b-cd3b-44fa-b35d-3be1eb05c0e4',
      'panel' => 'top-first',
      'type' => 'fieldable_panels_pane',
      'subtype' => 'vuuid:b35cc4b7-01fa-4c97-99e3-e58c458fd512',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_mode' => 'full',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'e0213e1b-cd3b-44fa-b35d-3be1eb05c0e4',
    );
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|content|new-e9a59ddf-15b0-4a29-8ef6-ef460ba539e0"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|panels|top-first|0"] = 'new-e0213e1b-cd3b-44fa-b35d-3be1eb05c0e4';
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|panels|top-first|1"] = 'new-949696cf-520f-40a4-af80-725bca8b2f13';
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|panels|top-first|2"] = 'new-11969a4b-795a-40df-8d66-91f6daec6c20';
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|panels|top-second"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.front_page.default_handlers|page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1|conf|display|title_pane"] = 0;

  // Exported overrides for: search_api_index
  $overrides["search_api_index.datasets.options|data_alter_callbacks|panelizer"] = array(
    'status' => 0,
    'weight' => 0,
    'settings' => array(),
  );
  $overrides["search_api_index.datasets.options|data_alter_callbacks|search_api_alter_add_hierarchy|settings|fields|field_topic:parent"] = 'field_topic:parent';
  $overrides["search_api_index.datasets.options|data_alter_callbacks|search_api_alter_add_hierarchy|settings|fields|field_topic:parents_all"] = 'field_topic:parents_all';
  $overrides["search_api_index.datasets.options|data_alter_callbacks|search_api_alter_add_hierarchy|status"] = 1;
  $overrides["search_api_index.datasets.options|data_alter_callbacks|search_api_alter_bundle_filter"] = array(
    'status' => 0,
    'weight' => -10,
    'settings' => array(
      'default' => 1,
      'bundles' => array(),
    ),
  );

  // Exported overrides for: variable
  $overrides["variable.jquery_update_jquery_version.value"] = '1.10';

 return $overrides;
}
