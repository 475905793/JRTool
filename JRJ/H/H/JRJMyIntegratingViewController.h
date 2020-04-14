//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseTableViewController.h"

#import "FTSegmentedControlDataSource-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class FTSegmentedControl, JRJMyIntegratingNewHeader, JRJMyintegatingAlertView, LoadingStateView, NSArray, NSDictionary, NSMutableArray, NSString, UIImageView, UIView;

@interface JRJMyIntegratingViewController : JRJBaseTableViewController <FTSegmentedControlDataSource, UIAlertViewDelegate>
{
    int funType;
    long long _taskId;
    _Bool activitySuccess;
    _Bool hasShowAlertView;
    _Bool _isFristAlertView;
    _Bool _showsSignPop;
    int _ftype;
    JRJMyIntegratingNewHeader *_headerViewAllScore;
    JRJMyintegatingAlertView *_mJRJMyintegatingAlertView;
    double _upOffsetY;
    double _popViewHeight;
    UIView *_viewPop;
    NSMutableArray *_iconsArray;
    NSMutableArray *_iconsArrayMail;
    NSMutableArray *_iconsArrayEarn;
    NSMutableArray *_iconsArrayActivities;
    NSDictionary *_todaySignDetailDic;
    NSDictionary *_taskListDic;
    NSArray *_arr_seg_titles;
    FTSegmentedControl *_seg_control;
    UIView *_allHeaderView;
    UIImageView *_BGImageView;
    UIView *_sv_section;
    LoadingStateView *__noneDataView;
}

+ (void)p_JRJMyIntegratingViewControllerWithIndex:(int)arg1;
+ (void)saveNewsTask:(id)arg1;
+ (_Bool)isFinishNewsTask:(id)arg1;
+ (void)doTaskWithTaskId:(id)arg1;
@property(retain, nonatomic) LoadingStateView *_noneDataView; // @synthesize _noneDataView=__noneDataView;
@property(retain, nonatomic) UIView *sv_section; // @synthesize sv_section=_sv_section;
@property(retain, nonatomic) UIImageView *BGImageView; // @synthesize BGImageView=_BGImageView;
@property(retain, nonatomic) UIView *allHeaderView; // @synthesize allHeaderView=_allHeaderView;
@property(retain, nonatomic) FTSegmentedControl *seg_control; // @synthesize seg_control=_seg_control;
@property(retain, nonatomic) NSArray *arr_seg_titles; // @synthesize arr_seg_titles=_arr_seg_titles;
@property(nonatomic) int ftype; // @synthesize ftype=_ftype;
@property(nonatomic) _Bool showsSignPop; // @synthesize showsSignPop=_showsSignPop;
@property(nonatomic) _Bool isFristAlertView; // @synthesize isFristAlertView=_isFristAlertView;
@property(retain, nonatomic) NSDictionary *taskListDic; // @synthesize taskListDic=_taskListDic;
@property(retain, nonatomic) NSDictionary *todaySignDetailDic; // @synthesize todaySignDetailDic=_todaySignDetailDic;
@property(retain, nonatomic) NSMutableArray *iconsArrayActivities; // @synthesize iconsArrayActivities=_iconsArrayActivities;
@property(retain, nonatomic) NSMutableArray *iconsArrayEarn; // @synthesize iconsArrayEarn=_iconsArrayEarn;
@property(retain, nonatomic) NSMutableArray *iconsArrayMail; // @synthesize iconsArrayMail=_iconsArrayMail;
@property(retain, nonatomic) NSMutableArray *iconsArray; // @synthesize iconsArray=_iconsArray;
@property(retain, nonatomic) UIView *viewPop; // @synthesize viewPop=_viewPop;
@property(nonatomic) double popViewHeight; // @synthesize popViewHeight=_popViewHeight;
@property(nonatomic) double upOffsetY; // @synthesize upOffsetY=_upOffsetY;
@property(retain, nonatomic) JRJMyintegatingAlertView *mJRJMyintegatingAlertView; // @synthesize mJRJMyintegatingAlertView=_mJRJMyintegatingAlertView;
@property(retain, nonatomic) JRJMyIntegratingNewHeader *headerViewAllScore; // @synthesize headerViewAllScore=_headerViewAllScore;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showJumpAlert;
- (void)openMyInvitations;
- (void)doNewUserTaskWithTaskId:(long long)arg1;
- (void)doTaskJumpToWithTaskId:(long long)arg1;
- (void)doTaskWithTaskId:(id)arg1;
- (void)getActivitiesList;
- (void)getProductList;
- (void)getMyTaskListStatus;
- (void)exchangeProductWithProductId:(id)arg1;
- (void)getTodaySignDetailIsInitPopView:(_Bool)arg1;
- (void)initTableViewStyle;
- (void)fetchCouponInfoWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showCreditAlertViewWithCouponInfo:(id)arg1 productID:(id)arg2;
- (void)clickExchangeBtn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)switchSegmentedControlToIndex:(long long)arg1;
- (struct CGRect)segmentedControl:(id)arg1 indicatorAtIndex:(long long)arg2;
- (_Bool)segmentedControl:(id)arg1 shouldReclickAtIndex:(long long)arg2;
- (void)segmentedControl:(id)arg1 selectAtIndexByMethod:(long long)arg2;
- (void)segmentedControl:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)segmentedControl:(id)arg1 willSelectAtIndex:(long long)arg2;
- (id)segmentedControl:(id)arg1 viewAtIndex:(long long)arg2;
- (long long)numberOfItemInSegmentedControl:(id)arg1;
- (void)clickScoreRule;
- (void)didReceiveMemoryWarning;
- (void)showJRJMyintegatingAlertView;
- (void)initSignPop;
- (void)initHeader;
- (void)removeFooter;
- (void)addFooter;
- (id)title;
- (void)requestData;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

