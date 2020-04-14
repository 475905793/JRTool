//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class JRJAdviser, JRJReference, JRJReferenceSubscriptionHelper, NSNumber, NSString;

@interface JRJReferenceDetailViewController : JRJListTableViewController <UIAlertViewDelegate>
{
    _Bool _logged;
    _Bool _isDaren;
    NSString *_referenceId;
    JRJReference *_reference;
    JRJAdviser *_adviser;
    JRJReferenceSubscriptionHelper *_subscriptionHelper;
    NSNumber *_signStatus;
}

@property(nonatomic) _Bool isDaren; // @synthesize isDaren=_isDaren;
@property(nonatomic, getter=isLogged) _Bool logged; // @synthesize logged=_logged;
@property(retain, nonatomic) NSNumber *signStatus; // @synthesize signStatus=_signStatus;
@property(retain, nonatomic) JRJReferenceSubscriptionHelper *subscriptionHelper; // @synthesize subscriptionHelper=_subscriptionHelper;
@property(retain, nonatomic) JRJAdviser *adviser; // @synthesize adviser=_adviser;
@property(retain, nonatomic) JRJReference *reference; // @synthesize reference=_reference;
@property(copy, nonatomic) NSString *referenceId; // @synthesize referenceId=_referenceId;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)configureDescriptionCellAtIndexPath:(id)arg1;
- (id)configureInfoCellAtIndexPath:(id)arg1;
- (id)configurePriceCellAtIndexPath:(id)arg1;
- (id)configureBannerCellAtIndexPath:(id)arg1;
- (id)configureTitleCellAtIndexPath:(id)arg1;
- (id)configureStatusCellWithStatus:(long long)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refresh:(id)arg1;
- (void)paid:(id)arg1;
- (void)subButtonPressed;
- (void)addLineToCell:(id)arg1;
- (void)showAdviserDetail;
- (void)showViewpoints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)loadListRequest;
- (void)loadData;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithReferenceId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

