//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, TTTAttributedLabel, UIButton, UIImageView, UILabel;

@interface HotThemeInfoTableHeaderView : UIView <TTTAttributedLabelDelegate>
{
    UIImageView *_backgroundIV;
    UILabel *_titleLabel;
    TTTAttributedLabel *_stocksLabel;
    UIButton *_stocksBtn;
}

@property(nonatomic) __weak UIButton *stocksBtn; // @synthesize stocksBtn=_stocksBtn;
@property(nonatomic) __weak TTTAttributedLabel *stocksLabel; // @synthesize stocksLabel=_stocksLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *backgroundIV; // @synthesize backgroundIV=_backgroundIV;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
