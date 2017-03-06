<?php
/**
 * @file
 * diversicon.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function diversicon_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_node_data_dashboard.value|view modes|diff_standard"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_defaults_node_data_dashboard.value|view modes|full"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_defaults_node_data_dashboard.value|view modes|rss"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );
  $overrides["variable.panelizer_defaults_node_data_dashboard.value|view modes|search_result"]["DELETED"] = TRUE;
  $overrides["variable.panelizer_defaults_node_data_dashboard.value|view modes|token"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );

 return $overrides;
}
