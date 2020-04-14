//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TradeEFinanceMainHeaderModel, UILabel;

@interface TradeEFinanceHeaderView : UIView
{
    UIView *_topBGView;
    UIView *_top_leftView;
    UIView *_top_rightView;
    UIView *_lineView;
    UILabel *_top_title;
    UILabel *_top_titleInfo;
    UILabel *_top_yeardTitle;
    UILabel *_top_yearYield;
    UILabel *_top_pledgeTermsTitle;
    UILabel *_top_pledgeTerms;
    TradeEFinanceMainHeaderModel *_model;
}

@property(retain, nonatomic) TradeEFinanceMainHeaderModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *top_pledgeTerms; // @synthesize top_pledgeTerms=_top_pledgeTerms;
@property(retain, nonatomic) UILabel *top_pledgeTermsTitle; // @synthesize top_pledgeTermsTitle=_top_pledgeTermsTitle;
@property(retain, nonatomic) UILabel *top_yearYield; // @synthesize top_yearYield=_top_yearYield;
@property(retain, nonatomic) UILabel *top_yeardTitle; // @synthesize top_yeardTitle=_top_yeardTitle;
@property(retain, nonatomic) UILabel *top_titleInfo; // @synthesize top_titleInfo=_top_titleInfo;
@property(retain, nonatomic) UILabel *top_title; // @synthesize top_title=_top_title;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *top_rightView; // @synthesize top_rightView=_top_rightView;
@property(retain, nonatomic) UIView *top_leftView; // @synthesize top_leftView=_top_leftView;
@property(retain, nonatomic) UIView *topBGView; // @synthesize topBGView=_topBGView;
- (void).cxx_destruct;
- (void)updateHeaderViewWithModel:(id)arg1;
- (void)addAutolayout;
- (void)addTopBGVivewSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
