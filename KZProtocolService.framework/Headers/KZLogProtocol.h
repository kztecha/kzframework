//
//  KZLogProtocol.h
//  KZProtocolService
//
//  Created by zhangshupeng on 2019/1/26.
//  Copyright © 2019年 Alipay. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "KZBaseRequestMessage.h"
#ifndef KZLogProtocol_h
#define KZLogProtocol_h

typedef enum : NSUInteger {
    KZLoglevelDebug,
    KZLoglevelInfo,
} KZLoglevel;

@protocol KZLogProtocol <NSObject>

- (void)log:(NSString *)log level:(KZLoglevel)level tag:(NSString *)tag;



@end

@protocol KZUNZipProtocol <NSObject>

- (BOOL)unzipFileAtPath:(NSString *)path toDestination:(NSString *)destination;

@end

@protocol KZHttpRequestProtocol <NSObject>

- (void)request:(KZBaseRequestMessage *)request response:(SPHttpResponseBlock)response;

@end

@protocol KZHttpServerProtocol <NSObject>

- (NSDictionary *)allAPI;

@end

#endif /* KZLogProtocol_h */
