//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseCell.h"

@class JRJStrategyQuantizationChartView, NSLayoutConstraint, UIButton, UILabel, UIView, _TtC16JRJInvestAdviser16JRJstrategyModel;

@interface _TtC16JRJInvestAdviser24JRJStrategyTableViewCell : _TtC16JRJInvestAdviser10ZKBaseCell
{
    // Error parsing type: , name: cConstraint
    // Error parsing type: , name: rConstraint
    // Error parsing type: , name: rV
    // Error parsing type: , name: rLabelV
    // Error parsing type: , name: nameLabelView
    // Error parsing type: , name: labelLabelView
    // Error parsing type: , name: returnRateLabelView
    // Error parsing type: , name: returnRateLabelView1
    // Error parsing type: , name: successRateLabelView
    // Error parsing type: , name: successRateLabelView1
    // Error parsing type: , name: maxDrawDownLabelView
    // Error parsing type: , name: maxDrawDownLabelView1
    // Error parsing type: , name: bgView
    // Error parsing type: , name: zxtView
    // Error parsing type: , name: returnRateView
    // Error parsing type: , name: model
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setLabelColorWithLabel:(id)arg1 nStr:(id)arg2;
- (id)view_setMaskWithView:(id)arg1 corners:(unsigned long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateViewForModel;
- (void)setSubViewStyle;
- (void)awakeFromNib;
@property(nonatomic, retain) _TtC16JRJInvestAdviser16JRJstrategyModel *model; // @synthesize model;
@property(nonatomic) __weak UIView *returnRateView; // @synthesize returnRateView;
@property(nonatomic) __weak JRJStrategyQuantizationChartView *zxtView; // @synthesize zxtView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView;
@property(nonatomic) __weak UILabel *maxDrawDownLabelView1; // @synthesize maxDrawDownLabelView1;
@property(nonatomic) __weak UILabel *maxDrawDownLabelView; // @synthesize maxDrawDownLabelView;
@property(nonatomic) __weak UILabel *successRateLabelView1; // @synthesize successRateLabelView1;
@property(nonatomic) __weak UILabel *successRateLabelView; // @synthesize successRateLabelView;
@property(nonatomic) __weak UILabel *returnRateLabelView1; // @synthesize returnRateLabelView1;
@property(nonatomic) __weak UILabel *returnRateLabelView; // @synthesize returnRateLabelView;
@property(nonatomic) __weak UIButton *labelLabelView; // @synthesize labelLabelView;
@property(nonatomic) __weak UILabel *nameLabelView; // @synthesize nameLabelView;
@property(nonatomic) __weak UILabel *rLabelV; // @synthesize rLabelV;
@property(nonatomic) __weak UIView *rV; // @synthesize rV;
@property(nonatomic) __weak NSLayoutConstraint *rConstraint; // @synthesize rConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cConstraint; // @synthesize cConstraint;

@end

