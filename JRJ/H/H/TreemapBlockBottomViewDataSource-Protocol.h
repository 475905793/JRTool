//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TreemapBlockBottomView, UIColor;

@protocol TreemapBlockBottomViewDataSource <NSObject>
- (NSString *)treemapBlockBottomViewGetTitle:(TreemapBlockBottomView *)arg1 withIndex:(int)arg2;
- (UIColor *)treemapBlockBottomViewGetCellColor:(TreemapBlockBottomView *)arg1 withIndex:(int)arg2;
- (int)treemapBlockBottomViewColorCellCount:(TreemapBlockBottomView *)arg1;

@optional
- (int)treemapBlockBottomViewShowType:(TreemapBlockBottomView *)arg1;
@end
