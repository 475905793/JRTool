//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseCell.h"

@class JRJTrendStrongOrWeakView, UILabel;

@interface _TtC16JRJInvestAdviser28JRJZPreferredTradeSignalCell : _TtC16JRJInvestAdviser10ZKBaseCell
{
    // Error parsing type: , name: stkNameLabel
    // Error parsing type: , name: stkCodeLabel
    // Error parsing type: , name: oneLabel
    // Error parsing type: , name: twoLabel
    // Error parsing type: , name: threeLabel
    // Error parsing type: , name: trendView
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateViewForModelWithModel:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak JRJTrendStrongOrWeakView *trendView; // @synthesize trendView;
@property(nonatomic) __weak UILabel *threeLabel; // @synthesize threeLabel;
@property(nonatomic) __weak UILabel *twoLabel; // @synthesize twoLabel;
@property(nonatomic) __weak UILabel *oneLabel; // @synthesize oneLabel;
@property(nonatomic) __weak UILabel *stkCodeLabel; // @synthesize stkCodeLabel;
@property(nonatomic) __weak UILabel *stkNameLabel; // @synthesize stkNameLabel;

@end

