<?php
/**
 * @file
 * caroneiros_carona.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function caroneiros_carona_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_carona';
  $strongarm->value = 0;
  $export['comment_anonymous_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_carona';
  $strongarm->value = '1';
  $export['comment_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_carona';
  $strongarm->value = 0;
  $export['comment_default_mode_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_carona';
  $strongarm->value = '50';
  $export['comment_default_per_page_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_carona';
  $strongarm->value = 0;
  $export['comment_form_location_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_carona';
  $strongarm->value = '0';
  $export['comment_preview_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_carona';
  $strongarm->value = 0;
  $export['comment_subject_field_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__carona';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'locations' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__request';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_default';
  $strongarm->value = array(
    'width' => '300px',
    'height' => '200px',
    'latlong' => '40,0',
    'zoom' => '3',
    'controltype' => 'small',
    'pancontrol' => 1,
    'mtc' => 'standard',
    'maptype' => 'Map',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 0,
      'Hybrid' => 0,
      'Physical' => 0,
      'OpenStreetMap' => 0,
    ),
    'unitsystem' => 'metric',
    'scale' => 0,
    'overview' => 0,
    'overview_opened' => 0,
    'scrollwheel' => 0,
    'draggable' => 0,
    'nokeyboard' => 0,
    'nodoubleclickzoom' => 0,
    'streetview_show' => 0,
    'travelmode_show' => 0,
    'transit_dates' => 0,
    'transit_date_format' => 'int',
    'travelextras_show' => 0,
    'map_backgroundcolor' => '',
    'from_width' => '20',
    'to_width' => '20',
    'use_country_dropdown' => 1,
    'use_advanced' => 1,
    'waypoints' => '0',
    'advanced_autocomplete_via' => 0,
    'advanced_autocomplete_via_width' => '20',
    'waypoints_optimise' => 0,
    'waypoint_color' => 'white',
    'advanced_alternate' => 0,
    'advanced_autocomplete' => 0,
    'advanced_autocomplete_bias' => 0,
    'region_bias' => 'BR',
    'use_https' => 0,
  );
  $export['getdirections_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_misc';
  $strongarm->value = array(
    'keep_title' => 0,
    'show_distance' => 0,
    'show_duration' => 0,
    'geolocation_enable' => 0,
    'geolocation_mobile_check' => 1,
    'geolocation_option' => '1',
    'trafficinfo' => 0,
    'trafficinfo_state' => 0,
    'bicycleinfo' => 0,
    'bicycleinfo_state' => 0,
    'transitinfo' => 0,
    'transitinfo_state' => 0,
    'panoramio_use' => 0,
    'panoramio_show' => 0,
    'panoramio_state' => 0,
    'weather_use' => 0,
    'weather_show' => 0,
    'weather_state' => 0,
    'weather_temp' => '1',
    'weather_speed' => '1',
    'weather_label' => '0',
    'weather_clickable' => 1,
    'weather_info' => 1,
    'weather_cloud' => 1,
    'weather_cloud_state' => 0,
    'switchfromto' => 0,
  );
  $export['getdirections_misc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_paths';
  $strongarm->value = array(
    'getdirections_v3_path' => 'sites/all/modules/contrib/getdirections/js/getdirections_v3.js',
    'getdirections_v3a_path' => 'sites/all/modules/contrib/getdirections/js/getdirections_v3a.js',
    'getdirections_v3b_path' => 'sites/all/modules/contrib/getdirections/js/getdirections_v3b.js',
    'getdirections_preview_path' => 'sites/all/modules/contrib/getdirections/js/getdirections_preview.js',
  );
  $export['getdirections_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_returnlink';
  $strongarm->value = array(
    'node_enable' => 0,
    'node_link' => 'Return to page',
  );
  $export['getdirections_returnlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_ua';
  $strongarm->value = array(
    'ua_string' => 'iphone|ipad|android|blackberry|blazer|bolt|symbian|mobile safari|fennec|gobrowser|iemobile|maemo browser|profile midp|minimo|kindle|opera mini|opera mobi|skyfire|teashark|uzardweb',
  );
  $export['getdirections_ua'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_default';
  $strongarm->value = array(
    'width' => '300px',
    'height' => '200px',
    'latlong' => '33.00837014408177,8.61328125',
    'zoom' => '2',
    'maxzoom' => '14',
    'styles' => array(
      'line_default' => array(
        0 => '0000ff',
        1 => '5',
        2 => '45',
        3 => '',
        4 => '',
      ),
      'poly_default' => array(
        0 => '000000',
        1 => '3',
        2 => '25',
        3 => 'ff0000',
        4 => '45',
      ),
      'highlight_color' => 'ff0000',
    ),
    'controltype' => 'Small',
    'pancontrol' => 1,
    'streetviewcontrol' => 0,
    'mtc' => 'standard',
    'maptype' => 'Map',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 0,
      'Hybrid' => 0,
      'Physical' => 0,
    ),
    'behavior' => array(
      'locpick' => FALSE,
      'nodrag' => 0,
      'nokeyboard' => 1,
      'nomousezoom' => 0,
      'nocontzoom' => 0,
      'autozoom' => 0,
      'dynmarkers' => 0,
      'overview' => 0,
      'collapsehack' => 0,
      'scale' => 0,
      'extramarkerevents' => FALSE,
      'clickableshapes' => FALSE,
      'highlight' => 0,
    ),
    'markermode' => '0',
    'line_colors' => array(
      0 => '#00cc00',
      1 => '#ff0000',
      2 => '#0000ff',
    ),
  );
  $export['gmap_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_markermanager';
  $strongarm->value = array(
    'markermanager' => array(
      'filename' => 'markermanager_packed.js',
      'borderPadding' => '256',
      'maxZoom' => '4',
      'trackMarkers' => 0,
      'markerMinZoom' => '4',
      'markerMaxZoom' => '0',
    ),
    'markerclusterer' => array(
      'filename' => 'markerclusterer_packed.js',
      'gridSize' => 60,
      'maxZoom' => 17,
      'styles' => array(),
    ),
    'clusterer' => array(
      'filename' => 'Clusterer2.js',
      'marker' => 'cluster',
      'max_nocluster' => '150',
      'cluster_min' => '5',
      'max_lines' => '10',
      'popup_mode' => 'orig',
    ),
    'clustermarker' => array(
      'filename' => 'ClusterMarker.js',
      'borderPadding' => '256',
      'clusteringEnabled' => 1,
      'clusterMarkerIcon' => '',
      'clusterMarkerTitle' => '',
      'fitMapMaxZoom' => '0',
      'intersectPadding' => '0',
    ),
  );
  $export['gmap_markermanager'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_marker_custom_dir';
  $strongarm->value = 'no value';
  $export['gmap_marker_custom_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_marker_file';
  $strongarm->value = '1';
  $export['gmap_marker_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_mm_type';
  $strongarm->value = 'gmap';
  $export['gmap_mm_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_node_map';
  $strongarm->value = array(
    'macro' => '',
    'header' => 'This map illustrates the locations of the nodes on this website. Each marker indicates a node associated with a specific location.[gmap |id=nodemap|center=40,0|zoom=3|width=100%|height=400px]',
    'footer' => '',
    'markermode' => '1',
  );
  $export['gmap_node_map'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_node_markers';
  $strongarm->value = array(
    'carona' => 'drupal',
    'webform' => 'drupal',
  );
  $export['gmap_node_markers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_role_markers';
  $strongarm->value = array(
    2 => 'drupal',
    3 => 'drupal',
  );
  $export['gmap_role_markers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gmap_user_map';
  $strongarm->value = array(
    'macro' => '',
    'header' => 'This map illustrates the extent of users of this website. Each marker indicates a user that has entered their locations.
[gmap |id=usermap|center=40,0|zoom=3|width=100%|height=400px]',
    'footer' => '',
    'markermode' => '1',
  );
  $export['gmap_user_map'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_carona';
  $strongarm->value = '0';
  $export['language_content_type_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_request';
  $strongarm->value = '0';
  $export['language_content_type_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_default_country';
  $strongarm->value = 'br';
  $export['location_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_display_location';
  $strongarm->value = '1';
  $export['location_display_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_general_geocoders_in_use';
  $strongarm->value = array(
    'google' => 'google',
  );
  $export['location_general_geocoders_in_use'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_pt';
  $strongarm->value = 'none';
  $export['location_geocode_pt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_jit_geocoding';
  $strongarm->value = 0;
  $export['location_jit_geocoding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_locpick_macro';
  $strongarm->value = '[gmap]';
  $export['location_locpick_macro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maplink_external';
  $strongarm->value = 0;
  $export['location_maplink_external'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maplink_external_method';
  $strongarm->value = 'target="_blank"';
  $export['location_maplink_external_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_carona';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_request';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_carona';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_request';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_carona';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_request';
  $strongarm->value = array();
  $export['node_options_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_carona';
  $strongarm->value = '1';
  $export['node_preview_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_request';
  $strongarm->value = '1';
  $export['node_preview_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_carona';
  $strongarm->value = 1;
  $export['node_submitted_carona'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_request';
  $strongarm->value = 0;
  $export['node_submitted_request'] = $strongarm;

  return $export;
}
