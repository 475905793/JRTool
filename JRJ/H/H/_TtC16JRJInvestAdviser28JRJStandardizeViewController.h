//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJEstimatedTableViewController.h"

@class NSArray;

@interface _TtC16JRJInvestAdviser28JRJStandardizeViewController : JRJEstimatedTableViewController
{
    // Error parsing type: , name: header_ViewSections
    // Error parsing type: , name: footer_ViewSections
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTableViewStyle:(long long)arg1;
- (void)createNavRightBtnWithTitle:(id)arg1 width:(double)arg2 clickHandle:(CDUnknownBlockType)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestFailHandle;
- (void)dataHandleWithObject:(id)arg1;
- (void)sendRequestWithUrlStr:(id)arg1 isStateHandle:(_Bool)arg2 finishBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)sendRequestWithUrlStr:(id)arg1 isStateHandle:(_Bool)arg2;
@property(nonatomic, copy) NSArray *footer_ViewSections;
@property(nonatomic, copy) NSArray *header_ViewSections;

@end

