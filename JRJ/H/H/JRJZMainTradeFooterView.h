//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface JRJZMainTradeFooterView : UIView
{
    UILabel *_expireTimeUILabel;
    UIButton *_footerUIbutton;
    CDUnknownBlockType _footerBtnBlock;
}

@property(copy, nonatomic) CDUnknownBlockType footerBtnBlock; // @synthesize footerBtnBlock=_footerBtnBlock;
@property(nonatomic) __weak UIButton *footerUIbutton; // @synthesize footerUIbutton=_footerUIbutton;
@property(nonatomic) __weak UILabel *expireTimeUILabel; // @synthesize expireTimeUILabel=_expireTimeUILabel;
- (void).cxx_destruct;
- (void)clickFooterTap:(id)arg1;
- (void)awakeFromNib;

@end

