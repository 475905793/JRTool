//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJEstimatedTableViewController.h"

@class JRJPlatesHeadView, NSString, UIBarButtonItem, UIButton;

@interface JRJPlateDetailViewController : JRJEstimatedTableViewController
{
    NSString *_plateCode;
    JRJPlatesHeadView *_titleView;
    UIButton *_refreshButton;
    UIBarButtonItem *_refreshBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *refreshBarButtonItem; // @synthesize refreshBarButtonItem=_refreshBarButtonItem;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) JRJPlatesHeadView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *plateCode; // @synthesize plateCode=_plateCode;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)startRefresh;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)loadListRequest;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)viewDidLoad;

@end
