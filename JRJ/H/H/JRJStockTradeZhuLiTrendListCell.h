//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class UIImageView, UILabel;

@interface JRJStockTradeZhuLiTrendListCell : JRJTableViewCell
{
    UILabel *_timeLabel;
    UILabel *_titleLabel1;
    UILabel *_titleLabel2;
    UILabel *_titleLabel3;
    long long _iconType;
    UIImageView *_typeIcon;
}

@property(retain, nonatomic) UIImageView *typeIcon; // @synthesize typeIcon=_typeIcon;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) UILabel *titleLabel3; // @synthesize titleLabel3=_titleLabel3;
@property(retain, nonatomic) UILabel *titleLabel2; // @synthesize titleLabel2=_titleLabel2;
@property(retain, nonatomic) UILabel *titleLabel1; // @synthesize titleLabel1=_titleLabel1;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

