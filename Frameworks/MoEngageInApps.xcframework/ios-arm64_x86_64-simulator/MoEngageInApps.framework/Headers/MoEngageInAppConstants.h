//
//  MoEngageInAppConstants.h
//  MOInApp
//
//  Created by Chengappa C D on 14/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MoEngageObjCUtils/MoEngageObjCUtils.h>

//InApp Version
extern NSString* const MO_INAPP_VERSION;

//LogTag With Version
extern NSString* const MO_LOG_TAG;

#pragma mark - Storage Paths

//Storage Paths
extern NSString* const MO_STORAGE_PATH_INAPP_V3;
extern NSString* const MO_STORAGE_PATH_INAPP_V2;
extern NSString* const MO_STORAGE_PATH_INAPP_V1;


// Image Paths
extern NSString* const MO_IMAGES_PATH_INAPP_V3;
extern NSString* const MO_IMAGES_PATH_INAPP_V2;
extern NSString* const MO_IMAGES_PATH_INAPP_V1;

#pragma mark - Notifications

extern NSString* const kNotificationNameUserReset;
extern NSString* const kNotificationNameUpdateModules;
extern NSString* const kNotificationNameShowInAppViaPush;

#pragma mark - Stats Events and Attrs

extern NSString* const kEventAttributeCampaignID;
extern NSString *const kEventAttributeCampaignName;
extern NSString* const kEventAttributeWidgetID;
extern NSString* const kEventAttributeRating;


#pragma mark - STATE KEYS

// STATE Dictionary
extern NSString* const MO_INAPP_STATE_KEY_CID; // Campaign ID
extern NSString* const MO_INAPP_STATE_KEY_TIMES_SHOWN; // Number of times inapp is shown
extern NSString* const MO_INAPP_STATE_KEY_EXPIRY; // Expiry Time
extern NSString* const MO_INAPP_STATE_KEY_PRIMARY_DONE;
extern NSString* const MO_INAPP_STATE_KEY_LAST_SHOWN;
extern NSString* const MO_INAPP_STATE_KEY_DELETION_TIME;

#pragma mark - API RESPONSE KEYS

// FETCH API RESPONSE KEYS
extern NSString* const MO_INAPP_RESP_KEY_CAMPAIGNS;
extern NSString* const MO_INAPP_RESP_KEY_GLOBAL_DELAY;

extern NSString* const MO_INAPP_RESP_KEY_SYNC_INTERVAL;

// META API RESPONSE KEYS
extern NSString* const MO_INAPP_META_KEY_INSTANCE_ID;
extern NSString* const MO_INAPP_META_KEY_CID;
extern NSString* const MO_INAPP_META_KEY_C_NAME;
extern NSString* const MO_INAPP_META_KEY_C_TYPE;
extern NSString* const MO_INAPP_META_KEY_TEMPLATE_TYPE;
extern NSString* const MO_INAPP_META_KEY_SDK_CMP_TYPE;
extern NSString* const MO_INAPP_META_KEY_INAPP_TYPE;
extern NSString* const MO_INAPP_META_KEY_ORIENTATION;
extern NSString* const MO_INAPP_META_C_TYPE_VAL_MOBILE_INAPP;
extern NSString* const MO_INAPP_META_KEY_POSITION;


extern NSString* const MO_INAPP_META_KEY_EXPIRY;
extern NSString* const MO_INAPP_META_KEY_LAST_UPDATED;

// TRIGGER API RESPONSE KEYS
extern NSString* const MO_INAPP_META_KEY_TRIGGER;
extern NSString* const MO_INAPP_META_TRIGGER_KEY_PRIMARY_COND;
extern NSString* const MO_INAPP_META_TRIGGER_KEY_INCLUDED_FILTERS;
extern NSString* const MO_INAPP_META_TRIGGER_KEY_FILTERS;
extern NSString* const MO_INAPP_META_TRIGGER_PRIMARY_COND_KEY_ACTION_NAME;
extern NSString* const MO_INAPP_META_TRIGGER_PRIMARY_COND_KEY_FILTER_TYPE;
extern NSString* const MO_INAPP_META_TRIGGER_PRIMARY_COND_KEY_FILTER_COND;
extern NSString* const MO_INAPP_META_TRIGGER_PRIMARY_COND_FILTER_COND_KEY_OPERATOR;
extern NSString* const MO_INAPP_META_TRIGGER_PRIMARY_COND_FILTER_COND_KEY_FILTERS;


