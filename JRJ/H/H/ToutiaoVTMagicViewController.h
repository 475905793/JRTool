//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VTMagic/VTMagicController.h>

#import "JRJVerticalBannerDataSource-Protocol.h"
#import "JRJVerticalBannerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class DynamicConfigure, JRJBaseViewController, JRJVerticalBanner, NSArray, NSMutableArray, NSString, UIBarButtonItem, UIButton, UISwipeGestureRecognizer, WyhChannelManager;

@interface ToutiaoVTMagicViewController : VTMagicController <UIGestureRecognizerDelegate, JRJVerticalBannerDelegate, JRJVerticalBannerDataSource>
{
    UIButton *_userHomeBtn;
    UIButton *_userMailBtn;
    WyhChannelManager *_manager;
    NSMutableArray *_topChannelArr;
    NSMutableArray *_bottomChannelArr;
    UISwipeGestureRecognizer *_swipeGes;
    JRJVerticalBanner *_titleBannerView;
    NSArray *_bannerTitleArr;
    DynamicConfigure *_dynamicConfigure;
    UIBarButtonItem *_itemAsk;
    UIBarButtonItem *_search;
    JRJBaseViewController *_superVC;
}

@property(retain, nonatomic) JRJBaseViewController *superVC; // @synthesize superVC=_superVC;
@property(retain, nonatomic) UIBarButtonItem *search; // @synthesize search=_search;
@property(retain, nonatomic) UIBarButtonItem *itemAsk; // @synthesize itemAsk=_itemAsk;
@property(retain, nonatomic) DynamicConfigure *dynamicConfigure; // @synthesize dynamicConfigure=_dynamicConfigure;
@property(retain, nonatomic) NSArray *bannerTitleArr; // @synthesize bannerTitleArr=_bannerTitleArr;
@property(retain, nonatomic) JRJVerticalBanner *titleBannerView; // @synthesize titleBannerView=_titleBannerView;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeGes; // @synthesize swipeGes=_swipeGes;
@property(retain, nonatomic) NSMutableArray *bottomChannelArr; // @synthesize bottomChannelArr=_bottomChannelArr;
@property(retain, nonatomic) NSMutableArray *topChannelArr; // @synthesize topChannelArr=_topChannelArr;
@property(nonatomic) __weak WyhChannelManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)currentTitles;
- (void)subscribeAction;
- (void)banner:(id)arg1 didSelectIndex:(long long)arg2;
- (id)banner:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInBanner:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)magicView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)magicView:(id)arg1 viewDidDisappear:(id)arg2 atPage:(unsigned long long)arg3;
- (void)magicView:(id)arg1 viewDidAppear:(id)arg2 atPage:(unsigned long long)arg3;
- (id)magicView:(id)arg1 viewControllerAtPage:(unsigned long long)arg2;
- (id)magicView:(id)arg1 menuItemAtIndex:(unsigned long long)arg2;
- (id)menuTitlesForMagicView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)bannerTick;
- (void)didUpdateUnreadNumber:(id)arg1;
- (void)reloadUnreadMessage:(id)arg1;
- (void)loadData:(id)arg1;
- (void)applicationDidLaunch;
- (void)p_addLmglTrackWithName:(id)arg1;
- (void)isHasUnreadNum;
- (void)updateOldUserDefault;
- (void)updateChannelManageWithTopArr:(id)arg1 bottomArr:(id)arg2;
- (void)configChannelManage;
- (void)integrateComponents;
- (void)configNavigationBar:(id)arg1;
- (void)addObservers;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
