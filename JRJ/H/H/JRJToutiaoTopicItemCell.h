//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "JRJVerticalBannerDataSource-Protocol.h"
#import "JRJVerticalBannerDelegate-Protocol.h"

@class JRJShadowView, JRJToutiaoFeedModel, JRJVerticalBanner, NSArray, NSString, UIButton, UIImageView, UILabel;

@interface JRJToutiaoTopicItemCell : UICollectionViewCell <JRJVerticalBannerDelegate, JRJVerticalBannerDataSource>
{
    JRJToutiaoFeedModel *_model;
    UILabel *_titleLabel;
    UIButton *_enterButton;
    UILabel *_countLabel;
    JRJVerticalBanner *_banner;
    JRJShadowView *_shadowView;
    UIImageView *_iconImageView;
    NSArray *_comments;
}

@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) JRJShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) JRJVerticalBanner *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIButton *enterButton; // @synthesize enterButton=_enterButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JRJToutiaoFeedModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)banner:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInBanner:(id)arg1;
- (id)p_makeCommentViewWithComment1:(id)arg1 comment2:(id)arg2;
- (id)p_makeCommentLabel;
- (id)p_makeAvatarImageView;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
