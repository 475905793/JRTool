//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewModel.h"

#import "JSKRequestDelegate-Protocol.h"

@class JSKRequest, JSKStock, NSArray, NSMutableArray, NSNumber, NSString;

@interface JRJStockTradeZhuLiTrendListViewModel : MMViewModel <JSKRequestDelegate>
{
    JSKStock *_stock;
    CDUnknownBlockType _didFinshedTradeZhuLiTrendRequest;
    long long _filterType;
    NSMutableArray *_cacheList;
    NSArray *_list;
    JSKRequest *_firstRequest;
    NSNumber *_lastRecordIndex;
}

@property(retain, nonatomic) NSNumber *lastRecordIndex; // @synthesize lastRecordIndex=_lastRecordIndex;
@property(retain, nonatomic) JSKRequest *firstRequest; // @synthesize firstRequest=_firstRequest;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSMutableArray *cacheList; // @synthesize cacheList=_cacheList;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(copy, nonatomic) CDUnknownBlockType didFinshedTradeZhuLiTrendRequest; // @synthesize didFinshedTradeZhuLiTrendRequest=_didFinshedTradeZhuLiTrendRequest;
@property(retain, nonatomic) JSKStock *stock; // @synthesize stock=_stock;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)sortTradeZhuLiTrendList;
- (id)modelAtIndex:(long long)arg1;
- (void)filterTradeZhuLiTrendList;
- (id)tradePriceAtIndex:(long long)arg1;
- (id)tradeMoneyAtIndex:(long long)arg1;
- (id)tradeNumAtIndex:(long long)arg1;
- (long long)tradeTypeAtIndex:(long long)arg1;
- (id)tradeTimeAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (void)loadTradeZhuLiTrendList;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
