//
//  MOInAppWidget.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MoEngageInAppConstants.h"
#import "MoEngageInAppContainer.h"

@interface MoEngageInAppWidget : MoEngageInAppContainer
@property(nonatomic, strong) id content;
@property(nonatomic, strong) NSMutableArray *actions;

-(instancetype)initWithPayloadDict:(NSDictionary*)payloadDict andRef:(NSString*)ref andSDKInstance:(MoEngageSDKInstance*)sdkInstance;

+(NSMutableArray*)getWidgetActionsWithActionRefArray:(NSMutableArray*)actionRefArray withPayloadDict:(NSDictionary*)payloadDict;
+(InAppWidgetType)getWidgetTypeWithWidgetStr:(NSString*)widgetStr;
@end

