//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser12JRJBaseModel.h"

@class NSNumber, NSString;

@interface _TtC16JRJInvestAdviser23JRJHistoryHotStockModel : _TtC16JRJInvestAdviser12JRJBaseModel
{
    // Error parsing type: , name: buyContent
    // Error parsing type: , name: buyDate
    // Error parsing type: , name: buyPrice
    // Error parsing type: , name: holdPeriod
    // Error parsing type: , name: market
    // Error parsing type: , name: profitRatio
    // Error parsing type: , name: sellDate
    // Error parsing type: , name: sellPrice
    // Error parsing type: , name: stkcode
    // Error parsing type: , name: stkid
    // Error parsing type: , name: stkname
    // Error parsing type: , name: stktype
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *stktype;
@property(nonatomic, copy) NSString *stkname;
@property(nonatomic, copy) NSString *stkid;
@property(nonatomic, copy) NSString *stkcode;
@property(nonatomic, retain) NSNumber *sellPrice; // @synthesize sellPrice;
@property(nonatomic, copy) NSString *sellDate;
@property(nonatomic, retain) NSNumber *profitRatio; // @synthesize profitRatio;
@property(nonatomic, copy) NSString *market;
@property(nonatomic, retain) NSNumber *holdPeriod; // @synthesize holdPeriod;
@property(nonatomic, retain) NSNumber *buyPrice; // @synthesize buyPrice;
@property(nonatomic, copy) NSString *buyDate;
@property(nonatomic, copy) NSString *buyContent;

@end

