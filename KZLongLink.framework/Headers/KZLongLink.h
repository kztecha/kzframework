//
//  KZLongLink.h
//  KZLongLink
//
//  Created by zhangshupeng.
//  Copyright © 2018 kz. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const HTTPServerConfigPort;
extern NSString * const HTTPServerConfigWebPath;
extern NSString * const HTTPServerConfigWebResourcePath;
@class HTTPConnection,HTTPMessage;

typedef NSData*(^KZHttpServerAPIBlock)(HTTPConnection *conn,HTTPMessage *request,NSString *method,NSDictionary *params);

@protocol KZHttpServerAPIProtocol <NSObject>

- (NSData *)connection:(HTTPConnection *)connection request:(HTTPMessage *)request;

@end

@interface KZLongLink : NSObject

@property (class) KZLongLink *defaultLink;

+ (nonnull NSString *)name;

+ (nonnull NSString *)version;

/*
 if ([path isEqualToString:@"/"] || [path hasPrefix:@"/static"]) {
     path = [@"/Documents/sssss" stringByAppendingPathComponent:path];
 }
 */
@property (nonatomic, copy) NSString*(^webResourcePathBlock)(NSString *path);

/// webPath是server搜寻HTML等文件的路径
- (void)startServer:(NSDictionary *)config complete:(void(^)(void))completeBlock;
- (NSDictionary *)connectServerInfo;
- (void)stop;
- (BOOL)isOpen;

- (void)addAPI:(NSString *)path action:(KZHttpServerAPIBlock)block;
- (NSArray *)allAPIName;
- (KZHttpServerAPIBlock)api:(NSString *)path;

@end
