//
//  MoEngageInAppDeliveryControl.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 30/07/19.
//  Copyright © 2019 MoEngage. All rights reserved.
//

#import <MoEngageInApps/MoEngageModelObject.h>

NS_ASSUME_NONNULL_BEGIN

@interface MoEngageInAppFCMeta : MoEngageModelObject <NSCoding>
@property(nonatomic, assign) BOOL ignoreGlobalDelay;
@property(nonatomic, assign) NSInteger max_count;
@property(nonatomic, assign) NSInteger min_delay;
@end


@interface MoEngageInAppDeliveryControl : MoEngageModelObject <NSCoding>
@property(nonatomic, assign) NSInteger priority;
@property(nonatomic, assign) BOOL isPersistent;
@property(nonatomic, strong) MoEngageInAppFCMeta* fcMeta;
@end

NS_ASSUME_NONNULL_END
