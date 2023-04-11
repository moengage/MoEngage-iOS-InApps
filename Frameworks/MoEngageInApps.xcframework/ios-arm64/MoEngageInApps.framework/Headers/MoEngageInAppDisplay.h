//
//  MoEngageInAppDisplay.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 31/07/19.
//  Copyright © 2019 MoEngage. All rights reserved.
//

#import <MoEngageInApps/MoEngageModelObject.h>

NS_ASSUME_NONNULL_BEGIN

@interface MoEngageInAppDisplayRules : MoEngageModelObject <NSCoding>
@property(nonatomic, strong) NSString* showInScreen;
@property(nonatomic, strong) NSArray* contexts;
@end

@interface MoEngageInAppDisplay : MoEngageModelObject <NSCoding>
@property(nonatomic, strong) MoEngageInAppDisplayRules* rules;
@end

NS_ASSUME_NONNULL_END
