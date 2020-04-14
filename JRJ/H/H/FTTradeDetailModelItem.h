//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTTradeDetailItem-Protocol.h"

@class NSAttributedString, NSString;

@interface FTTradeDetailModelItem : NSObject <FTTradeDetailItem>
{
    int _nFlag;
    long long _tradeType;
    NSString *_tradeTime;
    long long _tradeNum;
    double _tradePx;
    long long _nSetSeqID;
    long long _volumnValue;
    long long _stockType;
    long long _volumn;
    long long _order;
    NSString *_tradeDetailTimeStr;
    NSString *_tradeDetailPriceStr;
    NSAttributedString *_tradeDetailVolumeStr;
    NSString *_tradeTypeStr;
}

+ (id)tradeDetailWithDic:(id)arg1;
+ (id)tradeDetailWithPB:(id)arg1;
@property(retain, nonatomic) NSString *tradeTypeStr; // @synthesize tradeTypeStr=_tradeTypeStr;
@property(retain, nonatomic) NSAttributedString *tradeDetailVolumeStr; // @synthesize tradeDetailVolumeStr=_tradeDetailVolumeStr;
@property(retain, nonatomic) NSString *tradeDetailPriceStr; // @synthesize tradeDetailPriceStr=_tradeDetailPriceStr;
@property(retain, nonatomic) NSString *tradeDetailTimeStr; // @synthesize tradeDetailTimeStr=_tradeDetailTimeStr;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(nonatomic) int nFlag; // @synthesize nFlag=_nFlag;
@property(nonatomic) long long volumn; // @synthesize volumn=_volumn;
@property(nonatomic) long long stockType; // @synthesize stockType=_stockType;
@property(nonatomic) long long volumnValue; // @synthesize volumnValue=_volumnValue;
@property(nonatomic) long long nSetSeqID; // @synthesize nSetSeqID=_nSetSeqID;
@property(nonatomic) double tradePx; // @synthesize tradePx=_tradePx;
@property(nonatomic) long long tradeNum; // @synthesize tradeNum=_tradeNum;
@property(copy, nonatomic) NSString *tradeTime; // @synthesize tradeTime=_tradeTime;
@property(nonatomic) long long tradeType; // @synthesize tradeType=_tradeType;
- (void).cxx_destruct;
- (void)updateShowStr;
- (id)getTypeStrByFTTradeDetailType1:(long long)arg1;
- (id)tradeDetailVolume;
- (id)tradeDetailPrice;
- (id)tradeDetailTime;
- (id)getTypeStrByFTTradeDetailType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

