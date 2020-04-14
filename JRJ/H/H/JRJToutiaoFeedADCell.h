//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJAdModel, UIImageView, UILabel, UIView;

@interface JRJToutiaoFeedADCell : JRJTableViewCell
{
    JRJAdModel *_model;
    CDUnknownBlockType _tapBlock;
    UIView *_bottomSeparator;
    UILabel *_titleLabel;
    UIImageView *_adImageView;
    UILabel *_sponsorLabel;
}

+ (double)cellHeightWithModel:(id)arg1;
+ (double)imageHeightWithModel:(id)arg1;
@property(retain, nonatomic) UILabel *sponsorLabel; // @synthesize sponsorLabel=_sponsorLabel;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) JRJAdModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)makeConstraints;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

