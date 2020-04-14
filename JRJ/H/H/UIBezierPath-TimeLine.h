//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBezierPath.h>

@interface UIBezierPath (TimeLine)
- (void)drawFiveDayTimeline:(struct CGSize)arg1 dataSource:(id)arg2;
- (void)drawFundNetLines:(id)arg1 maxValue:(double)arg2 minValue:(double)arg3 leftMargin:(double)arg4 topMargin:(double)arg5 lineWidth:(double)arg6 chartHeight:(double)arg7 index:(long long)arg8;
- (void)drawL2AvgPriceLine:(struct CGSize)arg1 dataSource:(id)arg2;
- (void)drawTranstionDayTimeLine:(struct CGRect)arg1 dataSource:(id)arg2;
- (void)drawTranstionDayTimeLine:(struct CGRect)arg1 dataSource:(id)arg2 withLineColor:(id)arg3 withFillColor:(id)arg4;
- (void)drawDayTimeLine:(struct CGSize)arg1 dataSource:(id)arg2;
- (void)drawDayTimeLineAuctionBack:(struct CGSize)arg1 dataSource:(id)arg2;
- (struct CGPoint)lastPoint:(id)arg1 gridSize:(struct CGSize)arg2 maxPrice:(double)arg3;
- (double)pixelXForTranstionPerPrice:(int)arg1 gridLeft:(double)arg2 gridWidth:(double)arg3 dataSource:(id)arg4;
- (double)pixelXForPerPrice:(int)arg1 gridWidth:(double)arg2 dataSource:(id)arg3;
- (double)pixelYForPerPrice:(double)arg1 maxPrice:(double)arg2 gridTop:(double)arg3 gridHeight:(double)arg4 dataSource:(id)arg5;
@end
