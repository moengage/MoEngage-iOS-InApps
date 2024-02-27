//
//  MoEngageInAppController.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 20/10/21.
//  Copyright © 2021 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <MoEngageCore/MoEngageCore-Swift.h>
#import "MoEngageInAppViewPayload.h"
#import "MoEngageInAppDataManager.h"
#if !TARGET_OS_TV
#import "MoEngageInAppContainerView.h"
#endif
#import "MoEngageInAppStatsTracking.h"

#import "MoEngageInAppCommonUtils.h"

@protocol MoEngageInAppNativeDelegate;
@class MoEngageInAppSelfHandledCampaign;
@class MoEngageInAppDataManager;
@class MoEngageInAppPrimaryContainerView;
@class MoEngageInAppActionHandler;
@class MoEngageInAppConfigurationHandler;


@protocol MoEngageInAppNativeDelegate;
@class MoEngageInAppSelfHandledCampaign;
@class MoEngageInAppViewPayload;
@class MoEngageInAppPrimaryContainerView;
@class MoEngageAccountMeta;
@class MoEngageSDKInstance;
@class MoEngageInAppDataManager;
@class MoEngageSDKConfig;
@class MoEngageInAppCampaign;
@class MoEngageInAppCampaignMeta;
@class MoEngageInAppActionHandler;

NS_ASSUME_NONNULL_BEGIN

typedef void(^MOInAppTemplateRequestCompletionBlock)(MoEngageInAppViewPayload* _Nullable campaignPayload);
#if !TARGET_OS_TV
typedef void(^MOInAppViewCompletionBlock)(MoEngageInAppPrimaryContainerView* _Nullable inAppView, MoEngageInAppViewPayload* _Nullable campaignPayload);
#endif

typedef MoEngageNudgePosition(^nonIntrusiveInAppCompletion)(void);

@interface MoEngageInAppController : NSObject

@property(nonatomic, strong) MoEngageAccountMeta* accountMeta;
@property(nonatomic, strong) MoEngageSDKInstance* configController;
@property(nonatomic, strong) MoEngageInAppDataManager* inAppDataManager;
#if !TARGET_OS_TV
@property(nonatomic, strong) MoEngageInAppConfigurationHandler* configurationHandler;
#endif
/// Delegate to get the MoEngageInAppNativeDelegate Protocol callbacks.
@property(nonatomic, weak, nullable) id<MoEngageInAppNativeDelegate> inAppNativeDelegate;
@property(nonatomic, assign) BOOL inAppFetchApiInProgress;
@property(nonatomic, assign) BOOL inAppFetchedSuccessfully;
@property(nonatomic, strong, nullable) NSDate* inAppSyncTimeInSession;

@property(nonatomic, strong) NSMutableArray<nonIntrusiveInAppCompletion>* cachedNudgePosition;
#if !TARGET_OS_TV
@property(nonatomic, strong) NSHashTable<MoEngageInAppPrimaryContainerView*>* nudgeViewsArray;
#endif

-(instancetype)initWithSDKConfig:(MoEngageSDKConfig*)sdkConfig withSDKInstance:(nonnull MoEngageSDKInstance *)sdkInstance;
-(instancetype _Nonnull)init NS_UNAVAILABLE;
-(void)initializeInAppController;

-(void)applicationEnteredForeground;
-(void)applicationInActive;
-(void)updateModule;
-(void)userReset:(void (^)(void))completionHandler;
#if !TARGET_OS_TV
-(void)showInAppViaPushWithInfo:(NSDictionary*)pushInfo;
-(void)orientationChanged;
#endif
-(void)keyboardShowed;
-(void)keyboardHidden;
-(void)syncInAppStatsData:(void (^)(void))completionHandler;
-(void)removeInAppStorageData:(void (^)(void))completionHandler;
-(void)inAppSyncCompleted;

-(BOOL)shouldSyncInApps;
-(void)inAppSyncCompleted;
-(void)clearExpiredInAppImages;
-(NSDictionary*)getCurrentScreenAndContextInfoDict;

#pragma mark- InApp Delegate Handling

-(void)setInAppDelegate:(id<MoEngageInAppNativeDelegate> _Nullable)delegate;
-(void)resetInAppDelegate;

#pragma mark- Contexts Methods

-(void)setCurrentInAppContexts:(NSArray*)contexts;
-(NSArray<NSString*>*)getCurrentInAppContexts;
-(void)invalidateInAppContexts;

#pragma mark- Show In-App Pop

#if !TARGET_OS_TV
-(void)showInApp;
#endif
-(void)blockInAppInViewController:(UIViewController* _Nonnull)viewcontroller;

#pragma mark- Nudge Campaign
#if !TARGET_OS_TV
-(NSMutableArray<MoEngageInAppCampaignMeta *>*)getNudgeCampaignsForPosition:(MoEngageNudgePosition)nudgePosition;
-(void)removeNudgeCampaignsNotToBeProcessed:(NSMutableArray<MoEngageInAppCampaignMeta *>*)checkedCampaigns;
-(void)showNudgeAtPosition:(MoEngageNudgePosition)nudgePosition;
#endif

#pragma mark- SelfHandled Campaign
-(MoEngageInAppSelfHandledCampaign*)getSelfHandledInfoForInAppPayload:(MoEngageInAppViewPayload*)inAppPayload;
-(void)getSelfHandledInAppWithCompletionBlock:(void(^)(MoEngageInAppSelfHandledCampaign* _Nullable campaignInfo, MoEngageAccountMeta* _Nullable accountMeta)) completionBlock;
-(void)selfHandledShownWithCampaignInfo:(MoEngageInAppSelfHandledCampaign*)campaignInfo;
-(void)selfHandledClickedWithCampaignInfo:(MoEngageInAppSelfHandledCampaign*)campaignInfo;
-(void)selfHandledDismissedWithCampaignInfo:(MoEngageInAppSelfHandledCampaign*)campaignInfo;


#pragma mark- Disable InApps
-(void)disableInApps;

#pragma mark- Action Handler
#if !TARGET_OS_TV
-(MoEngageInAppActionHandler*)getActionHandler;
#endif

#pragma mark- Fetch InApp Method
-(void)fetchInAppWithCampaignMeta:(MoEngageInAppCampaignMeta*)campaignMeta forPreview:(BOOL)forPreviewFlow withTriggerInfo:(NSDictionary* _Nullable)triggerInfoDict withCompletionBlock:(MOInAppTemplateRequestCompletionBlock)completionBlock;

#pragma mark- InApp Creation Methods
#if !TARGET_OS_TV
-(void)createInAppWithTemplatePayload:(MoEngageInAppViewPayload*)templatePayload  withCompletionBlock:(void (^_Nullable)(void))completionBlock;
-(void)createNativeInAppViewWithTemplatePayload:(MoEngageInAppViewPayload*)templatePayload withCompletionBlock:(void (^_Nullable)(void))completionBlock;
-(void)createNativeInAppViewWithPayload:(MoEngageInAppViewPayload*)templatePayload andCompletionBlock:(MOInAppViewCompletionBlock)completionBlock;
-(void)attachNudgeView:(MoEngageInAppPrimaryContainerView*)nudgeView withPayload:(MoEngageInAppViewPayload*)payload;
#endif

-(void)eventTrackedWithEventName:(NSString *)event andAttributes:(NSDictionary<NSString *,id> *)attrDict;

#pragma mark- InApp Tracking Methods
-(void)trackInAppStat:(MoEngageInAppStatType)statType forCampaigns:(NSArray<MoEngageInAppCampaignMeta*>*)campaignsArray;
@end

NS_ASSUME_NONNULL_END
