//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface SliceArcLayer : CAShapeLayer
{
    double _startAngle;
    double _endAngle;
    double _percentage;
    double _value;
}

+ (id)createCircleDotLayer:(struct CGPoint)arg1 radius:(double)arg2 fillColor:(id)arg3;
+ (id)createCircleDotLayer:(struct CGPoint)arg1 fillColor:(id)arg2;
+ (id)createLineLayer:(double)arg1 startAngle:(double)arg2 industInfo:(id)arg3 center:(struct CGPoint)arg4 radius:(double)arg5 color:(id)arg6;
+ (id)createLayer;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double percentage; // @synthesize percentage=_percentage;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
- (void)createArcAnimationForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 Delegate:(id)arg4;

@end
