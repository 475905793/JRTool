//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JRJUIKit/ModalView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface TradeChangeAccountView : ModalView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isShowLogout;
    _Bool _isHideFootView;
    NSArray *_contentAry;
    CDUnknownBlockType _itemBlock;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _logoutBlock;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType logoutBlock; // @synthesize logoutBlock=_logoutBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(copy, nonatomic) CDUnknownBlockType itemBlock; // @synthesize itemBlock=_itemBlock;
@property(nonatomic) _Bool isHideFootView; // @synthesize isHideFootView=_isHideFootView;
@property(retain, nonatomic) NSArray *contentAry; // @synthesize contentAry=_contentAry;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

