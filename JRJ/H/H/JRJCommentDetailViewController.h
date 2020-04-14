//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class JRJCommentDetailHandler, JRJCommentInputView, JRJInputAccessoryView, JRJPortfolioCommunicationModel, NSIndexPath, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UILabel, UIView;

@interface JRJCommentDetailViewController : KKTableViewController
{
    JRJPortfolioCommunicationModel *_mainModel;
    JRJCommentDetailHandler *_handler;
    NSIndexPath *_mainModelIndex;
    NSString *_bizType;
    NSString *_appItemId;
    NSString *_itemTitle;
    NSString *_commentId;
    NSIndexPath *_lastReplidIndex;
    JRJCommentInputView *_inputView;
    JRJInputAccessoryView *_accessoryView;
    CDUnknownBlockType _commentConnectFinishedBlock;
    UIView *_maskView;
    NSLayoutConstraint *_accessoryViewTopMarginConstraint;
    NSMutableDictionary *_insertParamDic;
    NSMutableArray *_paramDic;
    UILabel *_emptyLabel;
}

@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) NSMutableArray *paramDic; // @synthesize paramDic=_paramDic;
@property(retain, nonatomic) NSMutableDictionary *insertParamDic; // @synthesize insertParamDic=_insertParamDic;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewTopMarginConstraint; // @synthesize accessoryViewTopMarginConstraint=_accessoryViewTopMarginConstraint;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType commentConnectFinishedBlock; // @synthesize commentConnectFinishedBlock=_commentConnectFinishedBlock;
@property(retain, nonatomic) JRJInputAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) JRJCommentInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) NSIndexPath *lastReplidIndex; // @synthesize lastReplidIndex=_lastReplidIndex;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *appItemId; // @synthesize appItemId=_appItemId;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSIndexPath *mainModelIndex; // @synthesize mainModelIndex=_mainModelIndex;
@property(retain, nonatomic) JRJCommentDetailHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) JRJPortfolioCommunicationModel *mainModel; // @synthesize mainModel=_mainModel;
- (void).cxx_destruct;
- (id)title;
- (void)showDeletedAlert:(id)arg1;
- (void)removeNSNotification;
- (void)didReceiveMemoryWarning;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (id)getEmotionArrayFromPlainText:(id)arg1;
- (void)refreshViewBeginRefresh:(id)arg1;
- (id)transformEmotionArrayToFormatPlainText:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)clickCellActions;
- (void)reloadDataSource;
- (void)doPraiseComment;
- (void)doDeleteComment;
- (void)makeActionSheet;
- (_Bool)isOther:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)saveInsertType:(id)arg1 andParamId:(id)arg2 andTitle:(id)arg3;
- (id)replaceInsertType:(id)arg1;
- (id)replyDic:(id)arg1;
- (void)doSendComment;
- (void)showbindMobileAlert;
- (void)beginEditing;
- (void)addNSNotification;
- (void)delayLoadMore;
- (void)fetchCommentList;
- (void)loadAccessoryView;
- (void)tapHandler:(id)arg1;
- (void)configBaseTableView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (void)dealloc;

@end
