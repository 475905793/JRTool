//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GaiNianStockModel : NSObject
{
    NSString *_gaiNianName;
    NSString *_gaiNianCode;
    double _gaiNianChgRadio;
    NSString *_stockName;
    NSString *_stockCode;
    double _lastPrice;
    double _chgRadio;
    double _stockHlp;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) double stockHlp; // @synthesize stockHlp=_stockHlp;
@property(nonatomic) double chgRadio; // @synthesize chgRadio=_chgRadio;
@property(nonatomic) double lastPrice; // @synthesize lastPrice=_lastPrice;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(nonatomic) double gaiNianChgRadio; // @synthesize gaiNianChgRadio=_gaiNianChgRadio;
@property(copy, nonatomic) NSString *gaiNianCode; // @synthesize gaiNianCode=_gaiNianCode;
@property(copy, nonatomic) NSString *gaiNianName; // @synthesize gaiNianName=_gaiNianName;
- (void).cxx_destruct;

@end
