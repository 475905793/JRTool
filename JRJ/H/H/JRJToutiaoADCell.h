//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJAdModel, MLLabel, UIImageView, UILabel, UIView;

@interface JRJToutiaoADCell : JRJTableViewCell
{
    JRJAdModel *_model;
    CDUnknownBlockType _tapBlock;
    UIView *_bottomSeparator;
    MLLabel *_titleLabel;
    UILabel *_adLabel;
    UILabel *_sponsorLabel;
    UIImageView *_mainImageView;
    UIImageView *_smallImageView;
    UIView *_imagesContainerView;
    UIImageView *_imageView1;
    UIImageView *_imageView2;
    UIImageView *_imageView3;
}

+ (double)cellHeightWithModel:(id)arg1;
+ (double)gallertyHeightWithModel:(id)arg1;
+ (double)imageHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIImageView *imageView3; // @synthesize imageView3=_imageView3;
@property(retain, nonatomic) UIImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(retain, nonatomic) UIImageView *imageView1; // @synthesize imageView1=_imageView1;
@property(retain, nonatomic) UIView *imagesContainerView; // @synthesize imagesContainerView=_imagesContainerView;
@property(retain, nonatomic) UIImageView *smallImageView; // @synthesize smallImageView=_smallImageView;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(retain, nonatomic) UILabel *sponsorLabel; // @synthesize sponsorLabel=_sponsorLabel;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) MLLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) JRJAdModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)p_layoutWithAdType:(long long)arg1;
- (void)makeConstraints;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

