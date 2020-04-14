//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FTStockInfoDataManager, FTTimelineContainerView, NSArray, NSMutableArray, NSString, NSTimer, UIButton, UILabel;

@interface JRJStockMainControllerPlateAndThreeIndexPopView : UIView
{
    NSArray *_titles;
    unsigned long long _showIndex;
    NSString *_bkCode;
    CDUnknownBlockType _hiddenBlock;
    CDUnknownBlockType _clickedToDetail;
    CDUnknownBlockType _selectedBtnAtIndex;
    CDUnknownBlockType _receiveData;
    UIView *_topView;
    UIView *_bottomView;
    UIButton *_closeBtn;
    UIView *_rightContainer;
    NSMutableArray *_btnArray;
    UILabel *_plateNameLabel;
    UILabel *_currentPriceLabel;
    UILabel *_upDownPriceLabel;
    UILabel *_upDownPercentLabel;
    FTTimelineContainerView *_timeLineView;
    FTStockInfoDataManager *_plateDataSource;
    FTStockInfoDataManager *_shDataSource;
    FTStockInfoDataManager *_szDataSource;
    FTStockInfoDataManager *_chDataSource;
    NSTimer *_plateTimer;
}

+ (long long)getIndexMarketWithIndex:(unsigned long long)arg1;
+ (id)getIndexCodeWithIndex:(unsigned long long)arg1;
+ (id)getShowNameWithIndex:(unsigned long long)arg1;
@property(retain, nonatomic) NSTimer *plateTimer; // @synthesize plateTimer=_plateTimer;
@property(retain, nonatomic) FTStockInfoDataManager *chDataSource; // @synthesize chDataSource=_chDataSource;
@property(retain, nonatomic) FTStockInfoDataManager *szDataSource; // @synthesize szDataSource=_szDataSource;
@property(retain, nonatomic) FTStockInfoDataManager *shDataSource; // @synthesize shDataSource=_shDataSource;
@property(retain, nonatomic) FTStockInfoDataManager *plateDataSource; // @synthesize plateDataSource=_plateDataSource;
@property(retain, nonatomic) FTTimelineContainerView *timeLineView; // @synthesize timeLineView=_timeLineView;
@property(retain, nonatomic) UILabel *upDownPercentLabel; // @synthesize upDownPercentLabel=_upDownPercentLabel;
@property(retain, nonatomic) UILabel *upDownPriceLabel; // @synthesize upDownPriceLabel=_upDownPriceLabel;
@property(retain, nonatomic) UILabel *currentPriceLabel; // @synthesize currentPriceLabel=_currentPriceLabel;
@property(retain, nonatomic) UILabel *plateNameLabel; // @synthesize plateNameLabel=_plateNameLabel;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UIView *rightContainer; // @synthesize rightContainer=_rightContainer;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType receiveData; // @synthesize receiveData=_receiveData;
@property(copy, nonatomic) CDUnknownBlockType selectedBtnAtIndex; // @synthesize selectedBtnAtIndex=_selectedBtnAtIndex;
@property(copy, nonatomic) CDUnknownBlockType clickedToDetail; // @synthesize clickedToDetail=_clickedToDetail;
@property(copy, nonatomic) CDUnknownBlockType hiddenBlock; // @synthesize hiddenBlock=_hiddenBlock;
@property(copy, nonatomic) NSString *bkCode; // @synthesize bkCode=_bkCode;
@property(nonatomic) unsigned long long showIndex; // @synthesize showIndex=_showIndex;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (void)setShowIndexInfo:(unsigned long long)arg1;
- (id)getShowName;
- (void)loadPlateUI;
- (void)setDataSourceStockInfo:(id)arg1;
- (void)fetchPlateData;
- (void)requestPlateData;
- (id)getCurrentDataSource;
- (void)stopIndexDataRequest;
- (void)close:(id)arg1;
- (void)clearButtonSelected;
- (void)setTimeLineViewDataSourceWithIndex:(unsigned long long)arg1;
- (void)clickedBtn:(id)arg1;
- (unsigned long long)getShowIndexWithTitle:(id)arg1;
- (void)resetButtonIndex;
- (void)buildUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 titles:(id)arg2;

@end

