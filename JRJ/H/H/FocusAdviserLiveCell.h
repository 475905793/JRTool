//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FocusAdviserOpinionBaseCell.h"

@class UIImageView, UILabel, UIView;

@interface FocusAdviserLiveCell : FocusAdviserOpinionBaseCell
{
    UILabel *_titleLabel;
    UIImageView *_imgItem;
    UILabel *_lbEnter;
    UIView *_backView;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UILabel *lbEnter; // @synthesize lbEnter=_lbEnter;
@property(retain, nonatomic) UIImageView *imgItem; // @synthesize imgItem=_imgItem;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateCellWithSource:(id)arg1;
- (id)getTypeString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
