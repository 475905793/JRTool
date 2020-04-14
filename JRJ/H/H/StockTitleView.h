//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDateFormatter, UILabel, UIScrollView;

@interface StockTitleView : UIView
{
    _Bool _isShowLower;
    UILabel *_titleLabel;
    UILabel *_codeLabel;
    UILabel *_marketLabel;
    UILabel *_stockTypeLabel;
    UILabel *_scrollViewBottomMarketLabel;
    UILabel *_scrollViewBottomStatusLabel;
    UILabel *_lbl_stock_status;
    CDUnknownBlockType _clickJianJieBlock;
    NSDateFormatter *_fmt_date;
    UIScrollView *_scv_scroll;
    UIView *_containerView;
    UIView *_subContainerTopView;
    UIView *_subContainerBottomView;
    UILabel *_jianJieLabel;
}

@property(retain, nonatomic) UILabel *jianJieLabel; // @synthesize jianJieLabel=_jianJieLabel;
@property(retain, nonatomic) UIView *subContainerBottomView; // @synthesize subContainerBottomView=_subContainerBottomView;
@property(retain, nonatomic) UIView *subContainerTopView; // @synthesize subContainerTopView=_subContainerTopView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool isShowLower; // @synthesize isShowLower=_isShowLower;
@property(retain, nonatomic) UIScrollView *scv_scroll; // @synthesize scv_scroll=_scv_scroll;
@property(retain, nonatomic) NSDateFormatter *fmt_date; // @synthesize fmt_date=_fmt_date;
@property(copy, nonatomic) CDUnknownBlockType clickJianJieBlock; // @synthesize clickJianJieBlock=_clickJianJieBlock;
@property(retain, nonatomic) UILabel *lbl_stock_status; // @synthesize lbl_stock_status=_lbl_stock_status;
@property(retain, nonatomic) UILabel *scrollViewBottomStatusLabel; // @synthesize scrollViewBottomStatusLabel=_scrollViewBottomStatusLabel;
@property(retain, nonatomic) UILabel *scrollViewBottomMarketLabel; // @synthesize scrollViewBottomMarketLabel=_scrollViewBottomMarketLabel;
@property(retain, nonatomic) UILabel *stockTypeLabel; // @synthesize stockTypeLabel=_stockTypeLabel;
@property(retain, nonatomic) UILabel *marketLabel; // @synthesize marketLabel=_marketLabel;
@property(retain, nonatomic) UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)addMyConstraint;
- (void)showLowerInfo:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateStockDataSource:(id)arg1;
- (void)updateStockWithName:(id)arg1 withCode:(id)arg2 withLastPxStr:(id)arg3 withPxChgRatioStr:(id)arg4;
- (void)updateSecurity:(id)arg1;
- (void)enterJianJie;
- (void)setUIConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
