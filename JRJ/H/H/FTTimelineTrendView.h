//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTBaseDrawView.h"

@class FTCircleRadarView, NSArray;

@interface FTTimelineTrendView : FTBaseDrawView
{
    long long _timelineType;
    FTCircleRadarView *_radar_view;
    NSArray *_has_draw_group_first_point;
}

@property(retain, nonatomic) NSArray *has_draw_group_first_point; // @synthesize has_draw_group_first_point=_has_draw_group_first_point;
@property(retain, nonatomic) FTCircleRadarView *radar_view; // @synthesize radar_view=_radar_view;
@property(nonatomic) long long timelineType; // @synthesize timelineType=_timelineType;
- (void).cxx_destruct;
- (void)drawInitInfo;
- (void)drawFiveDayTimeLinePriceAndAvgPrice;
- (void)drawTimelineLastPriceAndAvgPrice;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)shouldClipToBounds;
- (void)dealloc;

@end
