//
//  MoEngageInAppCampaignsData.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 20/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MoEngageInAppCampaignsData : NSObject<NSCoding>
@property NSArray   *generalInApps;
@property NSArray   *triggerInApps;
@property NSArray   *embeddedInApps;
@property NSArray   *selfHandledInApps;

@property NSArray   *triggerEvents;
@property NSArray   *inAppStateData;
@property NSNumber  *globalDelay;
@property NSNumber  *syncDelay;
@property NSDate    *inAppLastUpdatedTime;
@property NSDate    *inAppLastShownTime;
@end

