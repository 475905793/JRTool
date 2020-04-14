//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IAHomeZhiboRecBubbleView, IALiveModel, MLLabel, UIButton, UIImageView, UILabel;

@interface IAHomeZhiboRecView : UIView
{
    IALiveModel *_model;
    CDUnknownBlockType _tapContentBlock;
    CDUnknownBlockType _tapAdvierBlock;
    UIImageView *_avatarImageView;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    MLLabel *_titleLabel;
    IAHomeZhiboRecBubbleView *_bubbleView;
    UIButton *_adviserMaskButton;
    UIButton *_contentMaskButton;
}

@property(retain, nonatomic) UIButton *contentMaskButton; // @synthesize contentMaskButton=_contentMaskButton;
@property(retain, nonatomic) UIButton *adviserMaskButton; // @synthesize adviserMaskButton=_adviserMaskButton;
@property(retain, nonatomic) IAHomeZhiboRecBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) MLLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) CDUnknownBlockType tapAdvierBlock; // @synthesize tapAdvierBlock=_tapAdvierBlock;
@property(copy, nonatomic) CDUnknownBlockType tapContentBlock; // @synthesize tapContentBlock=_tapContentBlock;
@property(retain, nonatomic) IALiveModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)didTapContent:(id)arg1;
- (void)didTapAdviser:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