// DISPLAY API RESPONSE KEYS
extern NSString* const MO_INAPP_META_KEY_DISPLAY;

extern NSString* const MO_INAPP_META_DISPLAY_KEY_RULES;
extern NSString* const MO_INAPP_META_DISPLAY_KEY_DELAY;
extern NSString* const MO_INAPP_META_DISPLAY_RULES_KEY_SCREEN;
extern NSString* const MO_INAPP_META_DISPLAY_RULES_KEY_CONTEXTS;

//INAPP TYPE RESPONSE KEY
extern NSString* const MO_INAPP_META_INAPP_HTML;
extern NSString* const MO_INAPP_META_INAPP_NATIVE;

//CAMPAIGN CONTEXT RESPONSE KEY
extern NSString* const MO_INAPP_META_KEY_CAMPAIGN_CONTEXT;
extern NSString* const MO_INAPP_META_CAMPAIGN_CONTEXT_FORMATTED_CID;

//ORIENTATION RESPONSE KEY
extern NSString* const MO_INAPP_META_ORIENTATION_PORTRAIT;
extern NSString* const MO_INAPP_META_ORIENTATION_LANDSCAPE;

// DELIVERY CONTROL API RESPONSE KEYS
extern NSString* const MO_INAPP_META_KEY_DELIVERY_CONTROL;

extern NSString* const MO_INAPP_META_DELIVERY_CONTROL_KEY_PRIORITY;
extern NSString* const MO_INAPP_META_DELIVERY_CONTROL_KEY_PERSISTENT;
extern NSString* const MO_INAPP_META_DELIVERY_CONTROL_KEY_FC_META;

extern NSString* const MO_INAPP_META_DELIVERY_CONTROL_FC_META_KEY_MAX_COUNT;
extern NSString* const MO_INAPP_META_DELIVERY_CONTROL_FC_META_KEY_MIN_DELAY;
extern NSString* const MO_INAPP_META_DELIVERY_CONTROL_FC_META_KEY_IGNORE_GLOBAL_DELAY;



// PAYLOAD API RESPONSE KEYS
extern NSString* const MO_INAPP_PAYLOAD_KEY_CID;
extern NSString* const MO_INAPP_PAYLOAD_KEY_CAMPAIGN_NAME;
extern NSString* const MO_INAPP_PAYLOAD_KEY_TEMPLATE_TYPE;
extern NSString* const MO_INAPP_PAYLOAD_KEY_TEMPLATE_ALIGNMENT;

extern NSString* const MO_INAPP_PAYLOAD_KEY_CONTAINERS;
extern NSString* const MO_INAPP_PAYLOAD_KEY_PRIMARY_CONTAINER;
extern NSString* const MO_INAPP_PAYLOAD_KEY_WIDGETS;
extern NSString* const MO_INAPP_PAYLOAD_KEY_PRIMARY_WIDGET;

extern NSString* const MO_INAPP_PAYLOAD_KEY_COMPONENTS;
extern NSString* const MO_INAPP_PAYLOAD_KEY_STYLES;
extern NSString* const MO_INAPP_PAYLOAD_KEY_ACTIONS;
extern NSString* const MO_INAPP_PAYLOAD_KEY_IMG_LINKS;
extern NSString* const MO_INAPP_PAYLOAD_KEY_CONTENTS;
extern NSString* const MO_INAPP_PAYLOAD_KEY_DATA_MAPS;
extern NSString* const MO_INAPP_PAYLOAD_KEY_DISMISS_INTERVAL;
extern NSString* const MO_INAPP_PAYLOAD_KEY_SELF_HANDLED_PAYLOAD;
extern NSString* const MO_INAPP_PAYLOAD_KEY_HTML_META;
extern NSString* const MO_INAPP_PAYLOAD_KEY_VIDEO_LINKS;

extern NSString* const MO_INAPP_PAYLOAD_KEY_FAILURE_CODE;
extern NSString* const MO_INAPP_PAYLOAD_VALUE_CG_FAILURE_CODE;

//HTML INAPP ASSETS KEY
extern NSString* const MO_INAPP_HTML_META_KEY_ASSETS;


