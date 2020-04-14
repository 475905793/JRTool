//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "VTMagicViewDataSource-Protocol.h"
#import "VTMagicViewDelegate-Protocol.h"

@class NSArray, NSString, VTMagicController;

@interface JRJNewStocksPageViewController : JRJBaseViewController <VTMagicViewDataSource, VTMagicViewDelegate>
{
    NSString *_dateStr;
    NSArray *_menuList;
    VTMagicController *_magicController;
}

@property(retain, nonatomic) VTMagicController *magicController; // @synthesize magicController=_magicController;
@property(retain, nonatomic) NSArray *menuList; // @synthesize menuList=_menuList;
@property(copy, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)title;
- (void)magicView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)magicView:(id)arg1 viewDidDisappear:(id)arg2 atPage:(unsigned long long)arg3;
- (void)magicView:(id)arg1 viewDidAppear:(id)arg2 atPage:(unsigned long long)arg3;
- (id)magicView:(id)arg1 viewControllerAtPage:(unsigned long long)arg2;
- (id)magicView:(id)arg1 menuItemAtIndex:(unsigned long long)arg2;
- (id)menuTitlesForMagicView:(id)arg1;
- (void)goback:(id)arg1;
- (void)clearBackBarButtonItemTitle;
- (void)configCustomNav;
- (void)configMagicView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

