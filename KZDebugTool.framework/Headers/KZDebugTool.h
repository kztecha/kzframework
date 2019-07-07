//
//  KZDebugTool.h
//  KZDebugTool
//
//  Created by zhangshupeng.
//  Copyright © 2018 kz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <KZBaseKit/KZTableViewCellItem.h>
@interface KZDebugTool : NSObject

@property (nonatomic, strong, class) KZDebugTool *defaultDebugTool;

+ (nonnull NSString *)name;

+ (nonnull NSString *)version;

+ (void)startDebugTool;

+ (void)close;

//+ (void)startFlipper:(NSArray <NSString *>*)pluginConfigList;
- (void)addMenu:(nullable id)menu;
@end
