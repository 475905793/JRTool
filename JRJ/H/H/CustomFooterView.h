//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface CustomFooterView : UIView
{
    UIView *_footerMiddleView;
    UILabel *_titleLbl;
    UILabel *_footerValueLbl;
    UILabel *_footerValueTwoLbl;
    UIButton *_sureBtn;
    CDUnknownBlockType _sureBtnClick;
}

@property(copy, nonatomic) CDUnknownBlockType sureBtnClick; // @synthesize sureBtnClick=_sureBtnClick;
@property(retain, nonatomic) UIButton *sureBtn; // @synthesize sureBtn=_sureBtn;
@property(retain, nonatomic) UILabel *footerValueTwoLbl; // @synthesize footerValueTwoLbl=_footerValueTwoLbl;
@property(retain, nonatomic) UILabel *footerValueLbl; // @synthesize footerValueLbl=_footerValueLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIView *footerMiddleView; // @synthesize footerMiddleView=_footerMiddleView;
- (void).cxx_destruct;
- (void)sureBtnClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

