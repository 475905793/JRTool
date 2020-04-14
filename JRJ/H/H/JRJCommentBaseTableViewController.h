//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class JRJCommentList, JRJCommentModel, JRJCommentSectionHeaderView, JRJZQCXInput, NSLayoutConstraint, NSString, UIView, XinGuZQAccessoryView;

@interface JRJCommentBaseTableViewController : JRJListTableViewController <UITextFieldDelegate>
{
    JRJCommentSectionHeaderView *_headView;
    _Bool _isReply;
    _Bool _isAllloadFinsh;
    NSString *_appID;
    NSString *_appItemid;
    long long _order;
    JRJZQCXInput *_inputbarView;
    XinGuZQAccessoryView *_accessoryView;
    JRJCommentList *_commentList;
    JRJCommentModel *_commentModel;
    UIView *_maskView;
    NSLayoutConstraint *_accessoryViewTopMarginConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *accessoryViewTopMarginConstraint; // @synthesize accessoryViewTopMarginConstraint=_accessoryViewTopMarginConstraint;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) JRJCommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) JRJCommentList *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) XinGuZQAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) JRJZQCXInput *inputbarView; // @synthesize inputbarView=_inputbarView;
@property(nonatomic) _Bool isAllloadFinsh; // @synthesize isAllloadFinsh=_isAllloadFinsh;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(nonatomic) _Bool isReply; // @synthesize isReply=_isReply;
@property(copy, nonatomic) NSString *appItemid; // @synthesize appItemid=_appItemid;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeNSNotification;
- (void)addNSNotification;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)commentHandler;
- (void)supportHandler:(id)arg1 label:(id)arg2 model:(id)arg3;
- (void)tapHandler:(id)arg1;
- (void)hideAccessViewSubView;
- (void)p_showQiuZQ;
- (void)p_showEmotion;
- (void)p_beginEditing;
- (void)loadAccessoryView;
- (void)loadInputbarView;
- (void)dataForModel:(id)arg1 isFromComment:(_Bool)arg2;
- (void)loadCommentListRequestWithPageSize:(long long)arg1 pageNum:(long long)arg2 isFromComment:(_Bool)arg3;
- (void)loadListRequest;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)dealloc;
- (void)registerNibForCell;
- (void)initEvent;
- (void)initParameters;
- (void)resetTableViewBottomPadding:(double)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAppID:(id)arg1 appItemID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

