//
//  MoEngageInAppUtils.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 20/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MoEngageObjCUtils/MoEngageObjCUtils.h>
#import <MoEngageCore/MoEngageCore-Swift.h>
#import <MoEngageInApps/MoEngageInAppCommonUtils.h>

@class MoEngageInAppContainer;

typedef enum{
    MOE_WIDGET_ACTION_DISMISS,
    MOE_WIDGET_ACTION_TRACK_DATA,
    MOE_WIDGET_ACTION_NAVIGATE,
    MOE_WIDGET_ACTION_NAVIGATE_SETTINGS,
    MOE_WIDGET_ACTION_SHARE,
    MOE_WIDGET_ACTION_COPY_TEXT,
    MOE_WIDGET_ACTION_CALL,
    MOE_WIDGET_ACTION_SMS,
    MOE_WIDGET_ACTION_NOTIFICATION_PERMISSION,
    MOE_WIDGET_ACTION_CONDITIONAL,
    MOE_WIDGET_ACTION_USER_INPUT,
    MOE_WIDGET_ACTION_CUSTOM,
    MOE_WIDGET_ACTION_RATING_CHANGE,
    MOE_WIDGET_ACTION_SET_TEXT,
    MOE_WIDGET_ACTION_UNKNOWN
} MoEngageWidgetActionType;

NS_ASSUME_NONNULL_BEGIN

@interface MoEngageInAppUtils : NSObject

#if !TARGET_OS_TV
+(BOOL)checkIfCurrentOrientationIsSupported:(MoEngageInAppOrientationType)campaignOrientationType;
#endif

+(NSString*)getInAppsFolderPathForInstanceID:(NSString*)instanceID;

/**
 Method used while Parsing inApp Payload to get the Dictionary Keypath from the _ref<references> in the inApp Payload API Response

 @param refStr _ref key value having reference to the item in the payload
 @return Returns the KeyPath in Dictionary for reference String
 */
+(NSString*)getKeyPathFromRefString:(NSString*)refStr;

/**
 Method to get the UIColor instance from the hex Value of the Color code

 @param hexValue String giving the Color code in hexVal
 @return Returns UIColor instance of the given Color Code
 */
+(UIColor*)getColorFromHexValue:(NSString *)hexValue;

+(UIColor *)getColorFromRGBADict:(NSDictionary *)rgbaDict;

/**
 Method to convert values from percentage<Sent in the inApp Payload> to points<Actual values w.r.t the device dimentions> used for positioning the inApp Widgets and Containers

 @param percentVal Percentage value to be converted
 @param wrtVal maxVal w.r.t which the actual value needs to be calculated
 @return Actual values w.r.t the device dimentions
 */
+(CGFloat)getPointsForPercentValue:(float)percentVal wrtValue:(CGFloat)wrtVal;


+(UIViewController*)getRootViewController;
+(UIViewController*)getTopMostViewController;
+(NSString*)getTopViewControllerName;
+(CGSize)getDeviceScreenSize;


#if !TARGET_OS_TV
+(CGRect)getFrameWithWidgetObj:(MoEngageInAppContainer*)widgetObj inContainer:(UIView*)container withStartPosition:(CGPoint)startPosition;
+(CGPoint)setEndPositionForWidget:(MoEngageInAppContainer*)widgetObj withframe:(CGRect)widgetFrame;
+(CGFloat)getHeightForText:(NSString *)text havingWidth:(CGFloat)widthValue andFont:(UIFont *)font;
+(CGFloat)getOptmisedImageHeightFromImage:(UIImage *)imageFromServer forWidth:(float)width;
#endif
+(BOOL)doesDeviceHaveNotch API_AVAILABLE(ios(11.0));
+(MoEngageInAppTemplateType)getTemplateTypeForTemplateStr:(NSString*)templateStr;
+(MoEngageInAppType)getInAppType:(NSString*)inAppTypeStr;
+(MoEngageInAppOrientationType)getSupportedOrientationType:(NSArray*)supportedOrientation;
+(MoEngageWidgetActionType)getActionTypeForStrVal:(NSString*)strVal;

#if !TARGET_OS_TV
+(id)getValueFromWidget:(UIView*)view;
+(UIView*)getWidgetForID:(NSInteger)widgetID fromView:(UIView*)superView;
+(void)openShareSheetWithContentToShare:(NSString*)contentToShare;
#endif
+(void)raiseMandatoryParamsMissingException;
+(void)raiseInAppSizeExceededException;
+(void)raiseInAppImageDownloadFailureException;
+(void)raiseInAppVideoDownloadFailureException;
+(void)raiseInAppHTMLResourceDownloadFailureException;
+(void)raiseExceptionForError:(NSError*)error;
+(void)raiseFCIDMissingInMetaException;
+(BOOL)dateSameAs:(NSDate*)date1 date2:(NSDate*)date2;
+(BOOL)dateLater:(NSDate*)date1 date2:(NSDate*)date2;
+(BOOL)dateEarlier:(NSDate*)date1 date2:(NSDate*)date2;
+(BOOL)isDateLaterToCurrentTime: (NSDate*)date;

//Returns current inapp version
+(NSString *)getInAppVersion;

+(id _Nullable)validObjectForKey: (id _Nullable)key dict:(NSDictionary*_Nullable)dict;
+(id _Nullable)validObjectForKeyPath:(id _Nullable)keyPath  dict:(NSDictionary*_Nullable)dict;
+(BOOL)getBooleanForKey:(NSString *_Nullable)key  dict:(NSDictionary*_Nullable)dict;
+(NSMutableDictionary*_Nullable)validDictionaryFromKey:(NSString *_Nullable)key  dict:(NSDictionary*_Nullable)dict;

@end
NS_ASSUME_NONNULL_END
