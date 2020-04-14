//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJToutiaoJiHuiModel, JRJToutiaoJiHuiStockView, MLLabel, NSArray, UICollectionView, UILabel, UIView;

@interface JRJToutiaoJiHuiListCell : JRJTableViewCell
{
    _Bool _isLastRow;
    CDUnknownBlockType _stockBlock;
    JRJToutiaoJiHuiModel *_model;
    MLLabel *_titleLabel;
    MLLabel *_contentLabel;
    UIView *_separator;
    UIView *_footerView;
    UICollectionView *_collectionView;
    UILabel *_stockTitleLabel;
    JRJToutiaoJiHuiStockView *_stockView1;
    JRJToutiaoJiHuiStockView *_stockView2;
    JRJToutiaoJiHuiStockView *_stockView3;
    JRJToutiaoJiHuiStockView *_stockView4;
    NSArray *_stockViews;
}

@property(retain, nonatomic) NSArray *stockViews; // @synthesize stockViews=_stockViews;
@property(retain, nonatomic) JRJToutiaoJiHuiStockView *stockView4; // @synthesize stockView4=_stockView4;
@property(retain, nonatomic) JRJToutiaoJiHuiStockView *stockView3; // @synthesize stockView3=_stockView3;
@property(retain, nonatomic) JRJToutiaoJiHuiStockView *stockView2; // @synthesize stockView2=_stockView2;
@property(retain, nonatomic) JRJToutiaoJiHuiStockView *stockView1; // @synthesize stockView1=_stockView1;
@property(retain, nonatomic) UILabel *stockTitleLabel; // @synthesize stockTitleLabel=_stockTitleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MLLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MLLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JRJToutiaoJiHuiModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isLastRow; // @synthesize isLastRow=_isLastRow;
@property(copy, nonatomic) CDUnknownBlockType stockBlock; // @synthesize stockBlock=_stockBlock;
- (void).cxx_destruct;
- (void)p_setTitle:(id)arg1 strength:(long long)arg2;
- (id)p_makeStockView;
- (void)p_setStocks:(id)arg1;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

