//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UILabel, UITableView;

@interface MyIntegratingDetailCell : JRJBaseCell <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_dayList;
    UITableView *contentTableView;
    UILabel *dateLabel;
    UILabel *summaryLabel;
    NSLayoutConstraint *contentTableViewHeightConst;
}

- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)bindDataWithDic:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

