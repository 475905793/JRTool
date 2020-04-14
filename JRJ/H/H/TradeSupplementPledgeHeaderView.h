//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, TradeTitleView, UIButton, UILabel, UITextField;

@interface TradeSupplementPledgeHeaderView : UIView <UITextFieldDelegate>
{
    CDUnknownBlockType _gotoBankBlock;
    CDUnknownBlockType _supplePriceBlock;
    UILabel *_avilableDesLabel;
    UILabel *_avilableValueLabel;
    UIButton *_bankTransferBtn;
    UILabel *_suppleDesLabel;
    UITextField *_suppleTextField;
    TradeTitleView *_titleView;
    double _supplePrice;
    double _canUsePrice;
}

@property(nonatomic) double canUsePrice; // @synthesize canUsePrice=_canUsePrice;
@property(nonatomic) double supplePrice; // @synthesize supplePrice=_supplePrice;
@property(retain, nonatomic) TradeTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UITextField *suppleTextField; // @synthesize suppleTextField=_suppleTextField;
@property(retain, nonatomic) UILabel *suppleDesLabel; // @synthesize suppleDesLabel=_suppleDesLabel;
@property(retain, nonatomic) UIButton *bankTransferBtn; // @synthesize bankTransferBtn=_bankTransferBtn;
@property(retain, nonatomic) UILabel *avilableValueLabel; // @synthesize avilableValueLabel=_avilableValueLabel;
@property(retain, nonatomic) UILabel *avilableDesLabel; // @synthesize avilableDesLabel=_avilableDesLabel;
@property(copy, nonatomic) CDUnknownBlockType supplePriceBlock; // @synthesize supplePriceBlock=_supplePriceBlock;
@property(copy, nonatomic) CDUnknownBlockType gotoBankBlock; // @synthesize gotoBankBlock=_gotoBankBlock;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateWithCanUsePrice:(id)arg1;
- (void)bankTransferBtnClick;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
