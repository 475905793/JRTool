//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseTableViewController.h"

@class NSMutableArray;

@interface StrategyCustomServiceListViewController : JRJBaseTableViewController
{
    NSMutableArray *_iMServiceModelAry;
}

+ (void)p_StrategyCustomServiceListViewControllerWithVC:(id)arg1;
@property(retain, nonatomic) NSMutableArray *iMServiceModelAry; // @synthesize iMServiceModelAry=_iMServiceModelAry;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)requestData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)title;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)viewDidLoad;

@end

