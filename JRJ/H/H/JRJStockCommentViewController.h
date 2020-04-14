//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJCommentTableViewController.h"

#import "FSSegmentTitleViewDelegate-Protocol.h"

@class FSSegmentTitleView, JRJCommentTableHeaderView, JRJSIMTradeReasonView, JRJStockBestCommentView, JRJStockCommentHandler, JRJStockCommentSectionView, JRJStockInfoAdviserModel, NSDictionary, NSString, TradeEmptyView, UIButton, UILabel;

@interface JRJStockCommentViewController : JRJCommentTableViewController <FSSegmentTitleViewDelegate>
{
    _Bool _fromStock;
    JRJStockCommentHandler *_stockCommentHandler;
    JRJStockCommentSectionView *_sectionView;
    FSSegmentTitleView *_sectionTitleView;
    long long _sectionSelectIndex;
    TradeEmptyView *_emptyView;
    JRJCommentTableHeaderView *_tableHeaderView;
    UILabel *_newMsgViewLbl;
    NSString *_stockId;
    NSString *_stockName;
    NSString *_titleRefrestTime;
    NSString *_stockCode;
    JRJStockInfoAdviserModel *_fragmentModel;
    UIButton *_topCtitleNoticeBtn;
    NSDictionary *_ctitleNoticeDic;
    long long _forecastType;
    JRJSIMTradeReasonView *_tradeReasonView;
    JRJStockBestCommentView *_bestCommentAlert;
}

@property(retain, nonatomic) JRJStockBestCommentView *bestCommentAlert; // @synthesize bestCommentAlert=_bestCommentAlert;
@property(retain, nonatomic) JRJSIMTradeReasonView *tradeReasonView; // @synthesize tradeReasonView=_tradeReasonView;
@property(nonatomic) long long forecastType; // @synthesize forecastType=_forecastType;
@property(retain, nonatomic) NSDictionary *ctitleNoticeDic; // @synthesize ctitleNoticeDic=_ctitleNoticeDic;
@property(retain, nonatomic) UIButton *topCtitleNoticeBtn; // @synthesize topCtitleNoticeBtn=_topCtitleNoticeBtn;
@property(retain, nonatomic) JRJStockInfoAdviserModel *fragmentModel; // @synthesize fragmentModel=_fragmentModel;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(copy, nonatomic) NSString *titleRefrestTime; // @synthesize titleRefrestTime=_titleRefrestTime;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *stockId; // @synthesize stockId=_stockId;
@property(retain, nonatomic) UILabel *newMsgViewLbl; // @synthesize newMsgViewLbl=_newMsgViewLbl;
@property(retain, nonatomic) JRJCommentTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) TradeEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool fromStock; // @synthesize fromStock=_fromStock;
@property(nonatomic) long long sectionSelectIndex; // @synthesize sectionSelectIndex=_sectionSelectIndex;
@property(retain, nonatomic) FSSegmentTitleView *sectionTitleView; // @synthesize sectionTitleView=_sectionTitleView;
@property(retain, nonatomic) JRJStockCommentSectionView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) JRJStockCommentHandler *stockCommentHandler; // @synthesize stockCommentHandler=_stockCommentHandler;
- (void).cxx_destruct;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)FSSegmentTitleView:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3;
- (void)p_removeEmptyView;
- (void)p_showEmptyView;
- (void)showBestCommentAlertCellRect:(struct CGRect)arg1 senderRect:(struct CGRect)arg2;
- (void)p_ctitleNoticeClick;
- (void)p_resetTableViewTopPadding:(double)arg1;
- (void)p_overrideSuperAction;
- (void)p_addAdviser:(_Bool)arg1;
- (void)p_configSubView;
- (id)p_getStockMarkTypeAndCode:(id)arg1;
- (void)p_cellNavagationBlockWithParam:(id)arg1 target:(id)arg2 indexPath:(id)arg3;
- (void)cellOtherBlockWithParam:(id)arg1 target:(id)arg2 indexPath:(id)arg3;
- (void)p_cellDetailBlockWithParam:(id)arg1 target:(id)arg2 indexPath:(id)arg3;
- (void)changeStyleWithSelectedIndex:(long long)arg1;
- (void)updateTitleViewWithStockId:(id)arg1 name:(id)arg2 otherParamstr:(id)arg3;
- (void)updateTitleViewWithStockId:(id)arg1 refreshTime:(id)arg2;
- (void)jumpToDetailViewController:(id)arg1 Index:(id)arg2 mianModel:(id)arg3;
- (void)clickCellActions;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)reloadDataSource;
- (void)sendMainCommentWithParamDic:(id)arg1 formLookUpDown:(_Bool)arg2;
- (void)sendMainCommentWithParamDic:(id)arg1;
- (void)sendMainCommentWithImgUrl:(id)arg1;
- (void)doSendComment;
- (void)requestAnswerList;
- (void)requestAdviserList;
- (void)requestCommentListData;
- (void)fetchCommentList;
- (void)resetTableViewBottomPadding:(double)arg1;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)requestHGCommentList;
- (void)getIsFollowAdviser:(id)arg1;
- (void)getCtitleNotice;
- (void)getCommentFragment;
- (void)changeForecastType:(long long)arg1;
- (void)getForecast;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
