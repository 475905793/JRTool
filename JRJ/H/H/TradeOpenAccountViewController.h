//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

@class JRJTradingCustomerServiceFooterView, NSArray, NSDictionary, PickerBrokerHandler, TradeBindBrokeModel, TradeOpenAccountHeaderView, TradeOpenAccountListHandler, TradePublicHandler;

@interface TradeOpenAccountViewController : JRJListTableViewController
{
    _Bool _isPushVC;
    _Bool _shouldPop;
    TradeBindBrokeModel *_bindBrokeModel;
    TradeOpenAccountHeaderView *_headerView;
    JRJTradingCustomerServiceFooterView *_footerView;
    unsigned long long _tradeType;
    NSDictionary *_banner;
    NSArray *_dataList;
    double _tabHeight;
    PickerBrokerHandler *_pickerBrokerHandler;
    TradeOpenAccountListHandler *_tradeOpenAccountListHandler;
    TradePublicHandler *_tradePublicHandler;
}

@property(retain, nonatomic) TradePublicHandler *tradePublicHandler; // @synthesize tradePublicHandler=_tradePublicHandler;
@property(retain, nonatomic) TradeOpenAccountListHandler *tradeOpenAccountListHandler; // @synthesize tradeOpenAccountListHandler=_tradeOpenAccountListHandler;
@property(retain, nonatomic) PickerBrokerHandler *pickerBrokerHandler; // @synthesize pickerBrokerHandler=_pickerBrokerHandler;
@property(nonatomic) double tabHeight; // @synthesize tabHeight=_tabHeight;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSDictionary *banner; // @synthesize banner=_banner;
@property(nonatomic) unsigned long long tradeType; // @synthesize tradeType=_tradeType;
@property(retain, nonatomic) JRJTradingCustomerServiceFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) TradeOpenAccountHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool shouldPop; // @synthesize shouldPop=_shouldPop;
@property(nonatomic) _Bool isPushVC; // @synthesize isPushVC=_isPushVC;
@property(retain, nonatomic) TradeBindBrokeModel *bindBrokeModel; // @synthesize bindBrokeModel=_bindBrokeModel;
- (void).cxx_destruct;
- (id)title;
- (id)accountModelAtIndex:(long long)arg1;
- (void)updateFooterHeight;
- (void)updateAdBannerHeader;
- (void)startTradingToSafari;
- (void)didClickOpenAccount;
- (void)didClickAdBanner;
- (void)openTradingList;
- (void)handleCellClick:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)loadAdBanner:(CDUnknownBlockType)arg1;
- (void)loadOpenAccountList:(CDUnknownBlockType)arg1;
- (void)sendRequest;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

