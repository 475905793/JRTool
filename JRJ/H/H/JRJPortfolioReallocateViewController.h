//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

@class NSMutableDictionary, NSNumber;

@interface JRJPortfolioReallocateViewController : JRJListTableViewController
{
    long long currentPageNo;
    _Bool _isLoadMore;
    NSNumber *_pid;
    NSMutableDictionary *_indexPaths;
}

@property(nonatomic) _Bool isLoadMore; // @synthesize isLoadMore=_isLoadMore;
@property(retain, nonatomic) NSMutableDictionary *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(retain, nonatomic) NSNumber *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (_Bool)hasData:(id)arg1;
- (void)registerCell;
- (void)didReceiveMemoryWarning;
- (void)loadMoreData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadListRequest;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)responseSuccess:(id)arg1;
- (void)getData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

