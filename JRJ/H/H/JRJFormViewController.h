//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JRJFormBanner, NSMutableArray, NSString, UITableView;

@interface JRJFormViewController : JRJBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    double _paddingTop;
    NSMutableArray *_form;
    JRJFormBanner *_banner;
}

@property(retain, nonatomic) JRJFormBanner *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) NSMutableArray *form; // @synthesize form=_form;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)cellIsVisible:(id)arg1;
- (void)removeCell:(id)arg1 animated:(_Bool)arg2;
- (void)insertCell:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (unsigned long long)count;
- (void)hideBanner;
- (void)showBanner:(id)arg1;
- (void)setupFormWithCells:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
