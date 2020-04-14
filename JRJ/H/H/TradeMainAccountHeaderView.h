//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, TradeAccountBaseInfoView, TradeFundInfoRepaceView, TradeFundInfoView, TradePortalCollectionView;

@interface TradeMainAccountHeaderView : UIView
{
    TradeAccountBaseInfoView *_topBaseInfoView;
    TradeFundInfoView *_midFundView;
    TradeFundInfoRepaceView *_midFundReplaceView;
    TradePortalCollectionView *_bottomCollectionView;
    CDUnknownBlockType _topBlock;
    CDUnknownBlockType _midLoginBlock;
    CDUnknownBlockType _bindAccoutBlock;
    CDUnknownBlockType _bottomBlock;
    NSArray *_bottomCollectionDataArr;
}

@property(retain, nonatomic) NSArray *bottomCollectionDataArr; // @synthesize bottomCollectionDataArr=_bottomCollectionDataArr;
@property(copy, nonatomic) CDUnknownBlockType bottomBlock; // @synthesize bottomBlock=_bottomBlock;
@property(copy, nonatomic) CDUnknownBlockType bindAccoutBlock; // @synthesize bindAccoutBlock=_bindAccoutBlock;
@property(copy, nonatomic) CDUnknownBlockType midLoginBlock; // @synthesize midLoginBlock=_midLoginBlock;
@property(copy, nonatomic) CDUnknownBlockType topBlock; // @synthesize topBlock=_topBlock;
@property(retain, nonatomic) TradePortalCollectionView *bottomCollectionView; // @synthesize bottomCollectionView=_bottomCollectionView;
@property(retain, nonatomic) TradeFundInfoRepaceView *midFundReplaceView; // @synthesize midFundReplaceView=_midFundReplaceView;
@property(retain, nonatomic) TradeFundInfoView *midFundView; // @synthesize midFundView=_midFundView;
@property(retain, nonatomic) TradeAccountBaseInfoView *topBaseInfoView; // @synthesize topBaseInfoView=_topBaseInfoView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)resetMidData;
- (void)replaceMidViewWithModel:(id)arg1 showView:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 defaultPortalArr:(id)arg2;

@end

