//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface JRJNoStockView : UIView
{
    int _viewType;
    UIView *_addStockView;
    UILabel *_addStockTip;
    CDUnknownBlockType _noStockViewButtonClicked;
    CDUnknownBlockType _addStockBlock;
    UIImageView *_noStockImage;
    UILabel *_mainTitle;
    UILabel *_subTitle;
    UIButton *_button;
    UIButton *_addStockBtn;
}

@property(retain, nonatomic) UIButton *addStockBtn; // @synthesize addStockBtn=_addStockBtn;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) UIImageView *noStockImage; // @synthesize noStockImage=_noStockImage;
@property(copy, nonatomic) CDUnknownBlockType addStockBlock; // @synthesize addStockBlock=_addStockBlock;
@property(copy, nonatomic) CDUnknownBlockType noStockViewButtonClicked; // @synthesize noStockViewButtonClicked=_noStockViewButtonClicked;
@property(retain, nonatomic) UILabel *addStockTip; // @synthesize addStockTip=_addStockTip;
@property(retain, nonatomic) UIView *addStockView; // @synthesize addStockView=_addStockView;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (void)buttonClicked;
- (void)addStock;
- (id)contentDic;
- (id)attributedString:(struct _NSRange)arg1;
- (void)makeViews;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(int)arg2;

@end

