//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTTopScrollView, NSIndexPath, NSString, StockBaseCell, StockCell, UITableView, UITableViewCell;

@protocol HTTopScrollViewDelegate <NSObject>

@optional
- (void)callBackHTTopScrollViewContentOffset:(struct CGPoint)arg1;
- (void)scrollToTopFinished;
- (void)topScrollViewTitleColumnClick:(HTTopScrollView *)arg1 withColumnIndex:(long long)arg2 withKey:(NSString *)arg3 withSortType:(long long)arg4;
- (long long)numberOfRowsInTableView:(HTTopScrollView *)arg1;
- (void)topScrollView:(HTTopScrollView *)arg1 didSelectTopScrollViewCell:(StockBaseCell *)arg2 atIndex:(NSIndexPath *)arg3;
- (void)topScrollViewLeftTableView:(UITableView *)arg1 topScrollViewCell:(UITableViewCell *)arg2 atIndex:(NSIndexPath *)arg3;
- (void)topScrollViewRightTableView:(UITableView *)arg1 topScrollViewCell:(StockCell *)arg2 atIndex:(NSIndexPath *)arg3;
@end
