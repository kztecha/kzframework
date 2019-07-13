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
- (NSArray *)sectionArray:(NSInteger)sec;
- (NSInteger)secCount ;
- (NSInteger)rowCountAtSection:(NSInteger)sec;
- (id)dataAtRow:(NSInteger)row ;
- (id)dataAtRow:(NSInteger)row atSection:(NSInteger)sec ;
- (void)removeDataAtRow:(NSInteger)row atSection:(NSInteger)sec;
- (void)removeDataAtRow:(NSInteger)row ;
- (void)removeAllDataAtSection:(NSInteger)sec;
- (void)addData:(id)data atSection:(NSInteger)sec;
- (void)addData:(id)data ;
- (void)addDatas:(NSArray*)datas atSection:(NSInteger)sec;
- (void)addDatas:(NSArray *)datas;
@end

NS_ASSUME_NONNULL_END
