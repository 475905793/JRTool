//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class UIImageView, UILabel;

@interface JRJInvestCalendarCell : JRJBaseCell
{
    UIImageView *_iconImg;
    UILabel *_titleLbl;
    UILabel *_numLbl;
    UILabel *_contentLbl;
}

@property(nonatomic) __weak UILabel *contentLbl; // @synthesize contentLbl=_contentLbl;
@property(nonatomic) __weak UILabel *numLbl; // @synthesize numLbl=_numLbl;
@property(nonatomic) __weak UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(nonatomic) __weak UIImageView *iconImg; // @synthesize iconImg=_iconImg;
- (void).cxx_destruct;
- (void)updateCellWithDataModel:(id)arg1 index:(long long)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

