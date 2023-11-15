//
//  MoEngageInAppNudgePosition.h
//  MoEngage
//
//  Created by Chengappa C D on 01/11/21.
//  Copyright © 2021 MoEngage. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <MoEngageCore/MoEngageCore-Swift.h>

#ifndef MOInAppNativeProtocol_h
#define MOInAppNativeProtocol_h
#endif

@class MoEngageInAppCampaign;

NS_ASSUME_NONNULL_BEGIN

/// Completion Block for getting the Nudge InApp Campaign, which is used in case an inApp has to be embedded in your screen.
/// It gives nudge UIView instance and MoEngageInAppCampaign instance giving campaign info.
typedef void(^NudgeCreationCompletionBlock)(UIView * _Nullable nudgeView, MoEngageInAppCampaign* _Nullable campaignInfo, MoEngageAccountMeta* _Nullable accountMeta);

NS_ASSUME_NONNULL_END
