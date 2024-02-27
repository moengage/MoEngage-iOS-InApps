//
//  MoEngageInAppWidgetStyle.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "MoEngageInAppConstants.h"

typedef enum{
    MOE_ANIMATION_FADE_IN,
    MOE_ANIMATION_FADE_OUT,
    MOE_ANIMATION_SLIDE_UP,
    MOE_ANIMATION_SLIDE_DOWN,
    MOE_ANIMATION_SLIDE_LEFT,
    MOE_ANIMATION_SLIDE_RIGHT,
    MOE_ANIMATION_NONE
}MOE_IN_APP_ANIMATION;

/// InApp widget initial display size
typedef NS_ENUM(NSInteger, MoEngageInAppDisplaySize)  {
    MoEngageInAppDisplaySizeMinimized,
    MoEngageInAppDisplaySizeFullscreen,
    MoEngageInAppDisplaySizeNone
};

typedef NS_ENUM(NSInteger, MoEngageInAppRatingType);
typedef NS_ENUM(NSInteger, MoEngageInAppViewVisibility);

// ========================================================= //

@interface MoEngageWidgetSize : NSObject
// Widget Height and Width
@property(nonatomic, assign) CGFloat  height;
@property(nonatomic, assign) CGFloat  width;

// Used in case of Image Widgets :: Image Resolution Height and width
@property(nonatomic, assign) CGFloat  real_height;
@property(nonatomic, assign) CGFloat  real_width;

@property(nonatomic, assign) CGFloat  minHeight;

-(instancetype)initWithDict:(NSDictionary*)infoDict andInstanceID:(NSString*)instanceID;
@end


// ========================================================= //


@interface MoEngageWidgetMargin : NSObject
@property(assign, nonatomic) CGFloat top;
@property(assign, nonatomic) CGFloat bottom;
@property(assign, nonatomic) CGFloat left;
@property(assign, nonatomic) CGFloat right;

-(instancetype)initWithDict:(NSDictionary*)infoDict andInstanceID:(NSString*)instanceID;
@end


@interface MoEngageWidgetPadding : NSObject
@property(assign, nonatomic) CGFloat top;
@property(assign, nonatomic) CGFloat bottom;
@property(assign, nonatomic) CGFloat left;
@property(assign, nonatomic) CGFloat right;

-(instancetype)initWithDict:(NSDictionary*)infoDict andInstanceID:(NSString*)instanceID;
@end

// ========================================================= //

@interface MoEngageWidgetBorder : NSObject
@property(nonatomic, strong) UIColor    *borderColor;
@property(nonatomic, assign) NSInteger   borderWidth;
@property(nonatomic, assign) NSInteger   cornerRadius;
-(instancetype)initWithDict:(NSDictionary*)infoDict andInstanceID:(NSString*)instanceID;
@end

// ========================================================= //

@interface MoEngageWidgetBackground : NSObject
@property(nonatomic, strong) UIColor    *backgroundColor;
@property(nonatomic, strong) NSString   *backgroundImage;
@property(nonatomic, assign) CGFloat     alpha;
@property(nonatomic, assign) BOOL        isLocalImage;
-(instancetype)initWithDict:(NSDictionary*)infoDict andInstanceID:(NSString*)instanceID;
@end

// ========================================================= //

@interface MoEngageWidgetFont : NSObject
@property(nonatomic, assign) float       fontSize;
@property(nonatomic, strong) NSString   *fontName;
@property(nonatomic, strong) UIColor    *textColor;

-(instancetype)initWithDict:(NSDictionary*)infoDict andSDKInstance:(MoEngageSDKInstance*)sdkInstance;
-(UIFont*)getUIFontOfInstance;
@end


// ========================================================= //

@interface MoEngageInAppAnimation : NSObject
@property(nonatomic, assign) MOE_IN_APP_ANIMATION entry_animation;
@property(nonatomic, assign) MOE_IN_APP_ANIMATION exit_animation;

-(instancetype)initWithDict:(NSDictionary*)infoDict andInstanceID:(NSString*)instanceID;
@end

// ========================================================= //


@interface MoEngageRatingWidgetStyle : NSObject
@property(nonatomic, assign) NSInteger numOfStars;
@property(nonatomic, assign) NSInteger numOfRatings;
@property(nonatomic, assign) BOOL isHalfStepAllowed;
@property(nonatomic, strong) UIColor* starColor;
@property(nonatomic, assign) MoEngageInAppRatingType ratingType;

-(instancetype)initWithDict:(NSDictionary*)infoDict andInstanceID:(NSString*)instanceID;
@end

@interface MoEngageInAppWidgetStyle : NSObject
@property(nonatomic, strong) MoEngageWidgetSize              *size;
@property(nonatomic, strong) MoEngageWidgetMargin            *margin;
@property(nonatomic, strong) MoEngageWidgetPadding           *padding;
@property(nonatomic, strong) MoEngageRatingWidgetStyle       *ratingStyle;
@property(nonatomic, strong) MoEngageWidgetBorder            *border;
@property(nonatomic, strong) MoEngageWidgetBackground        *background;
@property(nonatomic, strong) MoEngageWidgetFont              *font;
@property(nonatomic, strong) MoEngageInAppAnimation          *animation;
@property(nonatomic, assign) BOOL                      display;
@property(nonatomic, assign) BOOL                      includeSafeArea;
@property(nonatomic, strong) NSString                  *closeButtonFloat;
@property(nonatomic, assign) MoEngageInAppDisplaySize  displaySize;
@property(nonatomic, assign) MoEngageInAppViewVisibility visibility;

-(instancetype)initWithPayloadDict:(NSDictionary*)payloadDict andRef:(NSString*)ref andSDKInstance:(MoEngageSDKInstance*)sdkInstance;
@end
