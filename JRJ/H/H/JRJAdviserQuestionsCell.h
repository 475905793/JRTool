//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewBaseCell.h"

@class UILabel;

@interface JRJAdviserQuestionsCell : KKTableViewBaseCell
{
    UILabel *_contentLabelView;
    UILabel *_ctimeLabelView;
    UILabel *_answerCountLabelView;
}

@property(nonatomic) __weak UILabel *answerCountLabelView; // @synthesize answerCountLabelView=_answerCountLabelView;
@property(nonatomic) __weak UILabel *ctimeLabelView; // @synthesize ctimeLabelView=_ctimeLabelView;
@property(nonatomic) __weak UILabel *contentLabelView; // @synthesize contentLabelView=_contentLabelView;
- (void).cxx_destruct;
- (void)updateCellWithModel:(id)arg1;
- (void)updateCellWithSource:(id)arg1;
- (void)layoutSubviews;
- (double)cellHeightWithModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

