//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TreemapStockAbnormalSignalModel : NSObject
{
    NSString *_stockCode;
    NSString *_stockMarket;
    NSString *_stockName;
    NSString *_price;
    NSString *_time;
    NSString *_advanceDeclineRatio;
    NSString *_signalName;
    NSString *_signalCode;
    NSString *_lookRise;
}

@property(copy, nonatomic) NSString *lookRise; // @synthesize lookRise=_lookRise;
@property(copy, nonatomic) NSString *signalCode; // @synthesize signalCode=_signalCode;
@property(copy, nonatomic) NSString *signalName; // @synthesize signalName=_signalName;
@property(copy, nonatomic) NSString *advanceDeclineRatio; // @synthesize advanceDeclineRatio=_advanceDeclineRatio;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *stockMarket; // @synthesize stockMarket=_stockMarket;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
- (void).cxx_destruct;

@end

