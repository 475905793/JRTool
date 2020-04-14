//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface JRJIndexCloudView : UIView
{
    _Bool _indexEnabled;
    CDUnknownBlockType _didClickIndexBlock;
    CDUnknownBlockType _didClickCloudViewBlock;
    long long _hsIndex;
    UIView *_indexView;
    UILabel *_indexNameLabel;
    UILabel *_indexPriceLabel;
    UILabel *_indexIncomeRateLabel;
    UILabel *_indexCoverLabel;
    UIImageView *_arrowImageView;
    UIButton *_indexButton;
    UIView *_lineView;
    UIButton *_cloudButton;
    UIImageView *_cloudIcon;
    UILabel *_cloudTitle;
}

@property(retain, nonatomic) UILabel *cloudTitle; // @synthesize cloudTitle=_cloudTitle;
@property(retain, nonatomic) UIImageView *cloudIcon; // @synthesize cloudIcon=_cloudIcon;
@property(retain, nonatomic) UIButton *cloudButton; // @synthesize cloudButton=_cloudButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *indexButton; // @synthesize indexButton=_indexButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *indexCoverLabel; // @synthesize indexCoverLabel=_indexCoverLabel;
@property(retain, nonatomic) UILabel *indexIncomeRateLabel; // @synthesize indexIncomeRateLabel=_indexIncomeRateLabel;
@property(retain, nonatomic) UILabel *indexPriceLabel; // @synthesize indexPriceLabel=_indexPriceLabel;
@property(retain, nonatomic) UILabel *indexNameLabel; // @synthesize indexNameLabel=_indexNameLabel;
@property(retain, nonatomic) UIView *indexView; // @synthesize indexView=_indexView;
@property(nonatomic) long long hsIndex; // @synthesize hsIndex=_hsIndex;
@property(copy, nonatomic) CDUnknownBlockType didClickCloudViewBlock; // @synthesize didClickCloudViewBlock=_didClickCloudViewBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickIndexBlock; // @synthesize didClickIndexBlock=_didClickIndexBlock;
@property(nonatomic) _Bool indexEnabled; // @synthesize indexEnabled=_indexEnabled;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)didPressedCloudButton;
- (void)didPressedIndexButton:(id)arg1;
- (void)setOpenStatus:(_Bool)arg1;
- (void)updateIndexDataWithIndex:(long long)arg1 price:(float)arg2 changeAmount:(float)arg3 changeRate:(float)arg4;
- (void)updateIndexDataWithChange:(double)arg1 withChangeRatio:(double)arg2;
- (void)updateIndexDataWithIndex:(long long)arg1 withLastPrice:(double)arg2 withYestdayPrice:(double)arg3;
- (long long)getIndexByShowIndex:(unsigned long long)arg1;
- (void)setTypeByShowIndex:(unsigned long long)arg1;
- (void)setIndexPriceInfoWithShowIndex:(unsigned long long)arg1 withLastPrice:(double)arg2 withYestdayPrice:(double)arg3;
- (id)init;

@end

