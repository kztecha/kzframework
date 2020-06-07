//
//  KZCollectionViewController.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/10/13.
//  Copyright © 2019 kz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZCollectionView.h"
#import "KZCollectionViewLayout.h"
NS_ASSUME_NONNULL_BEGIN


@interface KZCollectionViewControllerModel : KZBaseCollectionViewModel<KZCollectionViewLayoutDelegate>
- (CGSize)collectionViewitemSize;
@end

@interface KZCollectionViewController : UIViewController

@property (nonatomic, strong) KZCollectionView *collectionView;

- (UICollectionViewLayout *)layout:(KZCollectionViewControllerModel *)model;
@end

@interface KZWaterFlowCollectionViewController : KZCollectionViewController

- (KZCollectionViewLayout *)layout:(KZCollectionViewControllerModel *)model;
@end



NS_ASSUME_NONNULL_END
