//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

#import "JSKRequestDelegate-Protocol.h"
#import "SubmitInfoViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BaseWebViewController, CustomIOS7AlertView, JRJReverseReposMainVC, JRJTradeBuyAndSellHandler, JRJTradeBuyAndSellRiskInfoModel, JRJTradeBuyOrSellHeaderView, JRJTradeStockCodeEnterModel, JSKSocketClient, JSKStock, NSString, SASnapShotHandler, SearchViewController, TradeEmptyView, TradeFundInfoModel, TradeMainAccoutHandler, TradePublicHandler;

@interface JRJTradeBuyOrSellController : KKTableViewController <UITableViewDelegate, UITableViewDataSource, SubmitInfoViewDelegate, JSKRequestDelegate>
{
    _Bool _isSubmitBoxShowing;
    _Bool _titleIsSelect;
    int _type;
    NSString *_stockCode;
    NSString *_exchangeType;
    double _stockPriceValue;
    JRJTradeBuyOrSellHeaderView *_headerView;
    SearchViewController *_searchViewController;
    JRJTradeBuyAndSellHandler *_buySellHandler;
    SASnapShotHandler *_snapShotHandler;
    TradeMainAccoutHandler *_tradeMainAccoutHandler;
    TradePublicHandler *_tradePublicHandler;
    JRJTradeStockCodeEnterModel *_codeEnterModel;
    TradeFundInfoModel *_fundInfoModel;
    BaseWebViewController *_webHT;
    CustomIOS7AlertView *_customAlertView;
    TradeEmptyView *_emptyView;
    JRJReverseReposMainVC *_reverseReposVC;
    JRJTradeBuyAndSellRiskInfoModel *_buyRiskInfoModel;
    NSString *_stockName;
    JSKSocketClient *_client;
    JSKStock *_stock;
    JRJTradeStockCodeEnterModel *_selStockModel;
}

@property(retain, nonatomic) JRJTradeStockCodeEnterModel *selStockModel; // @synthesize selStockModel=_selStockModel;
@property(retain, nonatomic) JSKStock *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) JSKSocketClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(retain, nonatomic) JRJTradeBuyAndSellRiskInfoModel *buyRiskInfoModel; // @synthesize buyRiskInfoModel=_buyRiskInfoModel;
@property(nonatomic) _Bool titleIsSelect; // @synthesize titleIsSelect=_titleIsSelect;
@property(retain, nonatomic) JRJReverseReposMainVC *reverseReposVC; // @synthesize reverseReposVC=_reverseReposVC;
@property(retain, nonatomic) TradeEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool isSubmitBoxShowing; // @synthesize isSubmitBoxShowing=_isSubmitBoxShowing;
@property(nonatomic) __weak CustomIOS7AlertView *customAlertView; // @synthesize customAlertView=_customAlertView;
@property(retain, nonatomic) BaseWebViewController *webHT; // @synthesize webHT=_webHT;
@property(retain, nonatomic) TradeFundInfoModel *fundInfoModel; // @synthesize fundInfoModel=_fundInfoModel;
@property(retain, nonatomic) JRJTradeStockCodeEnterModel *codeEnterModel; // @synthesize codeEnterModel=_codeEnterModel;
@property(retain, nonatomic) TradePublicHandler *tradePublicHandler; // @synthesize tradePublicHandler=_tradePublicHandler;
@property(retain, nonatomic) TradeMainAccoutHandler *tradeMainAccoutHandler; // @synthesize tradeMainAccoutHandler=_tradeMainAccoutHandler;
@property(retain, nonatomic) SASnapShotHandler *snapShotHandler; // @synthesize snapShotHandler=_snapShotHandler;
@property(retain, nonatomic) JRJTradeBuyAndSellHandler *buySellHandler; // @synthesize buySellHandler=_buySellHandler;
@property(retain, nonatomic) SearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) JRJTradeBuyOrSellHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double stockPriceValue; // @synthesize stockPriceValue=_stockPriceValue;
@property(copy, nonatomic) NSString *exchangeType; // @synthesize exchangeType=_exchangeType;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)getJSKStockMarketType:(id)arg1;
- (id)getEntrustBs;
- (void)scrollViewDidScroll:(id)arg1;
- (void)submitInfoViewClickAction:(id)arg1 withInputInfo:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)didReceiveRepeatedLoginError:(id)arg1;
- (void)showNotCommissionPeriodTipAlert:(id)arg1;
- (void)showCustomAlertView;
- (void)submitBuySellWithNoPwd;
- (_Bool)isTradePassValidate:(id)arg1;
- (void)removewEmptyView;
- (void)showEmptyView;
- (void)addClickCellEvent;
- (void)startStockSearchViewController;
- (void)handleWithModel:(id)arg1;
- (void)showEntrustRemindAlertWithError:(id)arg1 RequestDic:(id)arg2;
- (void)setupFundLayoutStyleWith:(id)arg1;
- (void)showWebController:(id)arg1 andTitle:(int)arg2;
- (void)submitBuySellWithPwd:(id)arg1;
- (void)titleDidClickChangeTableView;
- (void)handleResponse:(id)arg1;
- (void)pushToTodayEntrust;
- (void)stockBuyAndSellSuccess;
- (void)showStockInfoWithStockCode:(id)arg1 exchangeType:(id)arg2;
- (void)resetHeaderview;
- (void)holdPositionRequest;
- (void)getFivePriceWithStockCode:(id)arg1;
- (void)getCurrentPriceWithCode:(id)arg1 priceBlock:(CDUnknownBlockType)arg2;
- (void)setEntrustremindWithDic:(id)arg1;
- (void)htStockDealWithDic:(id)arg1;
- (void)buyOrSellFinish;
- (void)stockDealWithDic:(id)arg1;
- (void)getMaxStockAmountWithStockCode:(id)arg1 price:(id)arg2 exchangeType:(id)arg3 entrustBs:(id)arg4 placeholder:(_Bool)arg5;
- (void)dealWithZSBuySellWithDic:(id)arg1;
- (void)showTradeAlertView:(id)arg1;
- (void)dealStockData:(id)arg1 withModel:(id)arg2;
- (void)getStockCodeEnterWithStockCode:(id)arg1 exchangeType:(id)arg2;
- (void)queryEnableBalance;
- (void)getFundAndPosition;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

