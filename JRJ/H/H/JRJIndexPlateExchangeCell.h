//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSDictionary, NSString, UIImageView, UILabel, UIView;

@interface JRJIndexPlateExchangeCell : JRJTableViewCell
{
    UILabel *_timeLabel;
    UILabel *_plateNameLabel;
    UIImageView *_redCircleImageView;
    UIView *_firstBackView;
    UILabel *_firstNameLabel;
    UILabel *_firstRateLabel;
    UIView *_secondBackView;
    UILabel *_secondNameLabel;
    UILabel *_secondRateLabel;
    UIView *_thirdBackView;
    UILabel *_thirdNameLabel;
    UILabel *_thirdRateLabel;
    UIView *_forthBackView;
    UILabel *_forthNameLabel;
    UILabel *_forthRateLabel;
    NSString *_firstStockCode;
    NSString *_secondStockCode;
    NSString *_thirdStockCode;
    NSString *_forthStockCode;
    UIView *_bottomBackView;
    NSDictionary *_myDic;
    CDUnknownBlockType _pushBlock;
    CDUnknownBlockType _pushPlateBlock;
}

@property(copy) CDUnknownBlockType pushPlateBlock; // @synthesize pushPlateBlock=_pushPlateBlock;
@property(copy) CDUnknownBlockType pushBlock; // @synthesize pushBlock=_pushBlock;
@property(retain, nonatomic) NSDictionary *myDic; // @synthesize myDic=_myDic;
@property(nonatomic) __weak UIView *bottomBackView; // @synthesize bottomBackView=_bottomBackView;
@property(retain, nonatomic) NSString *forthStockCode; // @synthesize forthStockCode=_forthStockCode;
@property(retain, nonatomic) NSString *thirdStockCode; // @synthesize thirdStockCode=_thirdStockCode;
@property(retain, nonatomic) NSString *secondStockCode; // @synthesize secondStockCode=_secondStockCode;
@property(retain, nonatomic) NSString *firstStockCode; // @synthesize firstStockCode=_firstStockCode;
@property(nonatomic) __weak UILabel *forthRateLabel; // @synthesize forthRateLabel=_forthRateLabel;
@property(nonatomic) __weak UILabel *forthNameLabel; // @synthesize forthNameLabel=_forthNameLabel;
@property(nonatomic) __weak UIView *forthBackView; // @synthesize forthBackView=_forthBackView;
@property(nonatomic) __weak UILabel *thirdRateLabel; // @synthesize thirdRateLabel=_thirdRateLabel;
@property(nonatomic) __weak UILabel *thirdNameLabel; // @synthesize thirdNameLabel=_thirdNameLabel;
@property(nonatomic) __weak UIView *thirdBackView; // @synthesize thirdBackView=_thirdBackView;
@property(nonatomic) __weak UILabel *secondRateLabel; // @synthesize secondRateLabel=_secondRateLabel;
@property(nonatomic) __weak UILabel *secondNameLabel; // @synthesize secondNameLabel=_secondNameLabel;
@property(nonatomic) __weak UIView *secondBackView; // @synthesize secondBackView=_secondBackView;
@property(nonatomic) __weak UILabel *firstRateLabel; // @synthesize firstRateLabel=_firstRateLabel;
@property(nonatomic) __weak UILabel *firstNameLabel; // @synthesize firstNameLabel=_firstNameLabel;
@property(nonatomic) __weak UIView *firstBackView; // @synthesize firstBackView=_firstBackView;
@property(nonatomic) __weak UIImageView *redCircleImageView; // @synthesize redCircleImageView=_redCircleImageView;
@property(nonatomic) __weak UILabel *plateNameLabel; // @synthesize plateNameLabel=_plateNameLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)pushPlate;
- (void)tap4;
- (void)tap3;
- (void)tap2;
- (void)tap1;
- (id)rateToString:(id)arg1;
- (id)rateColor:(id)arg1;
- (void)configCellWithDic:(id)arg1 isTop:(_Bool)arg2;
- (void)awakeFromNib;

@end
