//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJCardCell.h"

@class UIImageView, UILabel;

@interface JRJCardTitleCell : JRJCardCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_rightArrow;
}

+ (double)cellHeight;
@property(nonatomic) __weak UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

