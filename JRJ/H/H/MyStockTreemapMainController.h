//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

@class BanKuaiPaiHangViewController, TreemapBlockController, UIBarButtonItem, UIViewController;

@interface MyStockTreemapMainController : JRJBaseViewController
{
    BanKuaiPaiHangViewController *bkController;
    TreemapBlockController *treemapController;
    UIViewController *fromVC;
    UIViewController *toVC;
    UIBarButtonItem *rightButton;
    int showType;
    long long groupId;
}

@property(nonatomic) long long groupId; // @synthesize groupId;
@property(nonatomic) int showType; // @synthesize showType;
- (void).cxx_destruct;
- (void)setShowControllerType:(int)arg1;
- (void)didClickedMore;
- (void)changeSecurityMarketActionWithIndex:(int)arg1 animated:(_Bool)arg2;
- (void)createAndAddChildVCs;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

