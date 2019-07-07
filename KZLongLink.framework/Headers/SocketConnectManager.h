//
//  SocketConnectManager.h
//  SOCKET
//
//  Created by zhangshupeng on 16/8/9.
//  Copyright © 2016年 iMac. All rights reserved.
//

#import <Foundation/Foundation.h>

static const NSString *SocketConnectMessageTypeKey = @"SocketConnectMessageType";
static const NSString *SocketConnectMessageTypeData = @"SocketConnectMessageData";

typedef enum {
    SocketConnectTypeMessage,
    SocketConnectTypeUnConnect,
    SocketConnectTypeConnectSuccess,
}SocketConnectType;

typedef enum : Byte {
    SocketConnectMessageTypeString = 0,
    SocketConnectMessageTypeJson,
    SocketConnectMessageTypeImage ,
    SocketConnectMessageTypeVideo,
    SocketConnectMessageTypeAudio,
} SocketConnectMessageType;

@protocol SocketConnectManagerDelegate <NSObject>

- (void)socketMessage:(NSDictionary *)message withType:(SocketConnectType)type;

@end






@interface SocketConnectManager : NSObject

@property (nonatomic, assign) NSInteger tag;

@property (nonatomic, assign) BOOL shouldAutoConnect;

@property (nonatomic, weak) id<SocketConnectManagerDelegate>delegate;

@property (nonatomic, assign, readonly) NSUInteger sendDataCount;
@property (nonatomic, assign, readonly) NSUInteger receiveDataCount;

- (void)sendJsonMessage:(id)message;
- (void)sendStringMessage:(NSString *)message;
- (void)sendMessage:(id)message type:(SocketConnectMessageType)type;

- (void)connectToHost:(NSString *)host onPort:(uint16_t)port;

- (void)close;

- (void)acceptSocket;

//- (void)findSever;

+ (NSString *)localWifi;

+ (instancetype)newInstance;

@end

@interface SocketConnectManager (Data)

- (NSData *)sendData:(NSData *)data dataType:(SocketConnectMessageType)type;
- (void)dataLength:(NSUInteger)dataLength length:(Byte *)bytes length:(Byte)length;
- (NSUInteger) bytes2int:(NSData *)data length:(Byte)length;



- (id)parseData:(NSData *)data;

@end

/**
 *  介绍  *（分包待加入）
 数据格式采用  length - type - (package)data
 length 设为2个字节 最大传输 64k 
 type 一个字节  最大包含256种数据类型
 package 包标志位（放在数据体里，一个字节长度。）
 data 数据
 传输数据分包处理，当长度过大时，分成小包传输，定为超过2k分解
 */
