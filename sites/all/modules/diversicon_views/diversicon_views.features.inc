<?php
/**
 * @file
 * diversicon_views.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function diversicon_views_views_default_views_alter(&$data) {
  if (isset($data['archive'])) {
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['archive']->display['default']->display_options['access']['perm']);
  }
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['access']['perm']);
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
  if (isset($data['glossary'])) {
    $data['glossary']->display['attachment']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['summary_options']['inline'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['inherit_arguments'] = FALSE; /* WAS: 0 */
    $data['glossary']->display['default']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['glossary']->display['attachment']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['access']['perm']);
    unset($data['glossary']->display['default']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['glossary']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['glossary']->display['default']->display_options['style_options']['override']);
    unset($data['glossary']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['media_default'])) {
    unset($data['media_default']->display['default']->display_options['exposed_form']['options']);
    unset($data['media_default']->display['default']->display_options['fields']['filename']['link_to_file']);
  }
  if (isset($data['og_all_user_group_content'])) {
    $data['og_all_user_group_content']->display['default']->display_options['arguments']['gid']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['og_all_user_group_content']->display['default']->display_options['fields']['title_1']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['og_all_user_group_content']->display['default']->display_options['fields']['title']['alter']['ellipsis'] = FALSE; /* WAS: 0 */
    $data['og_all_user_group_content']->display['default']->display_options['fields']['title']['alter']['word_boundary'] = FALSE; /* WAS: 0 */
    $data['og_all_user_group_content']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['og_all_user_group_content']->display['default']->display_options['arguments']['gid']['default_argument_skip_url']);
    unset($data['og_all_user_group_content']->display['default']->display_options['arguments']['gid']['not']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title_1']['alter']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title_1']['element_default_classes']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title_1']['empty_zero']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title_1']['hide_empty']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title_1']['link_to_node']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title']['alter']['absolute']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title']['alter']['alter_text']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title']['alter']['html']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title']['alter']['make_link']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title']['alter']['strip_tags']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title']['alter']['trim']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title']['empty_zero']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title']['hide_empty']);
    unset($data['og_all_user_group_content']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['og_all_user_group_content']->display['default']->display_options['relationships']['og_membership_related_node_group']['required']);
    unset($data['og_all_user_group_content']->display['default']->display_options['relationships']['og_membership_rel']['required']);
    unset($data['og_all_user_group_content']->display['default']->display_options['row_options']);
  }
  if (isset($data['og_extras_groups'])) {
    $data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['trim'] = TRUE; /* WAS: 1 */
    $data['og_extras_groups']->display['default']->display_options['fields']['group_group']['element_label_colon'] = FALSE; /* WAS: 0 */
    $data['og_extras_groups']->display['default']->display_options['fields']['title']['element_label_colon'] = FALSE; /* WAS: 0 */
    $data['og_extras_groups']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['absolute']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['alter_text']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['ellipsis']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['external']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['html']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['make_link']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['more_link']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['nl2br']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['replace_spaces']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['strip_tags']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['trim_whitespace']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['alter']['word_boundary']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['element_default_classes']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['element_label_colon']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['empty_zero']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['field_api_classes']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['hide_alter_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['body']['hide_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['created']['alter']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['created']['element_default_classes']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['created']['element_label_colon']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['created']['empty_zero']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['created']['hide_alter_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['created']['hide_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['group_group']['alter']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['group_group']['element_default_classes']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['group_group']['empty_zero']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['group_group']['field_api_classes']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['group_group']['hide_alter_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['group_group']['hide_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['name']['alter']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['name']['element_default_classes']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['name']['element_label_colon']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['name']['empty_zero']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['name']['format_username']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['name']['hide_alter_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['name']['hide_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['name']['overwrite_anonymous']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['title']['alter']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['title']['element_default_classes']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['title']['empty_zero']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['title']['hide_alter_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['title']['hide_empty']);
    unset($data['og_extras_groups']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['og_extras_groups']->display['default']->display_options['relationships']['og_membership_rel']['required']);
    unset($data['og_extras_groups']->display['default']->display_options['relationships']['uid']['required']);
    unset($data['og_extras_groups']->display['default']->display_options['style_options']['empty_table']);
    unset($data['og_extras_groups']->display['default']->display_options['style_options']['override']);
    unset($data['og_extras_groups']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['og_extras_members'])) {
    $data['og_extras_members']->display['default']->display_options['arguments']['gid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['og_extras_members']->display['default']->display_options['arguments']['gid']['title_enable'] = TRUE; /* WAS: 1 */
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['alter']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['empty_zero']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['hide_empty']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['link_to_user']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['overwrite_anonymous']);
    unset($data['og_extras_members']->display['block_1']->display_options['use_more_always']);
    unset($data['og_extras_members']->display['default']->display_options['arguments']['gid']['break_phrase']);
    unset($data['og_extras_members']->display['default']->display_options['arguments']['gid']['default_argument_skip_url']);
    unset($data['og_extras_members']->display['default']->display_options['arguments']['gid']['not']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['alter']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['empty_zero']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['hide_empty']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['overwrite_anonymous']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['alter']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['element_default_classes']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['empty_zero']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['hide_alter_empty']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['hide_empty']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['link_photo_to_profile']);
    unset($data['og_extras_members']->display['default']->display_options['pager']['options']['expose']);
    unset($data['og_extras_members']->display['default']->display_options['relationships']['og_membership_rel']['required']);
    unset($data['og_extras_members']->display['default']->display_options['style_options']);
  }
  if (isset($data['og_extras_nodes'])) {
    $data['og_extras_nodes']->display['default']->display_options['arguments']['gid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['og_extras_nodes']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['og_extras_nodes']->display['default']->display_options['arguments']['gid']['break_phrase']);
    unset($data['og_extras_nodes']->display['default']->display_options['arguments']['gid']['default_argument_skip_url']);
    unset($data['og_extras_nodes']->display['default']->display_options['arguments']['gid']['not']);
    unset($data['og_extras_nodes']->display['default']->display_options['empty']['area']['empty']);
    unset($data['og_extras_nodes']->display['default']->display_options['relationships']['og_membership_rel']['required']);
    unset($data['og_extras_nodes']->display['default']->display_options['row_options']);
  }
  if (isset($data['og_members'])) {
    $data['og_members']->display['default']->display_options['arguments']['gid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['og_members']->display['default']->display_options['arguments']['gid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['og_members']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['og_members']->display['default']->display_options['arguments']['gid']['break_phrase']);
    unset($data['og_members']->display['default']->display_options['arguments']['gid']['default_argument_skip_url']);
    unset($data['og_members']->display['default']->display_options['arguments']['gid']['not']);
    unset($data['og_members']->display['default']->display_options['fields']['name']['alter']);
    unset($data['og_members']->display['default']->display_options['fields']['name']['empty_zero']);
    unset($data['og_members']->display['default']->display_options['fields']['name']['hide_empty']);
    unset($data['og_members']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['og_members']->display['default']->display_options['fields']['name']['overwrite_anonymous']);
    unset($data['og_members']->display['default']->display_options['relationships']['og_membership_rel']['required']);
  }
  if (isset($data['og_members_admin'])) {
    $data['og_members_admin']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
      'action::og_user_roles_action' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
        'postpone_processing' => 0,
      ),
      'action::og_membership_delete_action' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
        'postpone_processing' => 0,
      ),
      'action::og_set_state_action' => array(
        'selected' => 1,
        'skip_confirmation' => 0,
        'override_label' => 0,
        'label' => '',
        'postpone_processing' => 0,
      ),
    ); /* WAS: '' */
    $data['og_members_admin']->display['default']->display_options['fields']['views_bulk_operations']['vbo_settings'] = array(
      'display_type' => 0,
      'enable_select_all_pages' => 1,
      'force_single' => 0,
      'entity_load_capacity' => 10,
    ); /* WAS: '' */
    $data['og_members_admin']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['og_members_admin']->display['default']->display_options['empty']['area']['empty']);
    unset($data['og_members_admin']->display['default']->display_options['fields']['views_bulk_operations']['vbo']);
  }
  if (isset($data['og_nodes'])) {
    $data['og_nodes']->display['default']->display_options['arguments']['gid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['og_nodes']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['og_nodes']->display['default']->display_options['arguments']['gid']['break_phrase']);
    unset($data['og_nodes']->display['default']->display_options['arguments']['gid']['default_argument_skip_url']);
    unset($data['og_nodes']->display['default']->display_options['arguments']['gid']['not']);
    unset($data['og_nodes']->display['default']->display_options['empty']['area']['empty']);
    unset($data['og_nodes']->display['default']->display_options['relationships']['og_membership_rel']['required']);
    unset($data['og_nodes']->display['default']->display_options['row_options']);
  }
  if (isset($data['og_user_groups'])) {
    $data['og_user_groups']->display['default']->display_options['arguments']['etid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['og_user_groups']->display['default']->display_options['arguments']['etid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['og_user_groups']->display['default']->display_options['fields']['created']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['og_user_groups']->display['default']->display_options['fields']['title']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['og_user_groups']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['og_user_groups']->display['default']->display_options['arguments']['etid']['break_phrase']);
    unset($data['og_user_groups']->display['default']->display_options['arguments']['etid']['default_argument_skip_url']);
    unset($data['og_user_groups']->display['default']->display_options['arguments']['etid']['not']);
    unset($data['og_user_groups']->display['default']->display_options['arguments']['etid']['validate_options']);
    unset($data['og_user_groups']->display['default']->display_options['empty']['area']['empty']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['created']['alter']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['created']['element_default_classes']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['created']['element_label_colon']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['created']['empty_zero']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['created']['hide_empty']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['title']['alter']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['title']['element_default_classes']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['title']['element_label_colon']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['title']['empty_zero']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['title']['hide_empty']);
    unset($data['og_user_groups']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['og_user_groups']->display['default']->display_options['relationships']['og_membership_related_node_group']['required']);
    unset($data['og_user_groups']->display['default']->display_options['style_options']['empty_table']);
    unset($data['og_user_groups']->display['default']->display_options['style_options']['override']);
    unset($data['og_user_groups']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['panopoly_widgets_general_content'])) {
    unset($data['panopoly_widgets_general_content']->display['default']->display_options['fields']['field_featured_image']['click_sort_column']);
    unset($data['panopoly_widgets_general_content']->display['default']->display_options['fields']['field_featured_image']['settings']);
  }
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['taxonomy_term']->display['default']->display_options['access']['perm']);
  }
}
