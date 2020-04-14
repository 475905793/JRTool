//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSDictionary, UIImageView, UILabel, UIView;

@interface JRJFeaturedAdviserCell : JRJTableViewCell
{
    UIView *_topLine;
    UIView *_bottomLine;
    NSDictionary *_adviser;
    UIImageView *_avatarImageView;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
}

+ (double)cellHeight;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSDictionary *adviser; // @synthesize adviser=_adviser;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak UIView *topLine; // @synthesize topLine=_topLine;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

