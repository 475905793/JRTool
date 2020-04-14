//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IALiveModel, UIImageView, UILabel, UIView;

@interface InvestAdviserLiveCell : UICollectionViewCell
{
    long long _bgIndex;
    IALiveModel *_model;
    CDUnknownBlockType _block;
    UIImageView *_bgImageView;
    UILabel *_titleLabel;
    UIImageView *_headerImageView;
    UILabel *_nameLabel;
    UIView *_bgLivingView;
    UIView *_redLine;
    UILabel *_preLabel;
    UIView *_bgTextAndIcon;
    UILabel *_liveStateLabel;
    UIImageView *_liveIcon;
}

@property(retain, nonatomic) UIImageView *liveIcon; // @synthesize liveIcon=_liveIcon;
@property(retain, nonatomic) UILabel *liveStateLabel; // @synthesize liveStateLabel=_liveStateLabel;
@property(retain, nonatomic) UIView *bgTextAndIcon; // @synthesize bgTextAndIcon=_bgTextAndIcon;
@property(retain, nonatomic) UILabel *preLabel; // @synthesize preLabel=_preLabel;
@property(retain, nonatomic) UIView *redLine; // @synthesize redLine=_redLine;
@property(retain, nonatomic) UIView *bgLivingView; // @synthesize bgLivingView=_bgLivingView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) IALiveModel *model; // @synthesize model=_model;
@property(nonatomic) long long bgIndex; // @synthesize bgIndex=_bgIndex;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

