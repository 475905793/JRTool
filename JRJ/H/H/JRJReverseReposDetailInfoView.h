//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class JRJTradeConfirmPopWindowView, JRJTradeSelectCountView, NSArray, NSMutableArray, NSNumber, NSString, NewBuySellRightFiveView, NewTextFieldContainBtn, UIButton, UILabel;

@interface JRJReverseReposDetailInfoView : UIView <UITextFieldDelegate>
{
    _Bool _isFirstFivePrice;
    CDUnknownBlockType _buyBtnActionblock;
    NSNumber *_counterFeeRateNum;
    NSString *_codeAlias;
    long long _reposType;
    long long _intervalDay;
    UILabel *_yearRateLbl;
    NewTextFieldContainBtn *_yearRateTextField;
    UILabel *_priceLbl;
    NewTextFieldContainBtn *_numberPriceTextField;
    NewBuySellRightFiveView *_fivieView;
    JRJTradeSelectCountView *_selectCountView;
    UIButton *_selectedBtn;
    JRJTradeConfirmPopWindowView *_popWindowView;
    UILabel *_lucreName;
    UILabel *_lucrePriceLbl;
    double _lucrePrice;
    UILabel *_feeRate;
    UILabel *_feeRatePriceLbl;
    double _feeRatePrice;
    UIButton *_buyBtn;
    NSMutableArray *_fiveViewArr;
    UIView *_fiveBGView;
    NSArray *_textFieldImgArr;
    NSString *_maxNumberPrice;
    NSString *_code;
}

@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *maxNumberPrice; // @synthesize maxNumberPrice=_maxNumberPrice;
@property(retain, nonatomic) NSArray *textFieldImgArr; // @synthesize textFieldImgArr=_textFieldImgArr;
@property(retain, nonatomic) UIView *fiveBGView; // @synthesize fiveBGView=_fiveBGView;
@property(retain, nonatomic) NSMutableArray *fiveViewArr; // @synthesize fiveViewArr=_fiveViewArr;
@property(retain, nonatomic) UIButton *buyBtn; // @synthesize buyBtn=_buyBtn;
@property(nonatomic) double feeRatePrice; // @synthesize feeRatePrice=_feeRatePrice;
@property(retain, nonatomic) UILabel *feeRatePriceLbl; // @synthesize feeRatePriceLbl=_feeRatePriceLbl;
@property(retain, nonatomic) UILabel *feeRate; // @synthesize feeRate=_feeRate;
@property(nonatomic) double lucrePrice; // @synthesize lucrePrice=_lucrePrice;
@property(retain, nonatomic) UILabel *lucrePriceLbl; // @synthesize lucrePriceLbl=_lucrePriceLbl;
@property(retain, nonatomic) UILabel *lucreName; // @synthesize lucreName=_lucreName;
@property(retain, nonatomic) JRJTradeConfirmPopWindowView *popWindowView; // @synthesize popWindowView=_popWindowView;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) JRJTradeSelectCountView *selectCountView; // @synthesize selectCountView=_selectCountView;
@property(retain, nonatomic) NewBuySellRightFiveView *fivieView; // @synthesize fivieView=_fivieView;
@property(retain, nonatomic) NewTextFieldContainBtn *numberPriceTextField; // @synthesize numberPriceTextField=_numberPriceTextField;
@property(retain, nonatomic) UILabel *priceLbl; // @synthesize priceLbl=_priceLbl;
@property(retain, nonatomic) NewTextFieldContainBtn *yearRateTextField; // @synthesize yearRateTextField=_yearRateTextField;
@property(retain, nonatomic) UILabel *yearRateLbl; // @synthesize yearRateLbl=_yearRateLbl;
@property(nonatomic) _Bool isFirstFivePrice; // @synthesize isFirstFivePrice=_isFirstFivePrice;
@property(nonatomic) long long intervalDay; // @synthesize intervalDay=_intervalDay;
@property(nonatomic) long long reposType; // @synthesize reposType=_reposType;
@property(copy, nonatomic) NSString *codeAlias; // @synthesize codeAlias=_codeAlias;
@property(retain, nonatomic) NSNumber *counterFeeRateNum; // @synthesize counterFeeRateNum=_counterFeeRateNum;
@property(copy, nonatomic) CDUnknownBlockType buyBtnActionblock; // @synthesize buyBtnActionblock=_buyBtnActionblock;
- (void).cxx_destruct;
- (void)resetDetaileView;
- (id)numberChangeToPrice:(long long)arg1 isToPrice:(_Bool)arg2;
- (id)getExchangeType;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)layoutBuyBtnStatus;
- (void)buildParameterAndSendRequest;
- (void)buyBtnClick;
- (void)setupBuyBtn;
- (void)updateIncomeAndCharge;
- (void)setupIncomeAndCharge;
- (void)updateDetailFiveView:(id)arg1;
- (void)resetFiveView;
- (void)tapClick;
- (void)setupFiveView;
- (void)setupSelectCountView;
- (void)updateMaxNumberPrice:(id)arg1 isShowPlaceholder:(_Bool)arg2;
- (void)numberPriceBtnAction:(_Bool)arg1;
- (void)yearRateBtnAction:(_Bool)arg1;
- (void)setupYearRateAndPrice;
- (id)initWithFrame:(struct CGRect)arg1 productionCode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

