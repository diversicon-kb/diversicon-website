<?php
/**
 * @file
 * diversicon.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function diversicon_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_node_data_dashboard'])) {
    $data['panelizer_defaults_node_data_dashboard']->value['view modes']['diff_standard'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_data_dashboard']->value['view modes']['full'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_data_dashboard']->value['view modes']['rss'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_data_dashboard']->value['view modes']['token'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
    unset($data['panelizer_defaults_node_data_dashboard']->value['view modes']['search_result']);
  }
}
