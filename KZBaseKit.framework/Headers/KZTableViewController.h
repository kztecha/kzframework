//
//  KZTableViewController.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/1/12.
//  Copyright © 2019年 kz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZTableView.h"
#import "KZTableViewCellItem.h"
NS_ASSUME_NONNULL_BEGIN

@interface KZTableViewController : UIViewController

@property (nonatomic, strong) KZTableView *tableView;

@end

@interface KZAutoTableViewController : KZTableViewController
    

@property (nonatomic, strong) KZTableViewCellItem *item;

@end

@interface KZAutoTableViewModel : KZTableViewModel

@end
NS_ASSUME_NONNULL_END
