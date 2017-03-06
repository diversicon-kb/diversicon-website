<?php
/**
 * @file
 * diversicon_other_overrides.features.inc
 */

/**
 * Implements hook_eck_bundle_info_alter().
 */
function diversicon_other_overrides_eck_bundle_info_alter(&$data) {
  if (isset($data['visualization_ve_chart'])) {
    $data['visualization_ve_chart']['config'] = array(); /* WAS: '' */
  }
}

/**
 * Implements hook_facetapi_default_facet_settings_alter().
 */
function diversicon_other_overrides_facetapi_default_facet_settings_alter(&$data) {
  if (isset($data['search_api@datasets:block:field_topic'])) {
    $data['search_api@datasets:block:field_topic']->settings['facet_fewer_text'] = 'Show fewer'; /* WAS: '' */
    $data['search_api@datasets:block:field_topic']->settings['facet_more_text'] = 'Show more'; /* WAS: '' */
    $data['search_api@datasets:block:field_topic']->settings['show_expanded'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_node_info_alter().
 */
function diversicon_other_overrides_node_info_alter(&$data) {
  if (isset($data['blog'])) {
    $data['blog']['has_title'] = 1; /* WAS: '' */
    $data['blog']['help'] = ''; /* WAS: '' */
    $data['blog']['title_label'] = 'Title'; /* WAS: '' */
  }
}

/**
 * Implements hook_default_og_membership_type_alter().
 */
function diversicon_other_overrides_default_og_membership_type_alter(&$data) {
  if (isset($data['og_membership_type_default'])) {
    $data['og_membership_type_default']->language = ''; /* WAS: '' */
  }
}

/**
 * Implements hook_open_data_schema_apis_defaults_alter().
 */
function diversicon_other_overrides_open_data_schema_apis_defaults_alter(&$data) {
  if (isset($data['ckan_package_list'])) {
    $data['ckan_package_list']['bundle'] = ''; /* WAS: 'dataset' */
    $data['ckan_package_list']['callback'] = 'open_data_schema_ckan_package_list_callback'; /* WAS: '' */
    $data['ckan_package_list']['enabled'] = TRUE; /* WAS: 1 */
    $data['ckan_package_list']['entity'] = ''; /* WAS: '' */
    unset($data['ckan_package_list']['arguments'][1]);
    unset($data['ckan_package_list']['arguments'][2]);
    unset($data['ckan_package_list']['description']);
    unset($data['ckan_package_list']['mapping']);
    unset($data['ckan_package_list']['type']);
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function diversicon_other_overrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_view_panel_context_2'])) {
    $data['node_view_panel_context_2']->conf['display']->content['new-6c4c5cf1-b622-4fe5-a5e6-b1089489a13f'] = (object) array(
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
        ); /* WAS: '' */
    $data['node_view_panel_context_2']->conf['display']->panels['contentmain'][1] = 'new-6c4c5cf1-b622-4fe5-a5e6-b1089489a13f'; /* WAS: '' */
    $data['node_view_panel_context_2']->conf['display']->title_pane = 'new-6c4c5cf1-b622-4fe5-a5e6-b1089489a13f'; /* WAS: 0 */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function diversicon_other_overrides_default_page_manager_pages_alter(&$data) {
  if (isset($data['datasets'])) {
    $data['datasets']->default_handlers['page_datasets__without-topics']->weight = -29; /* WAS: 1 */
    $data['datasets']->default_handlers['page_datasets_panel_context']->conf['display']->content['new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd']->position = 1; /* WAS: 0 */
    $data['datasets']->default_handlers['page_datasets_panel_context']->conf['display']->content['new-51b9a740-77dd-44f7-8aa8-57d1728afbe7']->configuration['override_title_text'] = 'Domains'; /* WAS: 'Topics' */
    $data['datasets']->default_handlers['page_datasets_panel_context']->conf['display']->content['new-51b9a740-77dd-44f7-8aa8-57d1728afbe7']->position = 0; /* WAS: 1 */
    $data['datasets']->default_handlers['page_datasets_panel_context']->conf['display']->panels['sidebar'][0] = 'new-51b9a740-77dd-44f7-8aa8-57d1728afbe7'; /* WAS: 'new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd' */
    $data['datasets']->default_handlers['page_datasets_panel_context']->conf['display']->panels['sidebar'][1] = 'new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd'; /* WAS: 'new-51b9a740-77dd-44f7-8aa8-57d1728afbe7' */
    $data['datasets']->default_handlers['page_datasets_panel_context']->weight = -30; /* WAS: 0 */
  }
  if (isset($data['front_page'])) {
    $data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->content['new-11969a4b-795a-40df-8d66-91f6daec6c20']->panel = 'top-first'; /* WAS: 'top-second' */
    $data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->content['new-949696cf-520f-40a4-af80-725bca8b2f13']->panel = 'top-first'; /* WAS: 'top-second' */
    $data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->content['new-e0213e1b-cd3b-44fa-b35d-3be1eb05c0e4'] = (object) array(
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
        ); /* WAS: '' */
    $data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->panels['top-first'][0] = 'new-e0213e1b-cd3b-44fa-b35d-3be1eb05c0e4'; /* WAS: 'new-d3655ff2-8c3c-4a0b-b492-8aa98ea1b7f3' */
    $data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->panels['top-first'][1] = 'new-949696cf-520f-40a4-af80-725bca8b2f13'; /* WAS: '' */
    $data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->panels['top-first'][2] = 'new-11969a4b-795a-40df-8d66-91f6daec6c20'; /* WAS: '' */
    $data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->title_pane = 0; /* WAS: 'new-e9a59ddf-15b0-4a29-8ef6-ef460ba539e0' */
    unset($data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->content['new-d3655ff2-8c3c-4a0b-b492-8aa98ea1b7f3']);
    unset($data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->content['new-e9a59ddf-15b0-4a29-8ef6-ef460ba539e0']);
    unset($data['front_page']->default_handlers['page_front_page__panel_context_5036fa8b-91e0-4e46-8ab7-ca69eca273e1']->conf['display']->panels['top-second']);
  }
}

/**
 * Implements hook_default_search_api_index_alter().
 */
function diversicon_other_overrides_default_search_api_index_alter(&$data) {
  if (isset($data['datasets'])) {
    $data['datasets']->options['data_alter_callbacks']['panelizer'] = array(
      'status' => 0,
      'weight' => 0,
      'settings' => array(),
    ); /* WAS: '' */
    $data['datasets']->options['data_alter_callbacks']['search_api_alter_add_hierarchy']['settings']['fields']['field_topic:parent'] = 'field_topic:parent'; /* WAS: '' */
    $data['datasets']->options['data_alter_callbacks']['search_api_alter_add_hierarchy']['settings']['fields']['field_topic:parents_all'] = 'field_topic:parents_all'; /* WAS: '' */
    $data['datasets']->options['data_alter_callbacks']['search_api_alter_add_hierarchy']['status'] = 1; /* WAS: 0 */
    $data['datasets']->options['data_alter_callbacks']['search_api_alter_bundle_filter'] = array(
      'status' => 0,
      'weight' => -10,
      'settings' => array(
        'default' => 1,
        'bundles' => array(),
      ),
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function diversicon_other_overrides_strongarm_alter(&$data) {
  if (isset($data['jquery_update_jquery_version'])) {
    $data['jquery_update_jquery_version']->value = '1.10'; /* WAS: 1.7 */
  }
}
