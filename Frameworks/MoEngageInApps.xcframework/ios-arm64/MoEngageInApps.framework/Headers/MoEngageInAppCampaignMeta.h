//
//  MoEngageInAppCampaignMeta.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <MoEngageInApps/MoEngageModelObject.h>
#import <MoEngageInApps/MoEngageInAppDisplay.h>
#import <MoEngageInApps/MoEngageInAppDeliveryControl.h>
#import <MoEngageInApps/MoEngageInAppTriggerCondition.h>
#import <MoEngageInApps/MoEngageInAppCommonUtils.h>

@interface MoEngageInAppCampaignMeta : MoEngageModelObject <NSCoding>
@property(nonatomic, strong) NSString* instance_id;
@property(nonatomic, strong) NSString* campaign_id;
@property(nonatomic, strong) NSString* formatted_campaign_id;
@property(nonatomic, strong) NSString* campaign_name;
@property(nonatomic, strong) NSString* campaign_type;
@property(nonatomic, assign) MoEngageInAppType inapp_type;
@property(nonatomic, assign) MoEngageInAppTemplateType template_type;
@property(nonatomic, assign) MoEngageInAppSDKCampaignType sdk_campaign_type;
@property(nonatomic, assign) MoEngageInAppOrientationType orientation_supported;

@property(nonatomic, strong) NSDate* updated_time;
@property(nonatomic, strong) NSDate* expiry_time;

@property(nonatomic, strong) NSArray<MoEngageInAppTriggerCondition*>* triggers;
@property(nonatomic, strong) MoEngageInAppDisplay* displayMeta;
@property(nonatomic, strong) MoEngageInAppDeliveryControl* deliveryControlMeta;

@property(strong, nonatomic) NSDictionary* campaign_context;

-(instancetype)initWithDictionary:(NSDictionary*)metaDict andInstanceID:(NSString*)instanceID;
-(BOOL)checkIfAttributeConditionSatisfiedForEvent:(NSString*)event andAttributes:(NSDictionary*)eventDict;
-(BOOL)isCampaignMetaValid;
@end
