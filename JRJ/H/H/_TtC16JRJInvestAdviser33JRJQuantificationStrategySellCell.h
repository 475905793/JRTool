//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseCell.h"

@class NSLayoutConstraint, UILabel, _TtC16JRJInvestAdviser25JRJStrategyOperationModel;

@interface _TtC16JRJInvestAdviser33JRJQuantificationStrategySellCell : _TtC16JRJInvestAdviser10ZKBaseCell
{
    // Error parsing type: , name: model
    // Error parsing type: , name: leftConstraint
    // Error parsing type: , name: midConstraint
    // Error parsing type: , name: orderFunc
    // Error parsing type: , name: maxProfitUILabel
    // Error parsing type: , name: statusLabel
    // Error parsing type: , name: tradeTimeDispLabel
    // Error parsing type: , name: stknameLabel
    // Error parsing type: , name: stkidLabel
    // Error parsing type: , name: priceDispLabel
    // Error parsing type: , name: positionLabel
    // Error parsing type: , name: tradeSuggestionLabel
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)orderBtnHandle:(id)arg1;
- (void)updateViewForModel;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *tradeSuggestionLabel; // @synthesize tradeSuggestionLabel;
@property(nonatomic) __weak UILabel *positionLabel; // @synthesize positionLabel;
@property(nonatomic) __weak UILabel *priceDispLabel; // @synthesize priceDispLabel;
@property(nonatomic) __weak UILabel *stkidLabel; // @synthesize stkidLabel;
@property(nonatomic) __weak UILabel *stknameLabel; // @synthesize stknameLabel;
@property(nonatomic) __weak UILabel *tradeTimeDispLabel; // @synthesize tradeTimeDispLabel;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel;
@property(nonatomic, retain) UILabel *maxProfitUILabel; // @synthesize maxProfitUILabel;
@property(nonatomic, copy) CDUnknownBlockType orderFunc;
@property(nonatomic) __weak NSLayoutConstraint *midConstraint; // @synthesize midConstraint;
@property(nonatomic) __weak NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint;
@property(nonatomic, retain) _TtC16JRJInvestAdviser25JRJStrategyOperationModel *model; // @synthesize model;

@end
