//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseCell.h"

@class UILabel;

@interface _TtC16JRJInvestAdviser22JRJStockRiseOrFallCell : _TtC16JRJInvestAdviser10ZKBaseCell
{
    // Error parsing type: , name: stkName
    // Error parsing type: , name: stkCode
    // Error parsing type: , name: priceLabel
    // Error parsing type: , name: riseOrFallLabel
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateViewForModelWithModel:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *riseOrFallLabel; // @synthesize riseOrFallLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel;
@property(nonatomic) __weak UILabel *stkCode; // @synthesize stkCode;
@property(nonatomic) __weak UILabel *stkName; // @synthesize stkName;

@end

