//
//  MoEngageInAppState.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 13/06/18.
//  Copyright © 2018 MoEngage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MoEngageInApps/MoEngageModelObject.h>

@interface MoEngageInAppState : MoEngageModelObject <NSCoding>
@property(nonatomic, strong) NSString*              campaign_id;
@property(nonatomic, strong) NSDate*                expiry_time;
@property(nonatomic, strong) NSDate*                last_shown_time;
@property(nonatomic, strong) NSDate*                del_time_based_on_last_sync;
@property(nonatomic, assign) NSInteger              number_of_times_shown;
@property(nonatomic, assign) BOOL                   primary_action_completed;
@end
