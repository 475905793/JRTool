//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPageController.h"

#import "WMPageControllerDelegate-Protocol.h"

@class NSString;

@interface JRJMyPortfolioPageListViewController : WMPageController <WMPageControllerDelegate>
{
}

- (void)didSelectedPageController:(id)arg1 index:(long long)arg2;
- (id)pageControllerForIndex:(long long)arg1;
- (id)pageController:(id)arg1 titleForPageIndex:(long long)arg2;
- (long long)numberOfPages:(id)arg1;
- (id)title;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
