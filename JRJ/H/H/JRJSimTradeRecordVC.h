//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJUserDetailBaseTableVC.h"

@class JRJSimHoldPositionHandler, LoadMoreCell, NSMutableArray, TradeEmptyView, UIView;

@interface JRJSimTradeRecordVC : JRJUserDetailBaseTableVC
{
    _Bool _isAuth;
    JRJSimHoldPositionHandler *_handler;
    long long _pageNum;
    NSMutableArray *_tradeRecordList;
    LoadMoreCell *_loadMoreCell;
    TradeEmptyView *_emptyView;
    UIView *_noAuthHeader;
}

@property(retain, nonatomic) UIView *noAuthHeader; // @synthesize noAuthHeader=_noAuthHeader;
@property(retain, nonatomic) TradeEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) LoadMoreCell *loadMoreCell; // @synthesize loadMoreCell=_loadMoreCell;
@property(retain, nonatomic) NSMutableArray *tradeRecordList; // @synthesize tradeRecordList=_tradeRecordList;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) JRJSimHoldPositionHandler *handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool isAuth; // @synthesize isAuth=_isAuth;
- (void).cxx_destruct;
- (id)leftNavigationImageStr;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)p_authLockBtnClick;
- (void)p_removeEmpty;
- (void)p_showEmpty;
- (void)p_handlerRequestData:(id)arg1 loadMore:(_Bool)arg2;
- (void)requestMoreListData;
- (void)requestTradeRecordList;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)configTableViewBottomInset;
- (void)configBaseTableView;
- (void)viewDidLoad;

@end

