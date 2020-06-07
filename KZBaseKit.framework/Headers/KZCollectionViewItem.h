//
//  KZCollectionViewItem.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/10/13.
//  Copyright © 2019 kz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KZBaseCellItem.h"
NS_ASSUME_NONNULL_BEGIN

@protocol KZCollectionViewCellItemControllerProtocol <KZCellItemControllerProtocol>

- (CGSize)itemSize:(KZBaseCellItem *)item;
@end

@interface KZCollectionViewItem : KZBaseCellItem
@property (nonatomic, strong) id<KZCollectionViewCellItemControllerProtocol> controller;
@property (nonatomic, assign) CGSize size;
@end

NS_ASSUME_NONNULL_END
