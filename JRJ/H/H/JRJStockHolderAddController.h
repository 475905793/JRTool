//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "JRJOrientationAdditionFillterViewDelegate-Protocol.h"

@class JRJStockHolderAddHeaderView, NSDictionary, NSMutableArray, NSMutableString, NSString;

@interface JRJStockHolderAddController : JRJListTableViewController <JRJOrientationAdditionFillterViewDelegate>
{
    int _progressFlag;
    int _ratioFlag;
    int _addHoldFlag;
    unsigned long long _stockHolderType;
    NSMutableArray *_stockList;
    NSMutableArray *_groups;
    NSMutableArray *_returnGroups;
    NSDictionary *_responseDic;
    NSMutableString *_fillterString;
    JRJStockHolderAddHeaderView *_headerView;
    NSString *_trackName;
}

@property(retain, nonatomic) NSString *trackName; // @synthesize trackName=_trackName;
@property(retain, nonatomic) JRJStockHolderAddHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableString *fillterString; // @synthesize fillterString=_fillterString;
@property(nonatomic) int addHoldFlag; // @synthesize addHoldFlag=_addHoldFlag;
@property(nonatomic) int ratioFlag; // @synthesize ratioFlag=_ratioFlag;
@property(nonatomic) int progressFlag; // @synthesize progressFlag=_progressFlag;
@property(retain, nonatomic) NSDictionary *responseDic; // @synthesize responseDic=_responseDic;
@property(retain, nonatomic) NSMutableArray *returnGroups; // @synthesize returnGroups=_returnGroups;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSMutableArray *stockList; // @synthesize stockList=_stockList;
@property(nonatomic) unsigned long long stockHolderType; // @synthesize stockHolderType=_stockHolderType;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)keyWindow;
- (void)fillterResult:(id)arg1;
- (void)showFillterView;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)changeAddHoldFlag;
- (void)changeRatioFlag;
- (void)changeProgressFlag;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)declareAction;
- (void)handleData:(id)arg1;
- (id)sortParamString;
- (void)showErrorString;
- (void)requestStockHoldAdd;
- (void)requestFilterCondition;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)registTableView;
- (void)configRightNavigationItem;
- (void)requestData;
- (void)configTableViewBottomInset;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