// REFERENCE KEY
extern NSString* const MO_INAPP_PAYLOAD_REF_KEY;
extern NSString* const MO_INAPP_PAYLOAD_SAFE_AREA_KEY;

// CONTAINER KEYS
extern NSString* const MO_INAPP_CONTAINER_KEY_STYLE;
extern NSString* const MO_INAPP_CONTAINER_KEY_WIDGETS;
extern NSString* const MO_INAPP_CONTAINER_KEY_AXIS;
extern NSString* const MO_INAPP_CONTAINER_KEY_WIDGET_TYPE;
extern NSString* const MO_INAPP_CONTAINER_KEY_WIDGET_ID;
// COMPONENT KEYS
extern NSString* const MO_INAPP_COMPONENT_KEY_CONTENT;
extern NSString* const MO_INAPP_COMPONENT_KEY_STYLE;
extern NSString* const MO_INAPP_COMPONENT_KEY_LABEL_WIDGETS;
extern NSString* const MO_INAPP_COMPONENT_KEY_IMAGE_WIDGETS;
extern NSString* const MO_INAPP_COMPONENT_KEY_BUTTON_WIDGETS;
extern NSString* const MO_INAPP_COMPONENT_KEY_RATING_WIDGETS;
extern NSString* const MO_INAPP_COMPONENT_KEY_CLOSE_BUTTON_WIDGETS;

// WIDGET KEYS
extern NSString* const MO_INAPP_WIDGET_KEY_COMPONENT;
extern NSString* const MO_INAPP_WIDGET_KEY_ACTION;

extern NSString* const MO_INAPP_WIDGET_KEY_LABEL_TYPE;
extern NSString* const MO_INAPP_WIDGET_KEY_IMAGE_TYPE;
extern NSString* const MO_INAPP_WIDGET_KEY_BUTTON_TYPE;
extern NSString* const MO_INAPP_WIDGET_KEY_RATING_TYPE;
extern NSString* const MO_INAPP_WIDGET_KEY_CLOSE_BUTTON_TYPE;
extern NSString* const MO_INAPP_WIDGET_KEY_VIDEO;
extern NSString* const MO_INAPP_WIDGET_KEY_FEEDBACK_TEXT;
extern NSString* const MO_INAPP_WIDGET_KEY_CUSTOM_RATING;
// STYLE KEYS
extern NSString* const MO_INAPP_STYLE_KEY_HEIGHT;
extern NSString* const MO_INAPP_STYLE_KEY_WIDTH;
extern NSString* const MO_INAPP_STYLE_KEY_REAL_HEIGHT;
extern NSString* const MO_INAPP_STYLE_KEY_REAL_WIDTH;
extern NSString* const MO_INAPP_STYLE_KEY_MARGIN;
extern NSString* const MO_INAPP_STYLE_KEY_PADDING;
extern NSString* const MO_INAPP_STYLE_KEY_BORDER;
extern NSString* const MO_INAPP_STYLE_KEY_BACKGROUND;
extern NSString* const MO_INAPP_STYLE_KEY_ANIMATION;
extern NSString* const MO_INAPP_STYLE_KEY_POSITION;
extern NSString* const MO_INAPP_STYLE_KEY_FONT;
extern NSString* const MO_INAPP_STYLE_KEY_CLOSE_BUT_FLOAT;
extern NSString* const MO_INAPP_STYLE_KEY_MIN_HEIGHT;
extern NSString* const MO_INAPP_STYLE_KEY_DISPLAY;
extern NSString* const MO_INAPP_STYLE_KEY_DISPLAY_SIZE;
extern NSString* const MO_INAPP_STYLE_KEY_INITIAL_STATE;
// POSITION KEYS
extern NSString* const MO_INAPP_STYLE_KEY_POSITION_ORIGIN;
extern NSString* const MO_INAPP_STYLE_KEY_POSITION_X;
extern NSString* const MO_INAPP_STYLE_KEY_POSITION_Y;

// FONT KEYS
extern NSString* const MO_INAPP_STYLE_KEY_FONT_NAME;
extern NSString* const MO_INAPP_STYLE_KEY_FONT_SIZE;
extern NSString* const MO_INAPP_STYLE_KEY_FONT_COLOR;


