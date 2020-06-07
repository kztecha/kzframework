//
//  KZSwipeView.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/10/13.
//  Copyright © 2019 kz. All rights reserved.
//

#import "KZCollectionView.h"
NS_ASSUME_NONNULL_BEGIN

@interface KZSwipeFlowLayout : UICollectionViewFlowLayout

@end

@interface KZSwipeView : KZCollectionView

@property (nonatomic, copy) NSArray *dataArray;

/** 注册Cell XibCollectionViewCell xib拖得必须包含xib*/
@property (nonatomic, copy) NSArray *cellClassName;



@property (nonatomic, copy) NSString *(^cellsClassName)(NSIndexPath *indexPath);


@property (nonatomic, copy) void(^ClickItem)(KZCollectionViewCell *cell,NSInteger index);

@property (nonatomic, copy) void(^cellInteraction)(KZCollectionViewCell *cell,id clickInfo);
@property (nonatomic, copy) void(^cellDidLoad)(KZCollectionView *collectionView,KZCollectionViewCell *cell,NSIndexPath *indexPath);
@property (nonatomic, copy) void(^cellBeforeLoad)(KZCollectionView *collectionView,KZCollectionViewCell *cell,NSIndexPath *indexPath);

@property (nonatomic, strong, readonly) UICollectionViewFlowLayout *layout;

@property (nonatomic, copy) CGSize(^itemSizeAtIndexPath)(NSIndexPath *indexPath);


@property (nonatomic, assign) BOOL useItemModel;

/** XibCollectionViewCell xib拖得必须包含xib
 *UICollectionElementKindSectionHeader
 *{kind:[],kind:[]}
 */
//@property (nonatomic, copy) NSDictionary *reusableViewClassName;
//@property (nonatomic, copy) NSString *(^reusableViewAtIndexPath)(NSIndexPath *indexPath,NSString *kind);
//@property (nonatomic, copy) CGSize(^reusableViewSizeAtSection)(NSInteger sec,NSString *kind);
//@property (nonatomic, copy) id(^reusableViewDataAtSection)(SPCollectionReusableView *view,NSInteger sec,NSString *kind);
@end


@interface  KZSwipeViewModel: KZBaseCollectionViewModel

@end

NS_ASSUME_NONNULL_END
