//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPageController.h"

#import "WMPageControllerDelegate-Protocol.h"

@class NSArray, NSString;

@interface JRJZhiboRankPageViewController : WMPageController <WMPageControllerDelegate>
{
    NSArray *_types;
}

@property(retain, nonatomic) NSArray *types; // @synthesize types=_types;
- (void).cxx_destruct;
- (id)pageControllerForIndex:(long long)arg1;
- (long long)numberOfPages:(id)arg1;
- (id)pageController:(id)arg1 titleForPageIndex:(long long)arg2;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
