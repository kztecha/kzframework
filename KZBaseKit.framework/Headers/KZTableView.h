//
//  KZTableView.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/1/12.
//  Copyright © 2019年 kz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZSectionDataModel.h"
#import "KZTableViewCell.h"
//ss
NS_ASSUME_NONNULL_BEGIN

@class KZTableView;
@interface KZTableViewModel : NSObject<UITableViewDelegate,UITableViewDataSource,KZTableViewCellDelegate>
@property (nonatomic, strong) KZSectionDataModel *dataModel;
@property (nonatomic, weak, readonly) KZTableView *tableView;
- (void)setTableView:(KZTableView * _Nullable)tableView;
- (NSString *)cellIdentify:(NSIndexPath *)indexPath;

- (void)cell:(KZTableViewCell *)cell willLoadData:(id)data;

- (void)cell:(KZTableViewCell *)cell didLoadData:(id)data;
@end


@interface KZTableView : UITableView

@property (nonatomic, weak) id controller;
@property (nonatomic, strong, readonly) KZTableViewModel *viewModel;
- (void)setViewModel:(KZTableViewModel * _Nullable)viewModel;

- (void)registerNibs:(NSArray *)identifys;

- (void)registerClassArray:(NSArray *)identifys;
@end

NS_ASSUME_NONNULL_END
