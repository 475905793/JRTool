//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UILabel;

@interface LeiJiShouYiLvView : UIView
{
    NSString *_stockCode;
    NSString *_stockName;
    _Bool _isDataBind;
    double _originX;
    double _originY;
    double _originTailSpace;
    UILabel *_limitUpLabel;
    UILabel *_zeroLabel;
    UILabel *_limitDownLabel;
    NSMutableArray *_pointsRed;
    NSMutableArray *_pointsBlue;
    UILabel *bigTitleLabel;
    UILabel *stockNameLabel;
    UILabel *indexNameLabel;
    NSMutableArray *_dateArray;
    double _maxUpPercent;
}

- (void).cxx_destruct;
- (void)bindDataWithDic:(id)arg1;
- (void)requestData;
- (void)requestDataWithStockCode:(id)arg1 stockName:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end
