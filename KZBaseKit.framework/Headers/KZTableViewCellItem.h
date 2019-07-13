//
//  KZTableViewCellItem.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/4/20.
//  Copyright © 2019年 kz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
extern NSString * const KZTableViewCellItemTitle;
extern NSString * const KZTableViewCellItemSubTitle;
extern NSString * const KZTableViewCellItemImage;
extern NSString * const KZTableViewCellItemAction;
extern NSString * const KZTableViewCellItemSubPage;
extern NSString * const KZTableViewCellItemController;
extern NSString * const KZTableViewCellItemCustomInfo;
extern NSString * const KZTableViewCellItemCellType;

@class KZTableViewCellItem;
typedef BOOL(^KZTableViewCellItemActionBlock)(NSInteger index, NSInteger section, KZTableViewCellItem *item);


@protocol KZTableViewCellItemControllerProtocol <NSObject>

///
- (NSArray <NSString *>*)cellClassName;
- (BOOL)cell:(KZTableViewCellItem *)item didSelect:(NSIndexPath *)indexPath;
- (BOOL)item:(KZTableViewCellItem *)item isPushRow:(NSIndexPath *)indexPath;
- (void)itemBeforeLoadData:(KZTableViewCellItem *)item;
- (NSString *)item:(KZTableViewCellItem *)item cellClassNameAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface KZTableViewCellItem : NSObject
/**/
@property (nonatomic, assign) NSInteger layer;
/**/
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSArray *subPageItems;
@property (nonatomic, strong) NSDictionary *customInfo;
@property (nonatomic, assign) BOOL cellNotShowAllText;
/**/
@property (nonatomic, copy) KZTableViewCellItemActionBlock action;
@property (nonatomic, strong) id<KZTableViewCellItemControllerProtocol> controller;
@property (nonatomic, weak) UIViewController *vc;
@property (nonatomic, weak) KZTableViewCellItem *parentItem;

- (KZTableViewCellItem *)addSubItem:(id)item;
- (KZTableViewCellItem *)subItem:(NSInteger)indexList;

+ (instancetype)newCellItem:(nullable NSString *)title subTitle:(nullable NSString *)subtitle image:(nullable UIImage *)image;
+ (instancetype)newCellItem:(nullable NSString *)title subTitle:(nullable NSString *)subtitle image:(nullable UIImage *)image action:(nullable KZTableViewCellItemActionBlock)action subPages:(nullable NSArray *)subPageItems;

/**
 
 
 @param itemList subitem type(string, dictionary)
 
 */
+ (NSArray <KZTableViewCellItem *>*)newCellItems:(NSArray *)itemList;
+ (NSArray <KZTableViewCellItem *>*)newCellItems:(NSArray *)itemList item:(nullable void(^)(KZTableViewCellItem *item))itemBlock;
@end


@interface KZTableViewSectionCellItem : KZTableViewCellItem
- (KZTableViewSectionCellItem *)addSubItem:(id)item atSection:(NSInteger)section;
- (void)addSubItems:(NSArray *)items atSection:(NSInteger)section;
@end

NS_ASSUME_NONNULL_END
