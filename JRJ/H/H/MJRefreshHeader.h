//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshComponent.h"

@class NSDate, NSString;

@interface MJRefreshHeader : MJRefreshComponent
{
    NSString *_lastUpdatedTimeKey;
    double _ignoredScrollViewContentInsetTop;
    double _insetTDelta;
}

+ (id)headerWithRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
+ (id)headerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) double insetTDelta; // @synthesize insetTDelta=_insetTDelta;
@property(nonatomic) double ignoredScrollViewContentInsetTop; // @synthesize ignoredScrollViewContentInsetTop=_ignoredScrollViewContentInsetTop;
@property(copy, nonatomic) NSString *lastUpdatedTimeKey; // @synthesize lastUpdatedTimeKey=_lastUpdatedTimeKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastUpdatedTime;
- (void)endRefreshing;
- (void)drawRect:(struct CGRect)arg1;
- (void)setState:(long long)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

