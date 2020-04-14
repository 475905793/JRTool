//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MLLabel, UIImageView, UILabel;

@interface IAHomeVideoItemCell : UICollectionViewCell
{
    id _model;
    UIImageView *_thumbImageView;
    UIImageView *_playImageView;
    MLLabel *_titleLabel;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIImageView *_statusImageView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) MLLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)commonInit;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

