//
//  MOInAppStatsTracking.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 06/11/19.
//  Copyright © 2019 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 InAppStatType
 */
typedef enum : NSUInteger{
    STAT_UNKNOWN,
    STAT_ATTEMPTED,
    STAT_PRIORITY_HIGH_PRIORITY_CAMPAIGN_AVAILABLE,
    STAT_PRIORITY_MAX_TIMES_SHOWN,
    STAT_PRIORITY_MIN_DELAY,
    STAT_PRIORITY_GLOBAL_DELAY,
    STAT_PRIORITY_SCREEN_MISMATCH,
    STAT_PRIORITY_CONTEXT_MISMATCH,
    STAT_PRIORITY_PERSISTENCE,
    STAT_PRIORITY_EXPIRED,
    STAT_PRIORITY_ORIENTATION_UNSUPPORTED,
    STAT_PRIORITY_INAPP_BLOCKED,
    STAT_PRIORITY_NUDGE_SCREEN_MAX_SHOW_LIMIT,
    STAT_PRIORITY_NUDGE_POSITION_UNAVAILABLE,
    STAT_DELIVERED_API_FAILURE,
    STAT_DELIVERED_PERSONALIZATION_FAILURE,
    STAT_DELIVERED_CAMPAIGN_PAUSED,
    STAT_DELIVERED_CAMPAIGN_EXPIRED,
    STAT_DELIVERED_MANDATORY_PARAMS_MISSING,
    STAT_IMPRESSION_ANOTHER_CAMPAIGN_VISIBLE,
    STAT_IMPRESSION_IMAGE_FETCH_FAIL,
    STAT_IMPRESSION_VIDEO_FETCH_FAIL,
    STAT_IMPRESSION_HTML_RESOURCE_FETCH_FAIL,
    STAT_IMPRESSION_HEIGHT_EXCEEDS_DEVICE,
    STAT_IMPRESSION_MAX_TIMES_SHOWN,
    STAT_IMPRESSION_MIN_DELAY,
    STAT_IMPRESSION_GLOBAL_DELAY,
    STAT_IMPRESSION_SCREEN_CHANGED,
    STAT_IMPRESSION_CONTEXT_CHANGED,
    STAT_IMPRESSION_CANCELLED_BEFORE_DELAY,
    STAT_IMPRESSION_PERSISTENCE,
    STAT_IMPRESSION_EXPIRED,
    STAT_IMPRESSION_ORIENTATION_UNSUPPORTED,
    STAT_IMPRESSION_INAPP_BLOCKED,
    STAT_IMPRESSION_NUDGE_SCREEN_MAX_SHOW_LIMIT,
    STAT_IMPRESSION_NUDGE_POSITION_UNAVAILABLE
}MoEngageInAppStatType;

/*
 MoEngageInAppStatInstance
 */
@interface MoEngageInAppStatInstance : NSObject <NSCoding>

@property(assign, nonatomic) MoEngageInAppStatType  stat_type;
@property(strong, nonatomic) NSArray        *timestamp_array;

- (instancetype)initWithStatType:(MoEngageInAppStatType)statType;
-(void)appendOccurenceTimestamp;
@end



/*
 MoEngageInAppCampaignStat
 */
@interface MoEngageInAppCampaignStat : NSObject <NSCoding>

@property(strong, nonatomic) NSString   *formatted_campaign_id;
@property(strong, nonatomic) NSArray    *campaign_stat_array;

- (instancetype)initWithFormattedCampaignID:(NSString*)campaignID;
-(void)trackStat:(MoEngageInAppStatType)statType;
@end



/*
 MoEngageInAppBatchData
 */
@interface MoEngageInAppBatchData : NSObject <NSCoding>
@property(strong, nonatomic) NSString   *batch_id;
@property(strong, nonatomic) NSArray    *batch_stat_array;

-(void)trackStat:(MoEngageInAppStatType)statType forFormattedCampaignID:(NSString*)fcid;
-(NSMutableDictionary*)getBatchPayload;
@end


/*
 MoEngageInAppStatData
 */
@interface MoEngageInAppStatData : NSObject <NSCoding>
@property(strong, nonatomic) NSArray  *batches_array;
-(MoEngageInAppBatchData*)initiateCurrentBatch;
@end






