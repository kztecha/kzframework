//
//  KZBaseCellItem.h
//  KZBaseKit
//
//  Created by zhangshupeng on 2019/10/13.
//  Copyright © 2019 kz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import <CoreGra>

NS_ASSUME_NONNULL_BEGIN
@class KZBaseCellItem;

extern NSString * const KZCellItemTitle;
extern NSString * const KZCellItemSubTitle;
extern NSString * const KZCellItemImage;
extern NSString * const KZCellItemAction;
extern NSString * const KZCellItemSubPage;
extern NSString * const KZCellItemController;
extern NSString * const KZCellItemCustomInfo;
extern NSString * const KZCellItemCellType;
extern NSString * const KZCellItemCellNavType;
extern NSString * const KZCellItemCellURL;
extern NSString * const KZCellItemCellVC;

@protocol KZCellItemControllerProtocol <NSObject>

///
- (NSArray <NSString *>*)cellClassName;
- (BOOL)cell:(KZBaseCellItem *)item didSelect:(NSIndexPath *)indexPath;
- (BOOL)item:(KZBaseCellItem *)item isPushRow:(NSIndexPath *)indexPath;
- (void)itemBeforeLoadData:(KZBaseCellItem *)item;
- (NSString *)item:(KZBaseCellItem *)item cellClassNameAtIndexPath:(NSIndexPath *)indexPath;
//it will call when cell first load. if need update, please set item.height = 0
- (CGFloat)itemHeight:(KZBaseCellItem *)item;
@end

@interface KZBaseCellItem : NSObject
/**/
//@property (nonatomic, assign) NSInteger layer;
/**/
@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) NSDictionary *customInfo;

@property (nonatomic, strong) NSDictionary *dictionary;

/**/
@property (nonatomic, assign) CGFloat height;

@property (nonatomic, strong) id<KZCellItemControllerProtocol> controller;
@property (nonatomic, weak) UIViewController *vc;
@property (nonatomic, weak) KZBaseCellItem *parentItem;

- (void)setSubPageItems:(NSArray *)subPageItems;
- (NSArray *)subPageItems;

- (KZBaseCellItem *)addSubItem:(id)item;
- (KZBaseCellItem *)subItem:(NSInteger)indexList;


+ (KZBaseCellItem *)newItem:(id)item;
+ (KZBaseCellItem *)newItem:(id)item subItem:(nullable KZBaseCellItem*(^)(id item))itemBlock;
/**
 
 
 @param itemList subitem type(string, dictionary)
 
 */
//+ (NSArray <KZBaseCellItem *>*)newCellItems:(NSArray *)itemList;
+ (NSArray <KZBaseCellItem *>*)newCellItems:(NSArray *)itemList item:(nullable void(^)(KZBaseCellItem *item))itemBlock;
@end

NS_ASSUME_NONNULL_END
