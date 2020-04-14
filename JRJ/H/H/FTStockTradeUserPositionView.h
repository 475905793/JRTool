//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TradePositionModel, UILabel;

@interface FTStockTradeUserPositionView : UIView
{
    CDUnknownBlockType _closeBlock;
    UILabel *_costPriceLbl;
    UILabel *_incomeBalanceLbl;
    TradePositionModel *_currentModel;
}

+ (id)viewFromNIB;
@property(retain, nonatomic) TradePositionModel *currentModel; // @synthesize currentModel=_currentModel;
@property(nonatomic) __weak UILabel *incomeBalanceLbl; // @synthesize incomeBalanceLbl=_incomeBalanceLbl;
@property(nonatomic) __weak UILabel *costPriceLbl; // @synthesize costPriceLbl=_costPriceLbl;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (void)setIncomeBalanceLayout:(double)arg1 percent:(id)arg2;
- (void)refreshUserProfitAndLossWithNowPrice:(double)arg1;
- (void)updateWithModel:(id)arg1;

@end

