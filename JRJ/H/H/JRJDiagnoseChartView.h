//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface JRJDiagnoseChartView : UIView
{
    NSArray *_dataArr;
    double _max;
    double _min;
}

@property(nonatomic) double min; // @synthesize min=_min;
@property(nonatomic) double max; // @synthesize max=_max;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
- (void).cxx_destruct;
- (double)pointHeightWithPercent:(double)arg1;
- (void)getMaxAndMinDataWith:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

