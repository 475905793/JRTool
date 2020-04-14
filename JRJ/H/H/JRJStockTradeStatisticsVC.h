//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

@class JRJStockTradeStatisticsListViewModel, JRJStockTradeStatisticsSectionView, JSKStock;

@interface JRJStockTradeStatisticsVC : JRJListTableViewController
{
    JSKStock *_stock;
    JRJStockTradeStatisticsSectionView *_sectionView;
    JRJStockTradeStatisticsListViewModel *_viewModel;
}

@property(retain, nonatomic) JRJStockTradeStatisticsListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) JRJStockTradeStatisticsSectionView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) JSKStock *stock; // @synthesize stock=_stock;
- (void).cxx_destruct;
- (void)_setupSubViewsUI;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadNewData;
- (void)loadUIData;
- (void)viewDidLoad;
- (void)dealloc;

@end

