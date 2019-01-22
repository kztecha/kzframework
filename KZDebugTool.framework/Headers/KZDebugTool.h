//
//  KZDebugTool.h
//  KZDebugTool
//
//  Created by zhangshupeng.
//  Copyright © 2018 kz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface KZDebugTool : NSObject

@property (nonatomic, strong, class) KZDebugTool *defaultDebugTool;

+ (nonnull NSString *)name;

+ (nonnull NSString *)version;

+ (void)startDebugTool;

+ (void)close;

@end
