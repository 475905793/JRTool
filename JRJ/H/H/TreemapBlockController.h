//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "TreemapBlockBottomViewDataSource-Protocol.h"
#import "TreemapViewDataSource-Protocol.h"
#import "TreemapViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JRJNoStockView, JRJStockGroupModel, JRJTreemapBlockPopoverView, NSArray, NSMutableArray, NSString, NSTimer, StockTitleView, TreemapBlockBkTopToolView, TreemapBlockBottomView, TreemapBlockTopToolView, TreemapView, UIBarButtonItem, UIControl, UIScrollView, UITableView;

@interface TreemapBlockController : JRJBaseViewController <TreemapViewDelegate, TreemapViewDataSource, TreemapBlockBottomViewDataSource, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    int dateIndex;
    int colorTypeIndex;
    int valCountIndex;
    TreemapView *treemap;
    TreemapBlockTopToolView *topMenuView;
    TreemapBlockBkTopToolView *bkTopMenuView;
    TreemapBlockBottomView *bottomView;
    NSMutableArray *lineValueList;
    double maxValue;
    double minValue;
    NSArray *fillColorList;
    NSArray *fillColorList1;
    UITableView *typeMenuView;
    int selMenu;
    _Bool isShowMenu;
    UIControl *maskView;
    UIScrollView *scroll;
    UIBarButtonItem *rightButton;
    _Bool isStockList;
    _Bool _isNetworkError;
    _Bool _isCancelLongPress;
    NSString *platCode;
    NSString *platName;
    long long groupId;
    unsigned long long _bkType;
    NSMutableArray *_dataArray;
    NSTimer *_timer;
    JRJNoStockView *_noStockView;
    JRJStockGroupModel *_selectedGroup;
    JRJTreemapBlockPopoverView *_popoverView;
    StockTitleView *_titleView1;
    long long _currentIndex;
    NSString *_signalTimestamp1;
    NSString *_signalTimestamp2;
}

@property(copy, nonatomic) NSString *signalTimestamp2; // @synthesize signalTimestamp2=_signalTimestamp2;
@property(copy, nonatomic) NSString *signalTimestamp1; // @synthesize signalTimestamp1=_signalTimestamp1;
@property(nonatomic) _Bool isCancelLongPress; // @synthesize isCancelLongPress=_isCancelLongPress;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) StockTitleView *titleView1; // @synthesize titleView1=_titleView1;
@property(retain, nonatomic) JRJTreemapBlockPopoverView *popoverView; // @synthesize popoverView=_popoverView;
@property(nonatomic) _Bool isNetworkError; // @synthesize isNetworkError=_isNetworkError;
@property(retain, nonatomic) JRJStockGroupModel *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(retain, nonatomic) JRJNoStockView *noStockView; // @synthesize noStockView=_noStockView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) unsigned long long bkType; // @synthesize bkType=_bkType;
@property(nonatomic) long long groupId; // @synthesize groupId;
@property(retain, nonatomic) NSString *platName; // @synthesize platName;
@property(retain, nonatomic) NSString *platCode; // @synthesize platCode;
@property(nonatomic) _Bool isStockList; // @synthesize isStockList;
- (void).cxx_destruct;
- (void)didClickAbnormalSignalPopoverWithTreemapIndex:(long long)arg1;
- (void)showAbnormalSignalWithTreemapData:(id)arg1 obj:(id)arg2;
- (void)configAbnormalSignal:(id)arg1;
- (void)requestMaptreeSignalList;
- (int)getRightMenuShowType;
- (void)setDateIndex:(int)arg1;
- (void)setColorIndex:(int)arg1;
- (void)showScreenView;
- (void)shareButtonPressed:(id)arg1;
- (void)clickAction;
- (void)hideMenu;
- (void)hideMenuWithResetMenuStatus;
- (void)showMenu;
- (_Bool)isSelectMenuItem:(int)arg1;
- (void)showMenuClickWithButtonIndex:(long long)arg1;
- (int)getLimitParamValueByIndex:(int)arg1;
- (int)getDateParamValueByIndex:(int)arg1;
- (void)genValueList:(id)arg1;
- (void)setMaxMinValue;
- (void)dealData:(id)arg1;
- (void)requestDataWithShowNetStatus:(_Bool)arg1;
- (id)getLocalStockParamStr;
- (void)synchronousData;
- (void)refreshDataPeriodically;
- (void)updateCell:(id)arg1 forIndex:(long long)arg2;
- (void)trackClickActionWithSelectMenu:(int)arg1 withMenuIndex:(int)arg2;
- (void)bkQuotAction;
- (void)refreshStockListView:(_Bool)arg1;
- (_Bool)haveStockWithSelectGroup;
- (void)startStockSearchViewController;
- (void)resetTopMenuView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (int)treemapBlockBottomViewShowType:(id)arg1;
- (id)treemapBlockBottomViewGetTitle:(id)arg1 withIndex:(int)arg2;
- (id)treemapBlockBottomViewGetCellColor:(id)arg1 withIndex:(int)arg2;
- (int)treemapBlockBottomViewColorCellCount:(id)arg1;
- (void)treemapView:(id)arg1 updateCell:(id)arg2 forIndex:(long long)arg3 forRect:(struct CGRect)arg4;
- (id)treemapView:(id)arg1 cellForIndex:(long long)arg2 forRect:(struct CGRect)arg3;
- (id)valuesForTreemapView:(id)arg1;
- (void)longPressEndTreemapView:(id)arg1 areaIndex:(long long)arg2;
- (void)longPressBeginTreemapView:(id)arg1 areaIndex:(long long)arg2;
- (void)treemapView:(id)arg1 tapped:(long long)arg2;
- (void)loadListRequest;
- (void)refreshViewBeginRefresh:(id)arg1;
- (id)title;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

