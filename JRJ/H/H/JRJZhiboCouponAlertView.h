//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface JRJZhiboCouponAlertView : UIView
{
    _Bool _skipHongbao;
    CDUnknownBlockType _loginBlock;
    CDUnknownBlockType _showDetailBlock;
    CDUnknownBlockType _showMoreBlock;
    UIView *_hongbaoView;
    UIView *_couponView;
    UILabel *_couponTitleLabel;
    UILabel *_couponNameLabel;
    UILabel *_couponPriceLabel;
    UIButton *_openButton;
    UIButton *_showDetailButton;
    UIButton *_showMoreButton;
}

+ (id)p_keywindow;
+ (id)currentAlertView;
+ (_Bool)isVisible;
+ (void)dismiss;
+ (id)showCouponWithPrice:(id)arg1 name:(id)arg2 adviserName:(id)arg3 skipHongBao:(_Bool)arg4;
@property(nonatomic) _Bool skipHongbao; // @synthesize skipHongbao=_skipHongbao;
@property(retain, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(retain, nonatomic) UIButton *showDetailButton; // @synthesize showDetailButton=_showDetailButton;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UILabel *couponPriceLabel; // @synthesize couponPriceLabel=_couponPriceLabel;
@property(retain, nonatomic) UILabel *couponNameLabel; // @synthesize couponNameLabel=_couponNameLabel;
@property(retain, nonatomic) UILabel *couponTitleLabel; // @synthesize couponTitleLabel=_couponTitleLabel;
@property(retain, nonatomic) UIView *couponView; // @synthesize couponView=_couponView;
@property(retain, nonatomic) UIView *hongbaoView; // @synthesize hongbaoView=_hongbaoView;
@property(copy, nonatomic) CDUnknownBlockType showMoreBlock; // @synthesize showMoreBlock=_showMoreBlock;
@property(copy, nonatomic) CDUnknownBlockType showDetailBlock; // @synthesize showDetailBlock=_showDetailBlock;
@property(copy, nonatomic) CDUnknownBlockType loginBlock; // @synthesize loginBlock=_loginBlock;
- (void).cxx_destruct;
- (void)didTapClose:(id)arg1;
- (void)didTapShowMore:(id)arg1;
- (void)didTapShowDetail:(id)arg1;
- (void)didTapOpen:(id)arg1;
- (void)p_showCouponViewAnimated:(_Bool)arg1;
- (void)show;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
