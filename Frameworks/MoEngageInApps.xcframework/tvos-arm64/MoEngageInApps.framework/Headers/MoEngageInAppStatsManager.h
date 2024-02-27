//
//  MoEngageInAppStatsManager.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 08/11/19.
//  Copyright © 2019 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MoEngageInAppStatsTracking.h"

NS_ASSUME_NONNULL_BEGIN

@class MoEngageSDKConfig;
@class MoEngageSDKInstance;

@interface MoEngageInAppStatsManager : NSObject

@property(strong, nonatomic) MoEngageSDKInstance* sdkInstance;

/**
 Method to initialize Stats Manager
 */
-(instancetype)initWithSDKConfig:(MoEngageSDKConfig*)sdkConfig withSDKInstance:(MoEngageSDKInstance*)configController;
-(instancetype _Nonnull)init NS_UNAVAILABLE;

-(void)trackStat:(MoEngageInAppStatType)statType forFormattedCampaignID:(NSString*)fcid;
-(void)applicationInActive;
-(void)clearStatsData:(void (^)(void))completionHandler;

@end

NS_ASSUME_NONNULL_END
