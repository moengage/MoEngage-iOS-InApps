//
//  MoEngageInAppContainer.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MoEngageInAppWidgetStyle.h"

typedef enum NSUInteger{
    Horizontal,
    Vertical,
    Neutral
}AxisType;

typedef enum{
    WIDGET_CONTAINER,
    WIDGET_LABEL,
    WIDGET_BUTTON,
    WIDGET_IMAGE,
    WIDGET_RATING,
    WIDGET_CLOSE_BUTTON,
    WIDGET_VIDEO,
    WIDGET_FEEDBACK_TEXT,
    WIDGET_CUSTOM_RATING,
    WIDGET_UNKNOWN
}InAppWidgetType;

@class MoEngageInAppWidget;

@interface MoEngageInAppContainer : NSObject
@property(nonatomic, strong) NSString *instance_id;
@property(nonatomic, assign) BOOL isPrimary;
@property(nonatomic, assign) AxisType axis;
@property(nonatomic, assign) NSInteger widgetID;
@property(nonatomic, strong) NSMutableArray<MoEngageInAppWidget *> *widgets;
@property(assign, nonatomic) InAppWidgetType widgetType;
@property(nonatomic, strong) MoEngageInAppWidgetStyle *style;

-(instancetype)initWithPayloadDict:(NSDictionary*)payloadDict andRef:(NSString*)ref andSDKInstance:(MoEngageSDKInstance*)sdkInstance;
@end
