//
//  KZBaseKit.h
//  KZBaseKit
//
//  Created by zhangshupeng.
//  Copyright © 2018 kz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KZTableViewController.h"
#import "KZSwipeView.h"
#import "KZWaterFlowView.h"
#import "KZCollectionViewController.h"
#import "KZImageHandler.h"

@interface KZBaseKit : NSObject

@property (nonatomic, weak) id<KZImageProtocol>imageDownloadManager;

@property (nonatomic, strong, class) KZBaseKit *defaultManager;


+ (nonnull NSString *)name;

+ (nonnull NSString *)version;

@end
