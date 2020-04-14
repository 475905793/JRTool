//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJToutiaoTingModel, MLLabel, UIButton, UILabel, UIView;

@interface JRJToutiaoTingCell : JRJTableViewCell
{
    JRJToutiaoTingModel *_model;
    CDUnknownBlockType _playButtonBlock;
    MLLabel *_titleLabel;
    MLLabel *_contentLabel;
    UILabel *_timeLabel;
    UIButton *_playButton;
    UIView *_bottomSeparator;
}

@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MLLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MLLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType playButtonBlock; // @synthesize playButtonBlock=_playButtonBlock;
@property(retain, nonatomic) JRJToutiaoTingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)didTapPlayButton:(id)arg1;
- (void)makeConstraints;
- (void)setupUI;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
