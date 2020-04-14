//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSArray, NSString, P_JRJDiscoverStockItem, UIImageView, UILabel, UIView;

@interface JRJDiscoverStrategyFilterStockCell : JRJTableViewCell
{
    _Bool _canShowStockDetail;
    NSArray *_stocks;
    NSString *_imgUrl;
    NSString *_strategyName;
    NSString *_strategyDesc;
    long long _currentIndex;
    CDUnknownBlockType _didClickStockItemBlock;
    UIImageView *_markIconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_stockView;
    P_JRJDiscoverStockItem *_leftStockItem;
    P_JRJDiscoverStockItem *_rightStockItem;
    UILabel *_noneStockLabel;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *noneStockLabel; // @synthesize noneStockLabel=_noneStockLabel;
@property(retain, nonatomic) P_JRJDiscoverStockItem *rightStockItem; // @synthesize rightStockItem=_rightStockItem;
@property(retain, nonatomic) P_JRJDiscoverStockItem *leftStockItem; // @synthesize leftStockItem=_leftStockItem;
@property(retain, nonatomic) UIView *stockView; // @synthesize stockView=_stockView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *markIconImageView; // @synthesize markIconImageView=_markIconImageView;
@property(copy, nonatomic) CDUnknownBlockType didClickStockItemBlock; // @synthesize didClickStockItemBlock=_didClickStockItemBlock;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSString *strategyDesc; // @synthesize strategyDesc=_strategyDesc;
@property(copy, nonatomic) NSString *strategyName; // @synthesize strategyName=_strategyName;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSArray *stocks; // @synthesize stocks=_stocks;
@property(nonatomic) _Bool canShowStockDetail; // @synthesize canShowStockDetail=_canShowStockDetail;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (id)updateStockIncomeRate:(id)arg1;
- (void)didPressedStockRightItem;
- (void)didPressedStockLetfItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
