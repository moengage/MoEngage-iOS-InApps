//
//  MoEngageInAppContainer.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MoEngageInAppWidgetStyle.h"

@class MoEngageInAppWidget;

typedef enum MoEngageInAppAxisType: NSUInteger{
    Horizontal,
    Vertical,
    Neutral
}MoEngageInAppAxisType;

@interface MoEngageInAppContainer : NSObject
@property(nonatomic, strong) NSString *instance_id;
@property(nonatomic, assign) BOOL isPrimary;
@property(nonatomic, assign) MoEngageInAppAxisType axis;
@property(nonatomic, assign) NSInteger widgetID;
@property(nonatomic, strong) NSMutableArray<MoEngageInAppWidget *> *widgets;
@property(assign, nonatomic) MoEngageInAppWidgetType widgetType;
@property(nonatomic, strong) MoEngageInAppWidgetStyle *style;

-(instancetype)initWithPayloadDict:(NSDictionary*)payloadDict andRef:(NSString*)ref andSDKInstance:(MoEngageSDKInstance*)sdkInstance;
@end