// BORDER KEYS
extern NSString* const MO_INAPP_STYLE_KEY_BORDER_COLOR;
extern NSString* const MO_INAPP_STYLE_KEY_BORDER_RADIUS;
extern NSString* const MO_INAPP_STYLE_KEY_BORDER_WIDTH;

// BACKGROUND KEYS
extern NSString* const MO_INAPP_STYLE_KEY_BG_COLOR;
extern NSString* const MO_INAPP_STYLE_KEY_BG_OPACITY;
extern NSString* const MO_INAPP_STYLE_KEY_BG_IMAGE;

// SIDES KEYS
extern NSString* const MO_INAPP_STYLE_KEY_SIDE_TOP;
extern NSString* const MO_INAPP_STYLE_KEY_SIDE_BOTTOM;
extern NSString* const MO_INAPP_STYLE_KEY_SIDE_LEFT;
extern NSString* const MO_INAPP_STYLE_KEY_SIDE_RIGHT;

// ANIMATION KEYS
extern NSString* const MO_INAPP_STYLE_KEY_ANIMATION_ENTRY;
extern NSString* const MO_INAPP_STYLE_KEY_ANIMATION_EXIT;


// ACTIONS KEYS
extern NSString* const MO_INAPP_ACTION_KEY_ACTION_TYPE;
extern NSString* const MO_INAPP_ACTION_KEY_TRACK_TYPE;
extern NSString* const MO_INAPP_ACTION_KEY_NAV_TYPE;
extern NSString* const MO_INAPP_ACTION_KEY_USER_INPUT_TYPE;
extern NSString* const MO_INAPP_ACTION_KEY_NAME;
extern NSString* const MO_INAPP_ACTION_KEY_VALUE;
extern NSString* const MO_INAPP_ACTION_KEY_MESSAGE;
extern NSString* const MO_INAPP_ACTION_KEY_DATA_MAP;
extern NSString* const MO_INAPP_ACTION_KEY_CONDITIONS;
extern NSString* const MO_INAPP_ACTION_KEY_SUB_ACTIONS;
extern NSString* const MO_INAPP_ACTION_KEY_WIDGET_ID;
extern NSString* const MO_INAPP_ACTION_CONDITIONS_KEY_ACTIONS;
extern NSString* const MO_INAPP_ACTION_CONDITIONS_KEY_ATTRIBUTE;
extern NSString* const MO_INAPP_ACTION_KEY_USER_ATTRIBUTE_TYPE;

// TEMPLATE TYPE VALUES
extern NSString* const MO_INAPP_TEMPLATE_TYPE_POP_UP;
extern NSString* const MO_INAPP_TEMPLATE_TYPE_EMBEDDED;
extern NSString* const MO_INAPP_TEMPLATE_TYPE_FULL_SCREEN;
extern NSString* const MO_INAPP_TEMPLATE_TYPE_SELF_HANDLED;
extern NSString* const MO_INAPP_TEMPLATE_TYPE_NON_INTRUSIVE;

// ANIMATION VALUES
extern NSString* const MO_INAPP_ANIMATION_VALUE_FADE_IN;
extern NSString* const MO_INAPP_ANIMATION_VALUE_FADE_OUT;
extern NSString* const MO_INAPP_ANIMATION_VALUE_SLIDE_LEFT;
extern NSString* const MO_INAPP_ANIMATION_VALUE_SLIDE_RIGHT;
extern NSString* const MO_INAPP_ANIMATION_VALUE_SLIDE_UP;
extern NSString* const MO_INAPP_ANIMATION_VALUE_SLIDE_DOWN;

// RATING STYLE KEYS
extern NSString* const MO_INAPP_STYLE_KEY_RATING;
extern NSString* const MO_INAPP_STYLE_RATING_KEY_NUM_OF_STARS;
extern NSString* const MO_INAPP_STYLE_RATING_KEY_HALF_STAR;
extern NSString* const MO_INAPP_STYLE_RATING_KEY_COLOR;

// WIDGET TYPE VALUES
extern NSString* const MO_INAPP_WIDGET_TYPE_TEXT;
extern NSString* const MO_INAPP_WIDGET_TYPE_IMAGE;
extern NSString* const MO_INAPP_WIDGET_TYPE_BUTTON;
extern NSString* const MO_INAPP_WIDGET_TYPE_RATING;
extern NSString* const MO_INAPP_WIDGET_TYPE_CLOSE_BUTTON;

