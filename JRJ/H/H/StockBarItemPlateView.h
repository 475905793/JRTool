//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StockBarItemBaseView.h"

@class UIImageView, UILabel;

@interface StockBarItemPlateView : StockBarItemBaseView
{
    UILabel *lblPriceChangeRatio;
    UIImageView *ivArrow;
    UILabel *lblName;
}

- (void).cxx_destruct;
- (void)setPriceInfoWithLastPrice:(double)arg1 withYestdayPrice:(double)arg2 withStockIndex:(unsigned long long)arg3;
- (void)setPriceChangeRatioWithColor:(id)arg1;
- (void)setPriceChangeRatioWithTitle:(id)arg1;
- (void)setPriceChangeRatio:(id)arg1 withColor:(id)arg2;
- (void)setName:(id)arg1;
- (void)setArrowWithOpened:(_Bool)arg1;
- (void)awakeFromNib;

@end

