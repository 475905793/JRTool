//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "JRJDiscoverStrategyDetailFilterViewDelegate-Protocol.h"

@class HTTouchLabel, JRJDiscoverStrategyDetailFilterView, JRJDiscoverStrategyDetailViewModel, LoadingStateView, NSString, UIButton;

@interface JRJDiscoverStrategyDetailVC : JRJListTableViewController <JRJDiscoverStrategyDetailFilterViewDelegate>
{
    NSString *_strategyId;
    NSString *_strategyType;
    JRJDiscoverStrategyDetailViewModel *_viewModel;
    JRJDiscoverStrategyDetailFilterView *_filterView;
    HTTouchLabel *_selectedLabel;
    LoadingStateView *_footerView;
    UIButton *_refreshButton;
}

+ (id)enterDiscoverStrategyDetailVC:(id)arg1 strategyId:(id)arg2 strategyType:(id)arg3 strategyTitle:(id)arg4;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) LoadingStateView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) HTTouchLabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) JRJDiscoverStrategyDetailFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) JRJDiscoverStrategyDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *strategyType; // @synthesize strategyType=_strategyType;
@property(copy, nonatomic) NSString *strategyId; // @synthesize strategyId=_strategyId;
- (void).cxx_destruct;
- (void)clickCloseLittleYellowView;
- (void)clickOpenLittleYellowDetail;
- (void)startRefreshButtonAnimation;
- (void)refreshPage;
- (void)didClickFilterViewWithColumnKey:(id)arg1 withSortType:(long long)arg2;
- (void)_setupSubViews;
- (id)filterItemOfColumnNum:(long long)arg1;
- (double)filterItemWidthOfColumnNum:(long long)arg1;
- (id)numberOfFilterViewTitles;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)loadRemindData;
- (void)requestUIData;
- (void)loadNewData;
- (void)loadData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

