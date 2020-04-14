//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBezierPath.h>

@interface UIBezierPath (StockLines)
+ (void)pathWithLineLargeItem:(id)arg1 leftMargin:(double)arg2 lineGap:(double)arg3 maxValue:(double)arg4 minValue:(double)arg5 chartHeight:(double)arg6 drawTop:(double)arg7 lineColor:(id)arg8;
+ (void)pathWithLineTrendingItem:(id)arg1 leftMargin:(double)arg2 lineGap:(double)arg3 maxValue:(double)arg4 minValue:(double)arg5 chartHeight:(double)arg6 drawTop:(double)arg7 lineColor:(id)arg8;
+ (id)pathWithLineLargeItem:(id)arg1 leftMargin:(double)arg2 lineGap:(double)arg3 maxValue:(double)arg4 minValue:(double)arg5 lastCompareValue:(double)arg6 chartHeight:(double)arg7 drawTop:(double)arg8 lineColor:(id)arg9;
+ (id)pathWithLineTrendingItem:(id)arg1 leftMargin:(double)arg2 lineGap:(double)arg3 maxValue:(double)arg4 minValue:(double)arg5 lastCompareValue:(double)arg6 chartHeight:(double)arg7 drawTop:(double)arg8 lineColor:(id)arg9;
+ (id)pathWithBarItem:(id)arg1 lineWidth:(double)arg2 chartHeight:(double)arg3 drawTop:(double)arg4 leftMargin:(double)arg5 maxValue:(double)arg6 minValue:(double)arg7 color:(id)arg8;
+ (id)LargeVolumeModel:(id)arg1 leftMargin:(double)arg2 lineWidth:(double)arg3 chartHeight:(double)arg4 drawTop:(double)arg5 maxValue:(double)arg6 minValue:(double)arg7;
+ (id)MACDModel:(id)arg1 leftMargin:(double)arg2 lineWidth:(double)arg3 chartHeight:(double)arg4 drawTop:(double)arg5 maxValue:(double)arg6 minValue:(double)arg7;
+ (id)SARLineModel:(id)arg1 lineWidth:(double)arg2 maxValue:(double)arg3 minValue:(double)arg4 leftMargin:(double)arg5 topMargin:(double)arg6 chartHeight:(double)arg7 index:(long long)arg8;
+ (id)AmericanLineModel:(id)arg1 lineWidth:(double)arg2 maxValue:(double)arg3 minValue:(double)arg4 leftMargin:(double)arg5 topMargin:(double)arg6 chartHeight:(double)arg7 index:(long long)arg8;
+ (id)KLineRedBlueModel:(id)arg1 redBlueColorArr:(id)arg2 lineWidth:(double)arg3 maxValue:(double)arg4 minValue:(double)arg5 leftMargin:(double)arg6 topMargin:(double)arg7 chartHeight:(double)arg8 index:(long long)arg9 backColor:(id)arg10;
+ (id)KLineModel:(id)arg1 lineWidth:(double)arg2 maxValue:(double)arg3 minValue:(double)arg4 leftMargin:(double)arg5 topMargin:(double)arg6 chartHeight:(double)arg7 index:(double)arg8;
+ (id)KLineVolumePath:(id)arg1 leftMargin:(double)arg2 lineWidth:(double)arg3 chartHeight:(double)arg4 drawTop:(double)arg5 maxValue:(double)arg6 minValue:(double)arg7;
+ (id)timelineTradeVolumePath:(id)arg1 leftMargin:(double)arg2 lineWidth:(double)arg3 chartHeight:(double)arg4 drawTop:(double)arg5 maxValue:(double)arg6 minValue:(double)arg7;
+ (id)techLinePath:(double)arg1;
+ (id)strokeDashLinePath;
+ (id)strokeLinePath;
- (void)addRoundImage:(double)arg1 maxValue:(double)arg2 minValue:(double)arg3 height:(double)arg4 topMargin:(double)arg5 leftMargin:(double)arg6 index:(long long)arg7 lineWidth:(double)arg8 hasDrawFirstPoint:(_Bool *)arg9;
- (void)addChoumaDashArr:(id)arg1 maxValue:(double)arg2 minValue:(double)arg3 height:(double)arg4 topMargin:(double)arg5 leftMargin:(double)arg6 index:(long long)arg7 indexEnd:(long long)arg8 lineWidth:(double)arg9 hasDrawFirstPoint:(_Bool *)arg10;
- (void)addDashTrendingLine:(double)arg1 maxValue:(double)arg2 minValue:(double)arg3 height:(double)arg4 topMargin:(double)arg5 leftMargin:(double)arg6 index:(long long)arg7 indexEnd:(long long)arg8 lineWidth:(double)arg9 hasDrawFirstPoint:(_Bool *)arg10;
- (void)addTendingLine:(double)arg1 maxValue:(double)arg2 minValue:(double)arg3 height:(double)arg4 topMargin:(double)arg5 leftMargin:(double)arg6 index:(long long)arg7 lineWidth:(double)arg8 hasDrawFirstPoint:(_Bool *)arg9;
- (void)addAvgPrice:(double)arg1 maxValue:(double)arg2 minValue:(double)arg3 height:(double)arg4 topMargin:(double)arg5 leftMargin:(double)arg6 index:(long long)arg7 lineWidth:(double)arg8 hasDrawFirstPoint:(_Bool *)arg9;
- (void)drawChoumaDashLine:(id)arg1 maxValue:(double)arg2 minValue:(double)arg3 leftMargin:(double)arg4 topMargin:(double)arg5 lineWidth:(double)arg6 chartHeight:(double)arg7 index:(long long)arg8;
- (void)drawTendingLine:(id)arg1 tendType:(long long)arg2 tendDic:(id)arg3 maxValue:(double)arg4 minValue:(double)arg5 leftMargin:(double)arg6 topMargin:(double)arg7 lineWidth:(double)arg8 chartHeight:(double)arg9 index:(long long)arg10;
- (void)drawRedBlueKLines:(id)arg1 avgLine:(long long)arg2 redBlueColorArr:(id)arg3 maxValue:(double)arg4 minValue:(double)arg5 leftMargin:(double)arg6 topMargin:(double)arg7 lineWidth:(double)arg8 chartHeight:(double)arg9 index:(long long)arg10 hideCount:(long long)arg11;
- (void)drawKLines:(id)arg1 avgLine:(long long)arg2 maxValue:(double)arg3 minValue:(double)arg4 leftMargin:(double)arg5 topMargin:(double)arg6 lineWidth:(double)arg7 chartHeight:(double)arg8 index:(long long)arg9;
@end
