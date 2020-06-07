//
//  KZCollectionViewCell.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/10/13.
//  Copyright © 2019 kz. All rights reserved.
//

#import <UIKit/UIKit.h>
@class KZCollectionViewCell;
NS_ASSUME_NONNULL_BEGIN


@protocol KZCollectionViewCellDelegate <NSObject>

/**
 处理cell的交互事件
 
 @param cell      tableviewcell
 @param clickInfo 传递的事件信息
 */
@optional
- (void)cell:(KZCollectionViewCell *)cell InteractionEvent:(id)clickInfo;

@end

@interface KZCollectionViewCell : UICollectionViewCell
/*
 用来暂时保存一些数据，需创建赋值
 */
@property(nonatomic, weak, readonly) id cellData;

/*
 用来迁出cell上的一些事件到控制器
 */
@property (nonatomic, weak) id<KZCollectionViewCellDelegate>delegate;

/** 当前cell的indexPath*/
@property (nonatomic,weak) NSIndexPath *indexPath;

///根据data展示UI
- (void)configData:(id)data;

//不刷新tableview，传入一些data来做对应的UI改变
- (void)reloadCell:(id)data;
@end

NS_ASSUME_NONNULL_END