// POSITION VALUES
extern NSString* const MO_INAPP_CONTAINER_AXIS_VERTICAL;
extern NSString* const MO_INAPP_CONTAINER_AXIS_HORIZONTAL;

// CLOSE BUTTON POSITION ORIGIN VALUES
extern NSString* const MO_INAPP_POSITION_ORIGIN_TOP_LEFT;
extern NSString* const MO_INAPP_POSITION_ORIGIN_TOP_RIGHT;
extern NSString* const MO_INAPP_POSITION_ORIGIN_BOTTOM_LEFT;
extern NSString* const MO_INAPP_POSITION_ORIGIN_BOTTOM_RIGHT;

// ACTION VALUES
extern NSString* const MO_INAPP_ACTION_TYPE_DISMISS;
extern NSString* const MO_INAPP_ACTION_TYPE_TRACK_DATA;
extern NSString* const MO_INAPP_ACTION_TYPE_NAVIGATE;
extern NSString* const MO_INAPP_ACTION_TYPE_NAVIGATE_SETTINGS;
extern NSString* const MO_INAPP_ACTION_TYPE_SHARE;
extern NSString* const MO_INAPP_ACTION_TYPE_COPY_TEXT;
extern NSString* const MO_INAPP_ACTION_TYPE_CALL;
extern NSString* const MO_INAPP_ACTION_TYPE_SMS;
extern NSString* const MO_INAPP_ACTION_TYPE_NOTIFICATION_ACTION;
extern NSString* const MO_INAPP_ACTION_TYPE_CONDITIONAL_ACTION;
extern NSString* const MO_INAPP_ACTION_TYPE_USER_INPUT_ACTION;
extern NSString* const MO_INAPP_ACTION_TYPE_CUSTOM_ACTION;
extern NSString* const MO_INAPP_ACTION_TYPE_RATING_CHANGE;
extern NSString* const MO_INAPP_ACTION_TYPE_SET_TEXT;

// ACTION Track Type
extern NSString* const MO_INAPP_ACTION_TRACK_TYPE_EVENT;
extern NSString* const MO_INAPP_ACTION_TRACK_TYPE_USER_ATTR;

// ACTION Navigation Type
extern NSString* const MO_INAPP_ACTION_NAV_RICH_LANDING;
extern NSString* const MO_INAPP_ACTION_NAV_DEEP_LANDING;
extern NSString* const MO_INAPP_ACTION_NAV_SCREEN;
extern NSString* const MO_INAPP_ACTION_NAV_EXTERNAL_BROWSER;

// ACTION User Input Type
extern NSString* const MO_INAPP_ACTION_USER_INPUT_RATING;
extern NSString* const MO_INAPP_ACTION_USER_INPUT_CUSTOM_RATING;
extern NSString* const MO_INAPP_STYLE_RATING_KEY_NUM_OF_RATINGS;
extern NSString* const MO_INAPP_STYLE_RATING_KEY_RATING_TYPE;

#pragma -mark Misc
extern NSString* const IN_APP_V2_LAST_SHOWN_INAPP;

//User Attribute
extern NSString* const MO_INAPP_TRACK_USER_LOCATION;
extern NSString* const MO_INAPP_TRACK_USER_TIME_STAMP;

//Exception
extern NSString* const MO_INAPP_EXCEPTION_MANDATORY_PARAM_MISSING;
extern NSString* const MO_INAPP_EXCEPTION_SIZE_EXCEEDED;
extern NSString* const MO_INAPP_EXCEPTION_IMAGE_DOWNLOAD;
extern NSString* const MO_INAPP_EXCEPTION_VIDEO_DOWNLOAD;
extern NSString* const MO_INAPP_EXCEPTION_FCID_MISSING_IN_META;
extern NSString* const MO_INAPP_EXCEPTION_HTML_ASSETS_DOWNLOAD_FAILURE;

// Date Formats
extern NSString* const kMODateFormatISO8601;
extern NSString* const kMODateFormatISO8601WithoutZ;
extern NSString* const kMODateFormatISO8601MilliSec;

//ConditionEvaluator Keys
extern NSString* const appVersion;
extern NSString* const sdkVersion;
extern NSString* const platform;
extern NSString* const platformiOS;
extern NSString* const eventAttributes;
