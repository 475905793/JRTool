//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class TradeQueryHandler;

@interface TradeQueryTodayEntrustAndVolVC : KKTableViewController
{
    int _type;
    TradeQueryHandler *_tradeQueryHandler;
}

@property(retain, nonatomic) TradeQueryHandler *tradeQueryHandler; // @synthesize tradeQueryHandler=_tradeQueryHandler;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)title;
- (void)showEmptyView;
- (void)handleResponse:(id)arg1;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)handleWithResponse:(id)arg1 error:(id)arg2;
- (void)sendNativeRequest;
- (void)sendWebRequest;
- (void)accordingEntrustModelSendRequest;
- (void)viewDidLoad;

@end

