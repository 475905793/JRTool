//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

@interface MoreHotThemeViewController : JRJListTableViewController
{
}

- (void)bindDataWithArray:(id)arg1 isRefresh:(_Bool)arg2;
- (void)requestMoreHotThemeListIsRefresh:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestMoreListData;
- (void)refreshInfo;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)viewDidLoad;
- (id)title;

@end

