//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "JRJPassportViewControllerDelegate-Protocol.h"
#import "JRJThirdPartyLoginViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class JRJFormCheckBoxWithLinkView, JRJLoginViewController, JRJQuickLoginViewController, JRJThirdPartyLoginView, NSLayoutConstraint, NSString, UIButton, UILabel, UIView, UIViewController;

@interface JRJPassportContainerViewController : JRJBaseViewController <JRJPassportViewControllerDelegate, UIGestureRecognizerDelegate, JRJThirdPartyLoginViewDelegate>
{
    _Bool _startsWithLoginView;
    _Bool _isQuickLoginType;
    CDUnknownBlockType _loginSuccessBlock;
    CDUnknownBlockType _loginCancelBlock;
    NSLayoutConstraint *_headerTopConstraint;
    UIView *_headerView;
    UIView *_contentView;
    UIButton *_rightUIButton;
    UILabel *_profileUIlabel;
    JRJLoginViewController *_loginViewController;
    JRJQuickLoginViewController *_quickLoginViewController;
    UIViewController *_leftVC;
    UIViewController *_rightVC;
    JRJThirdPartyLoginView *_thirdPartyLoginView;
    NSLayoutConstraint *_dismissTopNSLayoutConstraint;
    NSLayoutConstraint *_bottomNSLayoutConstraint;
    UILabel *_labelBottomTip;
    JRJFormCheckBoxWithLinkView *_checkCell;
}

@property(nonatomic) _Bool isQuickLoginType; // @synthesize isQuickLoginType=_isQuickLoginType;
@property(retain, nonatomic) JRJFormCheckBoxWithLinkView *checkCell; // @synthesize checkCell=_checkCell;
@property(nonatomic) __weak UILabel *labelBottomTip; // @synthesize labelBottomTip=_labelBottomTip;
@property(retain, nonatomic) NSLayoutConstraint *bottomNSLayoutConstraint; // @synthesize bottomNSLayoutConstraint=_bottomNSLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dismissTopNSLayoutConstraint; // @synthesize dismissTopNSLayoutConstraint=_dismissTopNSLayoutConstraint;
@property(nonatomic) __weak JRJThirdPartyLoginView *thirdPartyLoginView; // @synthesize thirdPartyLoginView=_thirdPartyLoginView;
@property(retain, nonatomic) UIViewController *rightVC; // @synthesize rightVC=_rightVC;
@property(retain, nonatomic) UIViewController *leftVC; // @synthesize leftVC=_leftVC;
@property(retain, nonatomic) JRJQuickLoginViewController *quickLoginViewController; // @synthesize quickLoginViewController=_quickLoginViewController;
@property(retain, nonatomic) JRJLoginViewController *loginViewController; // @synthesize loginViewController=_loginViewController;
@property(retain, nonatomic) UILabel *profileUIlabel; // @synthesize profileUIlabel=_profileUIlabel;
@property(retain, nonatomic) UIButton *rightUIButton; // @synthesize rightUIButton=_rightUIButton;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak NSLayoutConstraint *headerTopConstraint; // @synthesize headerTopConstraint=_headerTopConstraint;
@property(copy, nonatomic) CDUnknownBlockType loginCancelBlock; // @synthesize loginCancelBlock=_loginCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType loginSuccessBlock; // @synthesize loginSuccessBlock=_loginSuccessBlock;
@property(nonatomic) _Bool startsWithLoginView; // @synthesize startsWithLoginView=_startsWithLoginView;
- (void).cxx_destruct;
- (void)switchToLoginViewControllerWithMobileNumber:(id)arg1 fromPassportViewController:(id)arg2;
- (void)passportViewControllerDidLogin:(id)arg1;
- (void)userDidLogin:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillAppear:(id)arg1;
- (void)moveHeaderOnScreen;
- (void)moveHeaderOffScreen;
- (void)hideKeyboard;
- (void)checkSelectAction:(_Bool)arg1;
- (void)openUserProtocelWithLinkStr:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)registerButtonPressed:(id)arg1;
- (void)thirdPartyLoginView:(id)arg1 loginWithIdentifier:(id)arg2;
- (void)showQuickLoginViewAnimated:(_Bool)arg1;
- (void)showLoginViewAnimated:(_Bool)arg1;
- (void)showViewController:(id)arg1 animated:(_Bool)arg2;
- (void)addViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

