//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface JRJZSuperMystockListModel : NSObject
{
    NSString *_market;
    double _profit;
    NSString *_stkname;
    NSString *_priceDisp;
    NSNumber *_price;
    NSNumber *_profitRatio;
    NSString *_stkcode;
    long long _signalType;
    NSString *_stktype;
    NSString *_stkid;
}

@property(copy, nonatomic) NSString *stkid; // @synthesize stkid=_stkid;
@property(copy, nonatomic) NSString *stktype; // @synthesize stktype=_stktype;
@property(nonatomic) long long signalType; // @synthesize signalType=_signalType;
@property(copy, nonatomic) NSString *stkcode; // @synthesize stkcode=_stkcode;
@property(retain, nonatomic) NSNumber *profitRatio; // @synthesize profitRatio=_profitRatio;
@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *priceDisp; // @synthesize priceDisp=_priceDisp;
@property(copy, nonatomic) NSString *stkname; // @synthesize stkname=_stkname;
@property(nonatomic) double profit; // @synthesize profit=_profit;
@property(copy, nonatomic) NSString *market; // @synthesize market=_market;
- (void).cxx_destruct;

@end

