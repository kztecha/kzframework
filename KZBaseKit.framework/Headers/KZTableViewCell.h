//
//  KZTableViewCell.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/1/12.
//  Copyright © 2019年 kz. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class KZTableViewCell;

@protocol KZTableViewCellDelegate <NSObject>

/**
 处理cell的交互事件
 
 @param cell      tableviewcell
 @param clickInfo 传递的事件信息
 */
@optional
- (void)cell:(KZTableViewCell *)cell InteractionEvent:(id)clickInfo;

@end



@interface KZTableViewCell : UITableViewCell
/*
 用来暂时保存一些数据，需创建赋值
 */
@property(nonatomic, weak, readonly) id cellData;

/*
 用来迁出cell上的一些事件到控制器
 */
@property (nonatomic, weak) id<KZTableViewCellDelegate>delegate;

/** 当前cell的indexPath*/
@property (nonatomic,strong) NSIndexPath *indexPath;

///根据data展示UI
- (void)configData:(id)data;

//不刷新tableview，传入一些data来做对应的UI改变
- (void)reloadCell:(id)data;
@end

NS_ASSUME_NONNULL_END
