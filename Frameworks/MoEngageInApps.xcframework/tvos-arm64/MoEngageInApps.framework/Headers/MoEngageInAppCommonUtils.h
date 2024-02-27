//
//  MoEngageInAppCommonUtils.h
//  MoEngage
//
//  Created by Rakshitha on 21/03/23.
//  Copyright © 2023 MoEngage. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/// Use this file to add utils that is used in Objective-C and in Swift
typedef enum : NSUInteger{
    TEMPLATE_FULL_SCREEN,
    TEMPLATE_POP_UP,
    TEMPLATE_SELF_HANDLED,
    TEMPLATE_NON_INTRUSIVE,
    TEMPLATE_UNKNOWN
}MoEngageInAppTemplateType;

typedef enum : NSUInteger{
    INAPP_NATIVE,
    INAPP_HTML,
    INAPP_INVALID
}MoEngageInAppType;

typedef enum : NSUInteger{
    SDK_INAPP_TYPE_GENERAL,
    SDK_INAPP_TYPE_TRIGGERED,
    SDK_INAPP_TYPE_NON_INTRUSIVE,
    SDK_INAPP_TYPE_SELF_HANDLED,
    SDK_INAPP_TYPE_UNKNOWN
}MoEngageInAppSDKCampaignType;

typedef enum : NSUInteger{
    INAPP_ORIENTATION_PORTRAIT,
    INAPP_ORIENTATION_LANDSCAPE,
    INAPP_ORIENTATION_BOTH,
    INAPP_ORIENTATION_INVALID
}MoEngageInAppOrientationType;

/// NudgePosition Enumerator to show Nudge InApp Campaigns at Top/Bottom position in a screen.
typedef enum{
    NudgePositionTop,
    NudgePositionBottom,
    NudgePositionBottomLeft,
    NudgePositionBottomRight,
    NudgePositionAny,
    NudgePositionNone
}MoEngageNudgePosition;


NS_ASSUME_NONNULL_BEGIN

@interface MoEngageInAppCommonUtils : NSObject
+(MoEngageInAppSDKCampaignType)getCampaignType:(MoEngageInAppTemplateType)templateType;
@end
NS_ASSUME_NONNULL_END
