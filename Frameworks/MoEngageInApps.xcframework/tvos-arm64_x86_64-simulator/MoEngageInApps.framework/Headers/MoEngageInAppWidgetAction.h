//
//  MoEngageInAppWidgetAction.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MoEngageInAppConstants.h"
#import "MoEngageInAppUtils.h"


typedef enum{
    MOE_GENERAL,
    MOE_TIMESTAMP,
    MOE_LOCATION
} MoEngageUserAttributeType;

typedef enum{
    MOE_TRACK_ACTION_EVENT,
    MOE_TRACK_ACTION_USER_ATTRIBUTE,
    MOE_TRACK_ACTION_UNKNOWN
} MoEngageTrackActionType;

typedef enum{
    MOE_NAV_ACTION_RICH_LANDING,
    MOE_NAV_ACTION_DEEP_LINKING,
    MOE_NAV_ACTION_SCREEN,
    MOE_NAV_ACTION_EXTERNAL_BROWSER
} MoEngageNavActionType;

typedef enum{
    MOE_USER_INPUT_ACTION_RATING,
    MOE_USER_INPUT_ACTION_CUSTOM_RATING,
    MOE_USER_INPUT_ACTION_UNKNOWN
} MoEngageUserInputActionType;


@interface MoEngageInAppWidgetAction : NSObject
@property(nonatomic, assign) MoEngageWidgetActionType     actionType;

@property(nonatomic, strong) NSString*          name;
@property(nonatomic, strong) NSString*          message;
@property(nonatomic, strong) id                 value;
@property(nonatomic, strong) NSMutableDictionary*      dataDict;
-(instancetype)initWithPayloadDict:(NSDictionary*)payloadDict andActionDict:(NSDictionary*)actionDict;
-(instancetype) initWithPayloadDict:(NSDictionary *)payloadDict;
@end


@interface MoEngageInAppWidgetTrackAction : MoEngageInAppWidgetAction
@property(nonatomic, assign) MoEngageTrackActionType      trackActionType;
@property(nonatomic, assign) MoEngageUserAttributeType    userAttributeType;
-(instancetype) initWithPayloadDict:(NSDictionary *)payloadDict;
@end

@interface MoEngageInAppWidgetNavigationAction : MoEngageInAppWidgetAction
@property(nonatomic, assign) MoEngageNavActionType        navActionType;
-(instancetype) initWithPayloadDict:(NSDictionary *)payloadDict;
@end

@interface MoEngageInAppWidgetUserInputAction : MoEngageInAppWidgetAction
@property(nonatomic, assign) MoEngageUserInputActionType  userInputActionType;
@property(nonatomic, assign) NSInteger              widgetID;
@property(nonatomic, strong) NSMutableArray*        subActions;
@end


// Conditional Action
@interface MoEngageInAppActionCondition : NSObject
@property(nonatomic, strong) NSMutableArray*    actions;
@property(nonatomic, strong) NSDictionary*      attributesFilter;
@end

@interface MoEngageInAppWidgetConditionalAction : MoEngageInAppWidgetAction
@property(nonatomic, assign) NSInteger          widgetID;
@property(nonatomic, strong) NSMutableArray<MoEngageInAppActionCondition*>*    conditions;
@end

/// Action Set the text  for rating changes 
@interface MoEngageInAppWidgetSetTextAction : MoEngageInAppWidgetAction
@property(nonatomic, assign) NSInteger widgetID;
@end
