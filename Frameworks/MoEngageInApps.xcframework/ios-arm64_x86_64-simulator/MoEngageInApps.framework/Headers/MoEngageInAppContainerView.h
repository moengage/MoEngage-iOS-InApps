//
//  MoEngageInAppContainerView.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/07/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MoEngageInAppViewPayload.h"
#import "MoEngageInAppCommonUtils.h"

@protocol MoEngageInAppWidgetResizingDelegate;
@protocol MoEngageInAppWidgetResizingCallbackListnerDelegate;
typedef NS_ENUM(NSUInteger, MoEngageNudgeDisplayPosition);

@interface MoEngageInAppContainerView : UIView

@property(nonatomic, strong) MoEngageInAppContainer   *containerModelObj;
@property(nonatomic, strong) NSString           *campaignID;
@property(nonatomic, assign) CGPoint            startPosition;
@property(nonatomic, assign) CGPoint            endPosition;
@property(nonatomic, assign) MoEngageInAppTemplateType  templateType;
@property(nonatomic, weak) id <MoEngageInAppWidgetResizingDelegate> resizeDelegate;

-(instancetype)initWithContainerInfo:(MoEngageInAppContainer*)container andCampaignID:(NSString*)campaignID;
-(void)updateContainerFrameinContainerView:(UIView*)view_container WithStartPos:(CGPoint)startPos andtemplateType:(MoEngageInAppTemplateType)templateType;
@end


@interface MoEngageInAppPrimaryContainerView : MoEngageInAppContainerView
@property(nonatomic, strong) MoEngageInAppViewPayload *inAppPayload;
@property(nonatomic, assign) BOOL isEmbeddedNudge;
@property(nonatomic, assign) MoEngageNudgeDisplayPosition nudgePosition;
@property(nonatomic, strong) NSHashTable<id <MoEngageInAppWidgetResizingCallbackListnerDelegate>>* resizeListners;

-(instancetype)initNativeContainerWithInAppPayload:(MoEngageInAppViewPayload*)payload;
-(instancetype)initHTMLContainerWithInAppPayload:(MoEngageInAppViewPayload*)payload;
-(void)addInAppViewToAppScreenWithCompletionBlock:(void(^)(BOOL inAppAdded))completionBlock;
-(void)removeInAppWithCompletionBlock:(void(^)(BOOL inAppDismissed))completionBlock;
@end
