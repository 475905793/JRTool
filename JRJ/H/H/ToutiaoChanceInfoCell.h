//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, TTTAttributedLabel, UILabel;

@interface ToutiaoChanceInfoCell : JRJBaseCell <TTTAttributedLabelDelegate>
{
    UILabel *_title;
    TTTAttributedLabel *_stocksLabel;
    TTTAttributedLabel *_hotTemesLbl;
    UILabel *_timeLbl;
}

@property(nonatomic) __weak UILabel *timeLbl; // @synthesize timeLbl=_timeLbl;
@property(nonatomic) __weak TTTAttributedLabel *hotTemesLbl; // @synthesize hotTemesLbl=_hotTemesLbl;
@property(nonatomic) __weak TTTAttributedLabel *stocksLabel; // @synthesize stocksLabel=_stocksLabel;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)addhotTemesLblLinkWithArr:(id)arg1;
- (void)updateCellWithParamDic:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

