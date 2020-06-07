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

#define KZAPP @"KZAPPNAME"

@interface KZBaseKit : NSObject

+ (nonnull NSString *)name;

+ (nonnull NSString *)version;
/*
 app bundleid
 */
+ (void)registerApp:(NSString *_Nullable)app;

+(void)checkApp;

@end
