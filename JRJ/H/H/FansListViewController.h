//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJPlainTableViewController.h"

@class NSMutableArray, NSString;

@interface FansListViewController : JRJPlainTableViewController
{
    NSString *_userId;
    NSMutableArray *_arrList;
}

@property(retain, nonatomic) NSMutableArray *arrList; // @synthesize arrList=_arrList;
- (void).cxx_destruct;
- (void)willChangePromptView;
- (void)handleRequestDataArray:(id)arg1;
- (id)title;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)loadListRequest;
- (void)loadData:(id)arg1 isFirst:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithUserId:(id)arg1;

@end

