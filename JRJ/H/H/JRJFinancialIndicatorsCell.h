//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class UILabel;

@interface JRJFinancialIndicatorsCell : JRJTableViewCell
{
    UILabel *_peRatioLabel;
    UILabel *_perShareEarningLabel;
    UILabel *_operatingReceiptLabel;
    UILabel *_netMarginLabel;
    UILabel *_pbRatioLabel;
    UILabel *_bvpsLabel;
    UILabel *_operatingReceiptGrewLabel;
    UILabel *_netMarginGrewLabel;
}

@property(nonatomic) __weak UILabel *netMarginGrewLabel; // @synthesize netMarginGrewLabel=_netMarginGrewLabel;
@property(nonatomic) __weak UILabel *operatingReceiptGrewLabel; // @synthesize operatingReceiptGrewLabel=_operatingReceiptGrewLabel;
@property(nonatomic) __weak UILabel *bvpsLabel; // @synthesize bvpsLabel=_bvpsLabel;
@property(nonatomic) __weak UILabel *pbRatioLabel; // @synthesize pbRatioLabel=_pbRatioLabel;
@property(nonatomic) __weak UILabel *netMarginLabel; // @synthesize netMarginLabel=_netMarginLabel;
@property(nonatomic) __weak UILabel *operatingReceiptLabel; // @synthesize operatingReceiptLabel=_operatingReceiptLabel;
@property(nonatomic) __weak UILabel *perShareEarningLabel; // @synthesize perShareEarningLabel=_perShareEarningLabel;
@property(nonatomic) __weak UILabel *peRatioLabel; // @synthesize peRatioLabel=_peRatioLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithDic:(id)arg1;
- (void)awakeFromNib;

@end

