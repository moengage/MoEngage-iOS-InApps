//
//  MoEngageInAppAssetsManager.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/07/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MoEngageInAppUtils.h"

NS_ASSUME_NONNULL_BEGIN

@interface MoEngageInAppAssetsManager : NSObject

+(instancetype)sharedAssetsManager;
-(instancetype _Nonnull)init NS_UNAVAILABLE;

-(void)downloadAssets:(NSDictionary*)resourceLinks withInAppType:(MoEngageInAppType)inAppType forCampaignID:(NSString*)cid forSDKInstance:(MoEngageSDKInstance*)sdkInstance andCompletionBlock:(void(^)(BOOL imagesDownloaded))completionBlock;

-(NSString*)getImageFilePathForURL:(NSURL*)imgURL forInstanceID:(NSString*)instanceID andCampaignID:(NSString*)cid;
-(NSString* _Nullable)getImageFilePathForURL:(NSURL*)imgURL withName:(NSString*)imgName forInstanceID:(NSString*)instanceID andCampaignID:(NSString*)cid;
-(NSString*)getInAppImageFolderPathForCampaignID:(NSString*)campaignID forInstanceID:(NSString*)instanceID;
-(BOOL)isImageGifWithURL:(NSURL*)imgURL;

-(void)removeInAppImagesForCID:(NSString*)campaignID forInstanceID:(NSString*)instanceID;
-(void)removeInAppImagesForInstanceID:(NSString*)instanceID;
-(void)removeInAppHTMLResourceForCampaignID:(NSString* _Nullable)campaignID forInstanceID:(NSString*)instanceID;
-(void)removeInAppHTMLResourcesForInstanceID:(NSString*)instanceID;

-(NSString*)getInAppHTMLResourceFolderPathForCampaignID:(NSString*)campaignID forInstanceID:(NSString*)instanceID;
-(void)clearExpiredInAppImagesForInstanceID:(NSString*)instanceID withActiveCampaignArray:(NSArray*)activeCampaignIDs;

@end

NS_ASSUME_NONNULL_END
