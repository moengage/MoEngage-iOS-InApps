//
//  MoEngageInAppDataManager.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 20/10/21.
//  Copyright © 2021 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MoEngageCore/MoEngageCore-Swift.h>
#import "MoEngageInAppCampaignsData.h"
#import "MoEngageInAppState.h"
#import "MoEngageInAppCampaignMeta.h"
#import "MoEngageInAppState.h"

NS_ASSUME_NONNULL_BEGIN

@class MoEngageInAppCampaign;

@interface MoEngageInAppDataManager : NSObject

@property(strong,nonatomic) MoEngageInAppCampaignsData* inAppsData;

/**
 Method to initialize data Manager
 */
-(instancetype)initWithSDKInstance:(MoEngageSDKInstance*)configController;
-(instancetype _Nonnull)init NS_UNAVAILABLE;
/**
 Method to save inApp data from fetch call in persistent storage

 @param campaignInfo response from the InApp Fetch API Call
 */
-(BOOL)saveInAppCampaigns:(NSDictionary*)campaignInfo;

/**
 Method to update impression in state instance of given InApp Campaign

 @param campaign MoEngageInAppCampaign instance of campaign
 */
-(void)updateImpressionForCampaign:(MoEngageInAppCampaign*)campaign;


/**
 Method to update if the primary widget was clicked, this is for persistent Check in the Rules

 @param campaignID MoEngageInAppCampaign instance of campaign
 */
-(void)updatePrimaryClickedForCampaignID:(NSString*)campaignID;

/**
 Method to update persistent storage of InApps
 */
-(void)updateInAppsInPersistentStorage;


/**
 Method to get the InApps global Delay duration in minutes

 @return InApps global delay
 */
-(NSNumber*)getInAppsGlobalDelay;

/**
 Method to get State instance of a given campaign

 @param campaign MoEngageInAppCampaign instance of the campaign
 @return State instance of MoEngageInAppState
 */
-(MoEngageInAppState*)getStateInstanceForCampaign:(MoEngageInAppCampaign*)campaign;

-(MoEngageInAppState*)getStateInstanceForCampaignID:(NSString*)campaignID;

/**
 Method to get date-time when last successful inApp fetch call was made

 @return NSDate instance when last successful inApp fetch call was made
 */
-(NSDate*)getInAppLastUpdatedTime;

/**
 Method to get List of active InApp Campaign IDs

 @return List of active InApp Campaign IDs
 */
-(NSMutableArray*)getActiveCampaignIDs;

/**
Method to get List of InApp Campaign IDs for which State instance is available

@return List of InApp Campaign IDs
*/
-(NSMutableArray*)getActiveStateCampaignIDs;

/**
 Method to get sort given campaign list by priority and last updated time.

 @param campaignsArray The campaign instances list to sort.
 @return The sorted campaigns.
 */
-(NSMutableArray*)sortCampaignByPriorityAndLastUpdated:(NSMutableArray*)campaignsArray;

#pragma mark- Trigger Campaign Methods
/**
 This method gives a list of events for which we have active InApp Campaigns
 @return Returns a list of events for which Trigger InApps are present
 */
-(NSArray*)getInAppsTriggerEvents;


/**
 This method is used to check if a given event has any active InApp trigger campaign available

 @param event Event Name
 @return true is for the given event Trigger campaign is present else it returns false
 */
-(BOOL)isTriggerCampaignAvailableForEvent:(NSString*)event;


/**
 Method to get the trigger campaigns for the provided tracked event wit attributes

 @param eventName Event Name tracked
 @param attrDict Event Attribute Dict tracked
 @return Array of InApp Campaigns for which the trigger condition is satisfied
 */
-(NSMutableArray*)getTriggerCampaignsForEvent:(NSString*)eventName withAttributes:(NSDictionary*)attrDict;

/**
 Method to reset inApps data on user logout
 */
-(void)resetInAppsData;

/**
 Method to print inApps data info in current state
 */
-(void)printInAppsDataInfo;

@end

NS_ASSUME_NONNULL_END
