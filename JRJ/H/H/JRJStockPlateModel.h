//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJStockPlateModel : NSObject
{
    NSString *_platName;
    NSString *_platCode;
    NSString *_platType;
    NSString *_advanceDeclineRatio;
    NSString *_realReason;
    NSString *_stockName;
    NSString *_stockCode;
}

@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *realReason; // @synthesize realReason=_realReason;
@property(copy, nonatomic) NSString *advanceDeclineRatio; // @synthesize advanceDeclineRatio=_advanceDeclineRatio;
@property(copy, nonatomic) NSString *platType; // @synthesize platType=_platType;
@property(copy, nonatomic) NSString *platCode; // @synthesize platCode=_platCode;
@property(copy, nonatomic) NSString *platName; // @synthesize platName=_platName;
- (void).cxx_destruct;

@end

