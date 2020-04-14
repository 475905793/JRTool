//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJSelectionController.h"

@class JRJCouponListViewController;

@interface JRJCouponViewController : JRJSelectionController
{
    JRJCouponListViewController *_unusedCouponViewController;
    JRJCouponListViewController *_usedCouponViewController;
    JRJCouponListViewController *_expiredCouponViewController;
}

@property(retain, nonatomic) JRJCouponListViewController *expiredCouponViewController; // @synthesize expiredCouponViewController=_expiredCouponViewController;
@property(retain, nonatomic) JRJCouponListViewController *usedCouponViewController; // @synthesize usedCouponViewController=_usedCouponViewController;
@property(retain, nonatomic) JRJCouponListViewController *unusedCouponViewController; // @synthesize unusedCouponViewController=_unusedCouponViewController;
- (void).cxx_destruct;
- (void)willChangeFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)selectionControllers;
- (void)loadData;
- (void)manualButtonPressed:(id)arg1;
- (id)functionTitles;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

