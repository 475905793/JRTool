//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, NSArray, NSMutableArray, NSMutableDictionary;

@interface JRJCapitalFlowPieChartView : UIView
{
    _Bool _isStrategy;
    _Bool _enableAnimate;
    _Bool _isClearColor;
    NSArray *_segments;
    double _total;
    NSMutableArray *_segmentLayers;
    NSMutableDictionary *_positions;
    double _radius;
    double _lineWidth;
    double _labelWidth;
    double _labelHeight;
    double _topPadding;
    double _bottomPadding;
    double _padding;
    CAShapeLayer *_maskLayer;
    CADisplayLink *_displayLink;
    double _startAngle;
}

+ (id)twoLowestConsecutiveRatiosOfSegments:(id)arg1 index:(long long *)arg2;
+ (double)startAngleWithSegments:(id)arg1;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) NSMutableDictionary *positions; // @synthesize positions=_positions;
@property(retain, nonatomic) NSMutableArray *segmentLayers; // @synthesize segmentLayers=_segmentLayers;
@property(nonatomic) double total; // @synthesize total=_total;
@property(nonatomic) _Bool isClearColor; // @synthesize isClearColor=_isClearColor;
@property(nonatomic) _Bool enableAnimate; // @synthesize enableAnimate=_enableAnimate;
@property(nonatomic) _Bool isStrategy; // @synthesize isStrategy=_isStrategy;
@property(copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
- (void).cxx_destruct;
- (void)tick:(id)arg1;
- (void)animate;
- (void)drawRect:(struct CGRect)arg1;
- (void)createLayerForSegment:(id)arg1;
- (long long)labelPositionForAngle:(double)arg1;
- (void)changePositionFrom:(long long)arg1 to:(long long)arg2;
- (void)adjustPositionForSegment:(id)arg1;
- (id)pathWithStartAngle:(double)arg1 endAngle:(double)arg2;
- (void)configure;
- (void)layoutSubviews;
- (void)setup;
- (void)awakeFromNib;

@end

