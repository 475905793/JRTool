//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface JRJStockTradeDetailHeaderView : UIView
{
    _Bool _isLV2;
    CDUnknownBlockType _suspendBlock;
    CDUnknownBlockType _showIntroduceBlock;
    CDUnknownBlockType _gotoLv2Block;
    UIView *_topContainer;
    UIImageView *_redImgView;
    UILabel *_mainTitle;
    UIButton *_introduceBtn;
    UIButton *_gotoLv2Btn;
    UIImageView *_middleLine;
    UIView *_bottomContainer;
    UIView *_touchView;
    UIButton *_suspendBtn;
    UILabel *_timeLabel;
    UILabel *_priceLabel;
    UILabel *_volumeLabel;
    UILabel *_volumeMoneyLabel;
    UIImageView *_bottomLine;
}

@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *volumeMoneyLabel; // @synthesize volumeMoneyLabel=_volumeMoneyLabel;
@property(retain, nonatomic) UILabel *volumeLabel; // @synthesize volumeLabel=_volumeLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *suspendBtn; // @synthesize suspendBtn=_suspendBtn;
@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) UIImageView *middleLine; // @synthesize middleLine=_middleLine;
@property(retain, nonatomic) UIButton *gotoLv2Btn; // @synthesize gotoLv2Btn=_gotoLv2Btn;
@property(retain, nonatomic) UIButton *introduceBtn; // @synthesize introduceBtn=_introduceBtn;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) UIImageView *redImgView; // @synthesize redImgView=_redImgView;
@property(retain, nonatomic) UIView *topContainer; // @synthesize topContainer=_topContainer;
@property(copy, nonatomic) CDUnknownBlockType gotoLv2Block; // @synthesize gotoLv2Block=_gotoLv2Block;
@property(copy, nonatomic) CDUnknownBlockType showIntroduceBlock; // @synthesize showIntroduceBlock=_showIntroduceBlock;
@property(copy, nonatomic) CDUnknownBlockType suspendBlock; // @synthesize suspendBlock=_suspendBlock;
@property(nonatomic) _Bool isLV2; // @synthesize isLV2=_isLV2;
- (void).cxx_destruct;
- (void)gotoLv2Introduce:(id)arg1;
- (void)showIntroduce:(id)arg1;
- (void)changeState:(id)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

