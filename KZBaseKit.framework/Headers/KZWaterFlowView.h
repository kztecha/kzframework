//
//  KZWaterFlowView.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/10/13.
//  Copyright © 2019 kz. All rights reserved.
//

#import "KZSwipeView.h"
#import "KZCollectionViewLayout.h"
NS_ASSUME_NONNULL_BEGIN

@interface KZWaterFlowView : KZSwipeView<KZCollectionViewLayoutDelegate>
@property (nonatomic, strong, readonly) KZCollectionViewLayout *waterFallLayout;
@property (nonatomic, copy) CGFloat(^itemHeightAtIndexPath)(NSIndexPath *indexPath);

@end

NS_ASSUME_NONNULL_END
