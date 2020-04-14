//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJToutiaoGongGaoModel, JRJToutiaoStockView, MLLabel, UILabel, UIView;

@interface JRJToutiaoGongGaoCell : JRJTableViewCell
{
    JRJToutiaoGongGaoModel *_model;
    CDUnknownBlockType _stockBlock;
    JRJToutiaoStockView *_stockView;
    MLLabel *_titleLabel;
    UILabel *_profitLabel;
    MLLabel *_contentLabel;
    UIView *_bottomSeparator;
}

@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) MLLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *profitLabel; // @synthesize profitLabel=_profitLabel;
@property(retain, nonatomic) MLLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JRJToutiaoStockView *stockView; // @synthesize stockView=_stockView;
@property(copy, nonatomic) CDUnknownBlockType stockBlock; // @synthesize stockBlock=_stockBlock;
@property(retain, nonatomic) JRJToutiaoGongGaoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)makeConstraints;
- (void)setupUI;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

