//
//  KZCollectionView.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/10/13.
//  Copyright © 2019 kz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZSectionDataModel.h"
#import "KZCollectionViewCell.h"
#import "KZCollectionViewItem.h"
@class KZCollectionView;
NS_ASSUME_NONNULL_BEGIN

@interface KZBaseCollectionViewModel : NSObject<UICollectionViewDelegate,UICollectionViewDataSource>
@property (nonatomic, strong) KZSectionDataModel *dataModel;
@property (nonatomic, weak, readonly)KZCollectionView *collectionView;
- (void)setCollectionView:(KZCollectionView *)collectionView;
- (NSString *)cellIdentifyAtIndexPath:(NSIndexPath *)indexPath;


- (void)collectionView:(KZCollectionView *)collectionView cell:(KZCollectionViewCell *)cell beforeLoadData:(KZCollectionViewItem *)data AtIndexPath:(NSIndexPath *)indexPath;
- (void)collectionView:(KZCollectionView *)collectionView cell:(KZCollectionViewCell *)cell didLoadData:(KZCollectionViewItem *)data AtIndexPath:(NSIndexPath *)indexPath;
@end

@interface KZCollectionView : UICollectionView

@property (nonatomic, strong, readonly) KZBaseCollectionViewModel *viewModel;
@property (nonatomic, copy) void(^currentIndex)(NSInteger index);
- (void)setViewModel:(KZBaseCollectionViewModel * _Nullable)viewModel;

- (void)registerNibs:(NSArray *)identifys;
- (void)registerClassArray:(NSArray *)identifys;
- (void)registerReusableViewNibs:(NSArray *)identifys kind:(NSString *)kind;
- (void)registerReusableViewClassArray:(NSArray *)identifys kind:(NSString *)kind;

@end




NS_ASSUME_NONNULL_END
