//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSArray, NSDictionary, UILabel;

@interface JRJPortfolioPositionsTableViewCell : JRJTableViewCell
{
    UILabel *_stockNameLabel;
    UILabel *_MarketValueLabel;
    NSArray *_leftNameLabels;
    NSArray *_leftValueLabels;
    NSArray *_rightNameLabels;
    NSArray *_rightValueLabels;
    NSDictionary *_data;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSArray *rightValueLabels; // @synthesize rightValueLabels=_rightValueLabels;
@property(retain, nonatomic) NSArray *rightNameLabels; // @synthesize rightNameLabels=_rightNameLabels;
@property(retain, nonatomic) NSArray *leftValueLabels; // @synthesize leftValueLabels=_leftValueLabels;
@property(retain, nonatomic) NSArray *leftNameLabels; // @synthesize leftNameLabels=_leftNameLabels;
@property(nonatomic) __weak UILabel *MarketValueLabel; // @synthesize MarketValueLabel=_MarketValueLabel;
@property(nonatomic) __weak UILabel *stockNameLabel; // @synthesize stockNameLabel=_stockNameLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLabel:(id)arg1 andText:(id)arg2;
- (void)valueLabelsText;
- (void)updateCellWithSource:(id)arg1;
- (void)awakeFromNib;

@end

