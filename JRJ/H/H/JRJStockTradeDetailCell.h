//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface JRJStockTradeDetailCell : UITableViewCell
{
    double _yesterdayClosed;
    UILabel *_timeLabel;
    UIView *_priceContainer;
    UILabel *_priceLabel;
    UILabel *_arrowLabel;
    UILabel *_volumeLabel;
    UILabel *_volumeMoneyLabel;
    UIImageView *_bottomLine;
}

@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *volumeMoneyLabel; // @synthesize volumeMoneyLabel=_volumeMoneyLabel;
@property(retain, nonatomic) UILabel *volumeLabel; // @synthesize volumeLabel=_volumeLabel;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *priceContainer; // @synthesize priceContainer=_priceContainer;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) double yesterdayClosed; // @synthesize yesterdayClosed=_yesterdayClosed;
- (void).cxx_destruct;
- (id)convertTime:(id)arg1;
- (void)setModel:(id)arg1 beforeModel:(id)arg2;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
