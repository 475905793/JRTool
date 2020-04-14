//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class CAShapeLayer, NSDictionary, UISegmentedControl;

@interface JRJPeerCompareCell : JRJTableViewCell
{
    float _leftConstraint;
    UISegmentedControl *_scType;
    CAShapeLayer *_dashLineLayer;
    NSDictionary *_totalDic;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) NSDictionary *totalDic; // @synthesize totalDic=_totalDic;
@property(nonatomic) float leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property(retain, nonatomic) CAShapeLayer *dashLineLayer; // @synthesize dashLineLayer=_dashLineLayer;
@property(retain, nonatomic) UISegmentedControl *scType; // @synthesize scType=_scType;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)changeSecurityMarketAction:(id)arg1;
- (void)updateWithDic:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

