//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "JRJYanBaoPotentialListSectionViewDelegate-Protocol.h"

@class HTTouchLabel, JRJResearchReportNavigationView, JRJYanBaoPotentialListSectionView, JRJYanBaoPotentialListViewModel, NSString;

@interface JRJYanBaoPotentialListVC : JRJListTableViewController <JRJYanBaoPotentialListSectionViewDelegate>
{
    JRJResearchReportNavigationView *_naviView;
    JRJYanBaoPotentialListViewModel *_viewModel;
    HTTouchLabel *_selectedLabel;
    JRJYanBaoPotentialListSectionView *_filterView;
}

@property(retain, nonatomic) JRJYanBaoPotentialListSectionView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) HTTouchLabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) JRJYanBaoPotentialListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) JRJResearchReportNavigationView *naviView; // @synthesize naviView=_naviView;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)showLoadingViewWithState:(long long)arg1;
- (void)_setupSubviewsUI;
- (void)didPressedQuestionButton;
- (void)didPressedBackButton;
- (id)filterItemOfColumnNum:(long long)arg1;
- (double)filterItemWidthOfColumnNum:(long long)arg1;
- (id)numberOfFilterViewTitles;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didClickFilterViewWithColumnKey:(id)arg1 sortType:(long long)arg2;
- (void)loadUIData:(_Bool)arg1;
- (void)loadMoreData;
- (void)loadNewData;
- (void)loadData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

