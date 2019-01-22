//
//  KZSectionDataModel.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/1/12.
//  Copyright © 2019年 kz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KZSectionDataModel : NSObject
/**
 添加在0区
 */
- (void)addData:(id)data;
/**
 添加数据data在section区
 */
- (void)addData:(id)data atSection:(NSInteger)sec;

/**
 添加一组数据datas在section区
 
 @param datas 数据
 @param sec 区
 */
- (void)addDataArray:(NSArray *)datas atSection:(NSInteger)sec;
/** 移除所有数据*/
- (void)removeAllData;

- (void)removeDataAtIndex:(NSInteger)index;

- (void)removeDataAtIndex:(NSInteger)index section:(NSInteger)sec;

- (void)removeSectionAllElements:(NSInteger)sec;

- (void)removeSection:(NSInteger)sec;

- (NSDictionary *)allDataDic;
@end

NS_ASSUME_NONNULL_END
