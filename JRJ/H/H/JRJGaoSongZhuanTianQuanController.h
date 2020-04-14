//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StockMulityRefreshViewController.h"

#import "JRJOrientationAdditionFillterViewDelegate-Protocol.h"

@class JRJGaoSongZhuanTianQuanHeaderView, NSDictionary, NSMutableArray, NSMutableString, NSString;

@interface JRJGaoSongZhuanTianQuanController : StockMulityRefreshViewController <JRJOrientationAdditionFillterViewDelegate>
{
    _Bool _sortFlag;
    NSMutableArray *_groups;
    NSMutableArray *_returnGroups;
    NSDictionary *_responseDic;
    NSMutableString *_fillterString;
    JRJGaoSongZhuanTianQuanHeaderView *_headerView;
}

@property(retain, nonatomic) JRJGaoSongZhuanTianQuanHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableString *fillterString; // @synthesize fillterString=_fillterString;
@property(nonatomic) _Bool sortFlag; // @synthesize sortFlag=_sortFlag;
@property(retain, nonatomic) NSDictionary *responseDic; // @synthesize responseDic=_responseDic;
@property(retain, nonatomic) NSMutableArray *returnGroups; // @synthesize returnGroups=_returnGroups;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
- (void).cxx_destruct;
- (id)getCellTitleWithDic:(id)arg1 withIndex:(long long)arg2 withLabel:(id)arg3;
- (id)topScrollViewTitleStrAtIndex:(long long)arg1;
- (void)setSortKeyWithIndex:(long long)arg1 sortType:(long long)arg2;
- (void)topScrollViewTitleColumnClick:(id)arg1 withColumnIndex:(long long)arg2 withKey:(id)arg3 withSortType:(long long)arg4;
- (void)topScrollViewRightTableView:(id)arg1 topScrollViewCell:(id)arg2 atIndex:(id)arg3;
- (void)topScrollViewLeftTableView:(id)arg1 topScrollViewCell:(id)arg2 atIndex:(id)arg3;
- (double)topScrollViewSectionWidthAtSection:(long long)arg1;
- (void)topScrollView:(id)arg1 didSelectTopScrollViewCell:(id)arg2 atIndex:(id)arg3;
- (id)topScrollViewSectionViewAtSection:(long long)arg1;
- (id)sectionTitleArray;
- (id)keyWindow;
- (void)fillterResult:(id)arg1;
- (void)showFillterView;
- (void)declareAction;
- (void)handleData:(id)arg1;
- (void)showErrorString;
- (void)requestHighTransform;
- (void)requestFilterCondition;
- (void)configRightNavigationItem;
- (void)refreshData;
- (void)buildHeaderView;
- (void)configMultiTableView;
- (void)addMultiTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

