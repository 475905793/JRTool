//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class UIImageView, UILabel;

@interface TouGuAuthAddPicCell : JRJBaseCell
{
    UIImageView *ivFunBackView;
    UILabel *lblFunTitle;
    UILabel *lblChangeTxTip;
    UILabel *lblInfo;
    UILabel *lblDetailInfo;
    UIImageView *_ivTx;
}

+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *ivTx; // @synthesize ivTx=_ivTx;
- (void).cxx_destruct;
- (void)setData:(id)arg1 withMainFunTitle:(id)arg2;
- (void)buttonClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

