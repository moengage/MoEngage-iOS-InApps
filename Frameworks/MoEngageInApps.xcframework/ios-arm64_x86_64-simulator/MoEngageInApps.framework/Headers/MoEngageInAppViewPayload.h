//
//  MoEngageInAppViewPayload.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MoEngageInAppConstants.h"
#import "MoEngageInAppContainer.h"
#import "MoEngageInAppCampaignMeta.h"

typedef NS_ENUM(NSUInteger, MoEngageNudgeDisplayPosition);

@interface MoEngageInAppViewPayload : NSObject
@property(strong, nonatomic) NSString* instance_id;
@property(strong, nonatomic) NSString* campaign_id;
@property(strong, nonatomic) NSString* formatted_campaign_id;
@property(strong, nonatomic) NSString* campaign_name;
@property(assign, nonatomic) MoEngageInAppTemplateType template_type;
@property(assign, nonatomic) MoEngageInAppType inapp_type;
@property(assign, nonatomic) MoEngageInAppOrientationType orientation_supported;
@property(assign, nonatomic) MoEngageNudgeDisplayPosition position;

@property(strong, nonatomic) NSString* customPayload;
@property(strong, nonatomic) NSString* primaryWidgetRef;
@property(strong, nonatomic) MoEngageInAppContainer* primary_container;
@property(strong, nonatomic) NSDictionary* image_links;
@property(strong, nonatomic) NSDictionary* campaign_context;
@property(assign, nonatomic) BOOL isDraft;
@property(strong, nonatomic) MoEngageInAppCampaignMeta* campaign_meta;
@property(strong, nonatomic) NSDictionary* payloadDict;
@property(assign, nonatomic) NSInteger dismissInterval;

@property(strong, nonatomic) NSDictionary* htmlAssetsDict;
@property(strong, nonatomic) NSDictionary* video_links;

-(instancetype)initWithDictionary:(NSDictionary *)payloadDict campaignMeta:(MoEngageInAppCampaignMeta*)campaign_meta andSDKInstance:(MoEngageSDKInstance*)sdkInstance;

@end
