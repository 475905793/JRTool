//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTTabBarController.h"

#import "UITabBarControllerDelegate-Protocol.h"

@class LoadingStateView, MessageListViewController, NSArray, NSString, NSUserDefaults, SubcriptionListViewController;

@interface JRJMessageManageViewController : HTTabBarController <UITabBarControllerDelegate>
{
    NSArray *array;
    _Bool isHasUnreadMsg;
    _Bool isHasUnreadSubcription;
    NSUserDefaults *_userDefaults;
    MessageListViewController *_messageListVC;
    SubcriptionListViewController *_subcriptionVC;
    LoadingStateView *_noneDataView;
}

+ (void)requestPushSwitchList;
+ (_Bool)isOpenPushSwitchWithMessageType:(long long)arg1;
+ (id)getSwitchArray;
+ (int)pushTypePosition:(id)arg1;
+ (_Bool)isOpenPushSwitch:(id)arg1;
+ (_Bool)isBelongSubcriptionByChatConversation:(id)arg1;
@property(retain, nonatomic) LoadingStateView *noneDataView; // @synthesize noneDataView=_noneDataView;
@property(retain, nonatomic) SubcriptionListViewController *subcriptionVC; // @synthesize subcriptionVC=_subcriptionVC;
@property(retain, nonatomic) MessageListViewController *messageListVC; // @synthesize messageListVC=_messageListVC;
- (void).cxx_destruct;
- (void)addNoneDataView;
- (void)removeBadgeOnItemIndex:(int)arg1;
- (void)hideBadgeOnItemIndex:(int)arg1;
- (void)showBadgeOnItmIndex:(int)arg1;
- (void)requestPushSwitchList;
- (_Bool)isBelongSubcriptionByChatConversation:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)subControllers;
- (void)clickMoreBtn;
- (void)showrRightBarButtonItemWithTitle:(id)arg1;
- (id)tabBarControllers;
- (void)setAppDefaultStyle;
- (void)saveDateWithType:(_Bool)arg1;
- (void)isHasUnreadNum;
- (void)didUpdateUnreadNumber:(id)arg1;
- (void)reloadConversation;
- (void)setupTabbar;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)clearBackBarButtonItemTitle;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
