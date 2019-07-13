//
//  KZProtocolService.h
//  KZProtocolService
//
//  Created by yimo on 2/11/17.
//  Copyright © 2018 kz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KZLogProtocol.h"
#import "KZBaseRequestMessage.h"
#define KZLogDebug(_log_,_tag_) [KZProtocolService.defaultService.logger log:_log_ level:KZLoglevelDebug tag:_tag_]

#define KZLogInfo(_log_,_tag_) [KZProtocolService.defaultService.logger log:log level:KZLoglevelInfo tag:_tag_]
#define KZMainQueue dispatch_get_main_queue()
#define KZGlobalQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)

@interface KZProtocolService : NSObject

@property (nonatomic, strong) id<KZLogProtocol> logger;

@property (nonatomic, strong) id<KZUNZipProtocol> zipAdaptor;

@property (nonatomic, strong) id<KZHttpServerProtocol> httpServerAdaptor;

@property (nonatomic, strong) id netClient;

@property (class) KZProtocolService *defaultService;

+ (nonnull NSString *)name;

+ (nonnull NSString *)version;

void IAPPluginThreadMainCall(dispatch_block_t block);
void KZThreadGlobalCall(dispatch_block_t block);
@end



