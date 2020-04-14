//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JRJPurchaseHandle, JRJPurchaseInfoMode, NSString, UITableView;

@interface JRJPurchaseNewStockDetailController : JRJBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_stockCode;
    NSString *_stockName;
    UITableView *_tableView;
    JRJPurchaseHandle *_handle;
    JRJPurchaseInfoMode *_purchaseInfoModel;
}

@property(retain, nonatomic) JRJPurchaseInfoMode *purchaseInfoModel; // @synthesize purchaseInfoModel=_purchaseInfoModel;
@property(retain, nonatomic) JRJPurchaseHandle *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(retain, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)title;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)getPurchaseDetailModel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

