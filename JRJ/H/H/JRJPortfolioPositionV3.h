//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface JRJPortfolioPositionV3 : MTLModel <MTLJSONSerializing>
{
    NSString *_stockCode;
    NSString *_stockName;
    NSString *_stockType;
    NSString *_marketType;
    NSNumber *_costPrice;
    NSNumber *_currentPrince;
    NSNumber *_costBalance;
    NSNumber *_position;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(retain, nonatomic) NSNumber *costBalance; // @synthesize costBalance=_costBalance;
@property(retain, nonatomic) NSNumber *currentPrince; // @synthesize currentPrince=_currentPrince;
@property(retain, nonatomic) NSNumber *costPrice; // @synthesize costPrice=_costPrice;
@property(retain, nonatomic) NSString *marketType; // @synthesize marketType=_marketType;
@property(retain, nonatomic) NSString *stockType; // @synthesize stockType=_stockType;
@property(retain, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(retain, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

