//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJStockSnapShotInfoExpandView.h"

@class UIButton, UILabel, UIView;

@interface JRJBondSnapShotInfoExpandView : JRJStockSnapShotInfoExpandView
{
    UILabel *lblCaption[16];
    UILabel *lblData[16];
    UIButton *_expandButton;
    _Bool _isExpand;
    UIView *_maskView;
}

- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reloadData;
- (void)layoutViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

