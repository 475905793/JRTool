//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseTableViewController.h"

@class JRJSimilarBar, JRJSimilarHeadView, NSMutableArray;

@interface JRJSimilarKlineController : JRJBaseTableViewController
{
    JRJSimilarBar *_navigationBar;
    NSMutableArray *_dataArray;
    JRJSimilarHeadView *_headView;
}

@property(retain, nonatomic) JRJSimilarHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) JRJSimilarBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)setupNavigationBar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadListRequest;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

