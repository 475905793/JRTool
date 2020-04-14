//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class JRJPlayerAnimator, NSString;

@interface JRJZhiboHistoryViewController : JRJListTableViewController <UIViewControllerTransitioningDelegate>
{
    _Bool _isManualRrefresh;
    NSString *_roomId;
    NSString *_fakeVideoURLString;
    long long _lastVideoId;
    JRJPlayerAnimator *_transition;
}

@property(retain, nonatomic) JRJPlayerAnimator *transition; // @synthesize transition=_transition;
@property(nonatomic) _Bool isManualRrefresh; // @synthesize isManualRrefresh=_isManualRrefresh;
@property(nonatomic) long long lastVideoId; // @synthesize lastVideoId=_lastVideoId;
@property(retain, nonatomic) NSString *fakeVideoURLString; // @synthesize fakeVideoURLString=_fakeVideoURLString;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)showLoadingViewWithState:(long long)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (struct CGRect)p_thumbImageRectOfSelectedRow;
- (void)p_handleResponse:(id)arg1;
- (void)openPlayerWithURLString:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadListRequest;
- (void)refreshViewBeginRefresh:(id)arg1;
- (Class)cellClass;
- (void)viewDidLoad;
- (id)initWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

