//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class TradeOpenAccountModel, UIButton, UIImageView, UILabel, UIView;

@interface TradeOpenAccountCell : JRJTableViewCell
{
    int _stateCode;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UILabel *_markLabel;
    UILabel *_subTitleLabel;
    UIButton *_rightBtnView;
    TradeOpenAccountModel *_model;
    UIView *_lineView;
}

@property(nonatomic) int stateCode; // @synthesize stateCode=_stateCode;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) TradeOpenAccountModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *rightBtnView; // @synthesize rightBtnView=_rightBtnView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (void)handleOpenAccountInfo:(id)arg1;
- (void)setBtnTitle:(id)arg1 OpenAccountType:(int)arg2;
- (void)updateCellWithSource:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
