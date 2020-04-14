//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class TradeBindBrokeModel, UIButton, UIImageView, UILabel, UIView;

@interface JRJTradingAccountListCell : JRJTableViewCell
{
    CDUnknownBlockType _didClickRemoveBindAccountBlock;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UIButton *_tradingButton;
    UIView *_lineView;
    UIButton *_removeBindButton;
    TradeBindBrokeModel *_currentModel;
}

@property(retain, nonatomic) TradeBindBrokeModel *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) UIButton *removeBindButton; // @synthesize removeBindButton=_removeBindButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *tradingButton; // @synthesize tradingButton=_tradingButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType didClickRemoveBindAccountBlock; // @synthesize didClickRemoveBindAccountBlock=_didClickRemoveBindAccountBlock;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)updateCellWithSource:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

