//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FTBuySellFiveModelItem : NSObject
{
    long long _tradeType;
    NSString *_tradeTime;
    long long _tradeNum;
    double _tradePx;
}

+ (id)buySellFiveWithDic:(id)arg1;
+ (id)buySellFiveWithPBModel:(id)arg1;
@property(nonatomic) double tradePx; // @synthesize tradePx=_tradePx;
@property(nonatomic) long long tradeNum; // @synthesize tradeNum=_tradeNum;
@property(retain, nonatomic) NSString *tradeTime; // @synthesize tradeTime=_tradeTime;
@property(nonatomic) long long tradeType; // @synthesize tradeType=_tradeType;
- (void).cxx_destruct;

@end

