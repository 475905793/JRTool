//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, TTTAttributedLabel, UILabel;

@interface HotThemeInfoCell : JRJBaseCell <TTTAttributedLabelDelegate>
{
    UILabel *_titleLabel;
    TTTAttributedLabel *_stocksLabel;
    UILabel *_timeLabel;
    UILabel *_readNumLabel;
    UILabel *_triggerEventLabel;
    NSLayoutConstraint *_timeLabelTopTitleConst;
}

@property(nonatomic) __weak NSLayoutConstraint *timeLabelTopTitleConst; // @synthesize timeLabelTopTitleConst=_timeLabelTopTitleConst;
@property(nonatomic) __weak UILabel *triggerEventLabel; // @synthesize triggerEventLabel=_triggerEventLabel;
@property(nonatomic) __weak UILabel *readNumLabel; // @synthesize readNumLabel=_readNumLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak TTTAttributedLabel *stocksLabel; // @synthesize stocksLabel=_stocksLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
