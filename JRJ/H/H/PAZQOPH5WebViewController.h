//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, UIView, UIWebView;

@interface PAZQOPH5WebViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSString *backlStr;
    NSString *wbStr;
    long long urlCount;
    UIView *view;
    _Bool isgoback;
    _Bool isFromChooseView;
    NSString *titleText;
    NSString *URL;
    NSURL *redirectUrl;
    CDUnknownBlockType _callback;
    NSString *_currentPageURLString;
}

@property(copy, nonatomic) NSString *currentPageURLString; // @synthesize currentPageURLString=_currentPageURLString;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool isFromChooseView; // @synthesize isFromChooseView;
@property(retain, nonatomic) NSURL *redirectUrl; // @synthesize redirectUrl;
@property(retain, nonatomic) NSString *URL; // @synthesize URL;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText;
- (void).cxx_destruct;
- (_Bool)checkString:(id)arg1 formatType:(id)arg2;
- (long long)iOSVersionCompare:(id)arg1:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 IsView:(_Bool)arg3;
- (void)loadViewByUrl:(id)arg1 Title:(id)arg2;
- (void)toggleAction;
- (void)toggleEdit;
- (void)addRight;
- (void)modifyBrowserKernelUserAgent;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)backToLastViewController:(id)arg1;
- (void)refreshData;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
