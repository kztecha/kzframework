//
//  KZCollectionViewLayout.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/10/13.
//  Copyright © 2019 kz. All rights reserved.
//

#import <UIKit/UIKit.h>


@class KZCollectionViewLayout;
@protocol KZCollectionViewLayoutDelegate <NSObject>

@optional
-(CGFloat)waterFlow:(nonnull KZCollectionViewLayout *)waterFlow heightForWidth:(CGFloat)width atIndexPath:(nonnull NSIndexPath *)indexPath;

@end

NS_ASSUME_NONNULL_BEGIN

@interface KZCollectionViewLayout : UICollectionViewLayout
@property(nonatomic,assign)UIEdgeInsets sectionInset;/** 每一组的间距*/
@property(nonatomic,assign)CGFloat rowMagrin;/** 每一行的间距*/
@property(nonatomic,assign)CGFloat colMagrin;/** 每一列的间距*/
@property(nonatomic,assign)CGFloat colCount;/** 有多少列*/
@property(nonatomic,weak)id<KZCollectionViewLayoutDelegate>degelate;/** 每一组的间距*/
/////////-----------------------------------------不要设置
@property(nonatomic,retain)NSMutableDictionary * maxYdic;
@end

NS_ASSUME_NONNULL_END
