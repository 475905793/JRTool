//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface JRJQueryApplyListHistoryModel : NSObject
{
    NSString *_stockCode;
    NSString *_stockName;
    NSNumber *_issPrice;
    NSString *_market;
    NSString *_ipoMkt;
    NSString *_buyCode;
    long long _applyAmount;
    long long _assignSnAmount;
    NSString *_applyDate;
    NSString *_startAssignSn;
    long long _appliedSuccessAmount;
    long long _appliedSuccessStockAmount;
    NSNumber *_shouldPayment;
    NSString *_appliedStatus;
    NSString *_payStatus;
}

@property(copy, nonatomic) NSString *payStatus; // @synthesize payStatus=_payStatus;
@property(copy, nonatomic) NSString *appliedStatus; // @synthesize appliedStatus=_appliedStatus;
@property(retain, nonatomic) NSNumber *shouldPayment; // @synthesize shouldPayment=_shouldPayment;
@property(nonatomic) long long appliedSuccessStockAmount; // @synthesize appliedSuccessStockAmount=_appliedSuccessStockAmount;
@property(nonatomic) long long appliedSuccessAmount; // @synthesize appliedSuccessAmount=_appliedSuccessAmount;
@property(copy, nonatomic) NSString *startAssignSn; // @synthesize startAssignSn=_startAssignSn;
@property(copy, nonatomic) NSString *applyDate; // @synthesize applyDate=_applyDate;
@property(nonatomic) long long assignSnAmount; // @synthesize assignSnAmount=_assignSnAmount;
@property(nonatomic) long long applyAmount; // @synthesize applyAmount=_applyAmount;
@property(copy, nonatomic) NSString *buyCode; // @synthesize buyCode=_buyCode;
@property(copy, nonatomic) NSString *ipoMkt; // @synthesize ipoMkt=_ipoMkt;
@property(copy, nonatomic) NSString *market; // @synthesize market=_market;
@property(retain, nonatomic) NSNumber *issPrice; // @synthesize issPrice=_issPrice;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
- (void).cxx_destruct;

@end
