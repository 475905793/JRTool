//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface StockGroupTitleView : UIView
{
    CDUnknownBlockType _labelTouched;
    UIImageView *_ivGroupArrow;
    UILabel *_lblStockName;
}

@property(retain, nonatomic) UILabel *lblStockName; // @synthesize lblStockName=_lblStockName;
@property(retain, nonatomic) UIImageView *ivGroupArrow; // @synthesize ivGroupArrow=_ivGroupArrow;
@property(copy, nonatomic) CDUnknownBlockType labelTouched; // @synthesize labelTouched=_labelTouched;
- (void).cxx_destruct;
- (void)setTitleAlignRight:(_Bool)arg1;
- (void)setGroupInfoWithName:(id)arg1 withShowArraw:(_Bool)arg2;
- (void)buildUI;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

