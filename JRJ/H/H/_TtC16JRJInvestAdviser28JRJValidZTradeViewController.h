//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJEstimatedTableViewController.h"

@class JRJZStrategyWebViewController, JRJZTradeNewMainViewController;

@interface _TtC16JRJInvestAdviser28JRJValidZTradeViewController : JRJEstimatedTableViewController
{
    // Error parsing type: , name: fromCoupon
    // Error parsing type: , name: $__lazy_storage_$_payWebVC
    // Error parsing type: , name: $__lazy_storage_$_zTradeDetailsVC
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTableViewStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)payFinishedHandle;
- (void)loadListRequest;
- (void)viewDidLoad;
@property(nonatomic, retain) JRJZTradeNewMainViewController *zTradeDetailsVC;
@property(nonatomic, retain) JRJZStrategyWebViewController *payWebVC;
@property(nonatomic) _Bool fromCoupon; // @synthesize fromCoupon;

@end

