//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton, UIImageView, UILabel, UIView, ZuanQianStatusView;

@interface PlateMainListHeaderView : UITableViewHeaderFooterView
{
    _Bool _expanded;
    CDUnknownBlockType _moreButtonPressedBlock;
    CDUnknownBlockType _backgroundPressedBlock;
    CDUnknownBlockType _otherPressedBlock;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_imageMoreArrow;
    UILabel *_moreLabel;
    UIButton *_moreButton;
    UIButton *_rowClickButton;
    UIView *_backView;
    ZuanQianStatusView *_zuanQianStatusView;
    UIButton *_otherButton;
}

@property(retain, nonatomic) UIButton *otherButton; // @synthesize otherButton=_otherButton;
@property(retain, nonatomic) ZuanQianStatusView *zuanQianStatusView; // @synthesize zuanQianStatusView=_zuanQianStatusView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIButton *rowClickButton; // @synthesize rowClickButton=_rowClickButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIImageView *imageMoreArrow; // @synthesize imageMoreArrow=_imageMoreArrow;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType otherPressedBlock; // @synthesize otherPressedBlock=_otherPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType backgroundPressedBlock; // @synthesize backgroundPressedBlock=_backgroundPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType moreButtonPressedBlock; // @synthesize moreButtonPressedBlock=_moreButtonPressedBlock;
@property(nonatomic, getter=isExpended) _Bool expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
- (void)setLabelIsCenterY:(_Bool)arg1;
- (void)showMore:(_Bool)arg1;
- (void)setZuanQianStatus:(unsigned long long)arg1;
- (void)showZuanQianView:(_Bool)arg1;
- (void)showOtherButton:(_Bool)arg1;
- (void)setLeftSubText:(id)arg1;
- (void)setLeftText:(id)arg1;
- (void)zhangTingPressed:(id)arg1;
- (void)backgroundPressed:(id)arg1;
- (void)moreButtonPressed:(id)arg1;
- (void)buildUI;
- (void)layoutPageSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

