//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSLayoutConstraint, NSString, RCLabel, UIView;

@interface JRJPortfolioCommentTableViewCell : JRJTableViewCell
{
    _Bool _hightlightEnabled;
    NSString *_content;
    RCLabel *_contentLabel;
    UIView *_contentBackgroundView;
    NSLayoutConstraint *_contentLeftMarginConstraint;
    NSLayoutConstraint *_contentRightMarginConstraint;
}

+ (double)cellHeightWithContent:(id)arg1;
@property(nonatomic) _Bool hightlightEnabled; // @synthesize hightlightEnabled=_hightlightEnabled;
@property(nonatomic) __weak NSLayoutConstraint *contentRightMarginConstraint; // @synthesize contentRightMarginConstraint=_contentRightMarginConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentLeftMarginConstraint; // @synthesize contentLeftMarginConstraint=_contentLeftMarginConstraint;
@property(nonatomic) __weak UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(nonatomic) __weak RCLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

