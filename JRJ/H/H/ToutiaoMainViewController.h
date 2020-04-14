//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "JRJTTSManagerDelegate-Protocol.h"

@class DynamicConfigure, ImportantContentTableHeaderView, IndexTableHeaderView, JRJStockFriendsTouTiaoView, JRJTTSManager, JRJToutiaoRockAlertView, JRJToutiaoTTSCell, NSArray, NSDictionary, NSMutableArray, NSString, ToutiaoAdLeftRightCell, ToutiaoIndexView, ToutiaoMustReadHeaderView, ToutiaoPicsCell, UIImageView, UIView, _TtC16JRJInvestAdviser17JRJScrollMenuView;

@interface ToutiaoMainViewController : JRJListTableViewController <JRJTTSManagerDelegate>
{
    ToutiaoMustReadHeaderView *_toutiaoMustReadHeaderView;
    ToutiaoPicsCell *_toutiaoPicsCell;
    ToutiaoAdLeftRightCell *_toutiaoAdLeftRightCell;
    NSString *_stockCodesString;
    _Bool _isNeedRefresh;
    double _lastOffsetY;
    UIImageView *_BGImageView;
    _Bool _isPaly;
    double _indexHeaderViewHeight;
    double _importantHeaderViewHeight;
    double _mKTZHeadViewHeight;
    UIView *_headerView;
    IndexTableHeaderView *_indexTableHeaderView;
    ToutiaoIndexView *_indexView;
    ImportantContentTableHeaderView *_importantContentTableHeaderView;
    _TtC16JRJInvestAdviser17JRJScrollMenuView *_mKTZHeadView;
    JRJToutiaoRockAlertView *_rockAlertView;
    NSDictionary *_adDic;
    NSMutableArray *_sevenNewsArr;
    NSMutableArray *_mustReadDataArray;
    NSArray *_infoCrossFlowArray;
    JRJStockFriendsTouTiaoView *_stockFriendsTouTiaoView;
    NSDictionary *_yaowenTrackDic;
    DynamicConfigure *_dynamicConfigure;
    long long _ttsPalyIndex;
    JRJTTSManager *_ttsManager;
    JRJToutiaoTTSCell *_ttsCell;
    long long _ttsErrorCount;
    NSString *_ttsErrorID;
}

@property(copy, nonatomic) NSString *ttsErrorID; // @synthesize ttsErrorID=_ttsErrorID;
@property(nonatomic) long long ttsErrorCount; // @synthesize ttsErrorCount=_ttsErrorCount;
@property(retain, nonatomic) JRJToutiaoTTSCell *ttsCell; // @synthesize ttsCell=_ttsCell;
@property(nonatomic) _Bool isPaly; // @synthesize isPaly=_isPaly;
@property(retain, nonatomic) JRJTTSManager *ttsManager; // @synthesize ttsManager=_ttsManager;
@property(nonatomic) long long ttsPalyIndex; // @synthesize ttsPalyIndex=_ttsPalyIndex;
@property(retain, nonatomic) DynamicConfigure *dynamicConfigure; // @synthesize dynamicConfigure=_dynamicConfigure;
@property(retain, nonatomic) NSDictionary *yaowenTrackDic; // @synthesize yaowenTrackDic=_yaowenTrackDic;
@property(retain, nonatomic) JRJStockFriendsTouTiaoView *stockFriendsTouTiaoView; // @synthesize stockFriendsTouTiaoView=_stockFriendsTouTiaoView;
@property(retain, nonatomic) NSArray *infoCrossFlowArray; // @synthesize infoCrossFlowArray=_infoCrossFlowArray;
@property(retain, nonatomic) NSMutableArray *mustReadDataArray; // @synthesize mustReadDataArray=_mustReadDataArray;
@property(retain, nonatomic) NSMutableArray *sevenNewsArr; // @synthesize sevenNewsArr=_sevenNewsArr;
@property(retain, nonatomic) NSDictionary *adDic; // @synthesize adDic=_adDic;
@property(retain, nonatomic) JRJToutiaoRockAlertView *rockAlertView; // @synthesize rockAlertView=_rockAlertView;
@property(retain, nonatomic) _TtC16JRJInvestAdviser17JRJScrollMenuView *mKTZHeadView; // @synthesize mKTZHeadView=_mKTZHeadView;
@property(retain, nonatomic) ImportantContentTableHeaderView *importantContentTableHeaderView; // @synthesize importantContentTableHeaderView=_importantContentTableHeaderView;
@property(retain, nonatomic) ToutiaoIndexView *indexView; // @synthesize indexView=_indexView;
@property(retain, nonatomic) IndexTableHeaderView *indexTableHeaderView; // @synthesize indexTableHeaderView=_indexTableHeaderView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double mKTZHeadViewHeight; // @synthesize mKTZHeadViewHeight=_mKTZHeadViewHeight;
@property(nonatomic) double importantHeaderViewHeight; // @synthesize importantHeaderViewHeight=_importantHeaderViewHeight;
@property(nonatomic) double indexHeaderViewHeight; // @synthesize indexHeaderViewHeight=_indexHeaderViewHeight;
- (void).cxx_destruct;
- (id)adCellHandle:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reloadVPRobotBanner;
- (void)logOutNotific:(id)arg1;
- (_Bool)p_checkTTSisNeedRefresh;
- (void)p_TTSplayOrPause:(_Bool)arg1;
- (id)p_getNewArr;
- (void)p_setStockFriendsTouTiaoViewNeedShowTime:(long long)arg1;
- (void)p_isShowStockFriendsView:(_Bool)arg1;
- (void)p_cancelStockWithModel:(id)arg1;
- (void)p_addStockWithModel:(id)arg1;
- (void)p_refreshMyStock;
- (void)p_newsClickTrackWithModle:(id)arg1;
- (void)p_crossFlowInfoMoreClick:(long long)arg1;
- (void)p_crossFlowInfoDidSelectDispose:(id)arg1 indexPath:(id)arg2;
- (void)p_checkLoadMoreNewsNeedInsertCrossFlow;
- (void)p_insertCrossFlowToYaoWen;
- (void)showSubscriptionBigShotViewController;
- (void)handerTopicRequestData:(id)arg1;
- (void)handlerStockFriendsRequest:(id)arg1;
- (void)dealFinish:(id)arg1 type:(long long)arg2;
- (void)getStockFriendCircleInfoWithLastTime:(id)arg1 type:(long long)arg2;
- (void)requestStockFriendCircle;
- (void)requestInteractEntrance;
- (void)getInfoCrossFlow;
- (void)requestTTSNewsListDataisBefore:(_Bool)arg1;
- (void)requestYaoWenListDataisBefore:(_Bool)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)requestAdvertisement;
- (void)requestIntelligentReadRemind;
- (void)requestInfoMenu;
- (void)managerError;
- (void)managerSpeechEnd;
- (void)managerPause;
- (void)managerSpeechResume;
- (void)managerSpeechStartWithIndex:(long long)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshData:(id)arg1;
- (void)bottomInfoButtonClickAction:(id)arg1;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)refreshTopInfo;
- (void)requestMoreListData;
- (void)loadListRequest;
- (void)delayRefreshInfo;
- (void)refreshMustRead;
- (void)needRefreshData;
- (void)setNeedRefresh;
- (void)addNotifications;
- (void)addAutoLayout;
- (void)createTableHeaderView;
- (void)configBaseTableView;
- (void)configIndexView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

