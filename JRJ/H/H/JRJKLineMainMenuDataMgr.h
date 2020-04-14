//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface JRJKLineMainMenuDataMgr : NSObject
{
    NSMutableArray *showItems;
    NSMutableArray *showWithStockItems;
    NSMutableArray *allItemsWithOrder;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (_Bool)onlySaveItemList:(id)arg1 withVersion:(long long)arg2;
- (_Bool)saveItemList:(id)arg1 withVersion:(long long)arg2;
- (_Bool)saveItemList:(id)arg1;
- (id)readAllItemList;
- (id)genShowWithStockItems:(id)arg1 withIsIAP:(_Bool)arg2;
- (id)genShowItems:(id)arg1 withIsIAP:(_Bool)arg2;
- (void)initInfo;
- (id)getAllItemList;
- (id)getShowItemList:(_Bool)arg1;
- (id)readItemInfo;
- (id)readDefMenuItemInfo;

@end

