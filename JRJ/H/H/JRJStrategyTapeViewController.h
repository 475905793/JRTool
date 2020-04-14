//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseTableViewController.h"

@class JRJIndexHeaderView, JRJSuggestPositionsView, JRJTapeHeadView, JRJYieldCurveView, NSArray, NSDictionary, NSString, UILabel;

@interface JRJStrategyTapeViewController : JRJBaseTableViewController
{
    _Bool _isManualRrefresh;
    _Bool _loading;
    _Bool _hasData;
    _Bool _zPointValid;
    JRJIndexHeaderView *_indexHeadView;
    NSArray *_historyPositionList;
    NSArray *_fundFlowList;
    NSArray *_hotSniperPlateList;
    NSDictionary *_profitVO;
    double _suggestPosition;
    NSString *_suggestPositionDisp;
    NSDictionary *_marketVO;
    NSDictionary *_zSPointVO;
    NSDictionary *_trendVO;
    JRJTapeHeadView *_headView;
    JRJSuggestPositionsView *_suggestView;
    long long _selectedIndex;
    UILabel *_headDescribeLabel;
    UILabel *_headTrendLabel;
    JRJYieldCurveView *_curveView;
    unsigned long long _indexType;
}

@property(nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
@property(retain, nonatomic) JRJYieldCurveView *curveView; // @synthesize curveView=_curveView;
@property(retain, nonatomic) UILabel *headTrendLabel; // @synthesize headTrendLabel=_headTrendLabel;
@property(retain, nonatomic) UILabel *headDescribeLabel; // @synthesize headDescribeLabel=_headDescribeLabel;
@property(nonatomic) _Bool zPointValid; // @synthesize zPointValid=_zPointValid;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) JRJSuggestPositionsView *suggestView; // @synthesize suggestView=_suggestView;
@property(retain, nonatomic) JRJTapeHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSDictionary *trendVO; // @synthesize trendVO=_trendVO;
@property(retain, nonatomic) NSDictionary *zSPointVO; // @synthesize zSPointVO=_zSPointVO;
@property(retain, nonatomic) NSDictionary *marketVO; // @synthesize marketVO=_marketVO;
@property(retain, nonatomic) NSString *suggestPositionDisp; // @synthesize suggestPositionDisp=_suggestPositionDisp;
@property(nonatomic) double suggestPosition; // @synthesize suggestPosition=_suggestPosition;
@property(retain, nonatomic) NSDictionary *profitVO; // @synthesize profitVO=_profitVO;
@property(retain, nonatomic) NSArray *hotSniperPlateList; // @synthesize hotSniperPlateList=_hotSniperPlateList;
@property(retain, nonatomic) NSArray *fundFlowList; // @synthesize fundFlowList=_fundFlowList;
@property(retain, nonatomic) NSArray *historyPositionList; // @synthesize historyPositionList=_historyPositionList;
@property(nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool isManualRrefresh; // @synthesize isManualRrefresh=_isManualRrefresh;
@property(retain, nonatomic) JRJIndexHeaderView *indexHeadView; // @synthesize indexHeadView=_indexHeadView;
- (void).cxx_destruct;
- (void)rightBarItemClicked;
- (id)rightNavigationBarItem;
- (void)didReceiveMemoryWarning;
- (void)p_showZ;
- (void)p_showTrendWithId:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)handleData:(id)arg1;
- (void)requestData;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

@end
