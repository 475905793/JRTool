//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

@class JRJDiscoverListProtocol, JRJDiscoverListViewModel;

@interface JRJDiscoverController : JRJListTableViewController
{
    JRJDiscoverListViewModel *_viewModel;
    JRJDiscoverListProtocol *_protocol;
}

@property(retain, nonatomic) JRJDiscoverListProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) JRJDiscoverListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)authorityControlHandle;
- (void)pushSearchVC;
- (void)_registerNotification;
- (void)_setupSubViews;
- (void)didSelectStrategyRelatedStockWithCode:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectStrategyDetailPageAtIndex:(long long)arg1;
- (void)didSelectStrategyFilterMenuAtIndex:(long long)arg1;
- (void)enterFilterStockPage;
- (void)enterJiHuiPage;
- (void)enterJiHuiDetailPageAtIndex:(long long)arg1;
- (void)enterSmartFilterStockFunctionModuleWithID:(id)arg1;
- (void)enterSmartFilterStockMorePage;
- (void)didSelectInvestClassroomDetailPageAtIndex:(id)arg1 classId:(id)arg2;
- (void)enterInvestClassroomMorePage;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)loadStrategyList;
- (void)requestUIData;
- (void)loadNewData;
- (void)loadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

