//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class JRJPortfolioRankingListHandler, NSArray, NSNumber;

@interface JRJPortfolioRankingListViewController : KKTableViewController
{
    NSNumber *_rankingTypeId;
    NSArray *_tableViewData;
    JRJPortfolioRankingListHandler *_handler;
}

@property(retain, nonatomic) JRJPortfolioRankingListHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSArray *tableViewData; // @synthesize tableViewData=_tableViewData;
@property(retain, nonatomic) NSNumber *rankingTypeId; // @synthesize rankingTypeId=_rankingTypeId;
- (void).cxx_destruct;
- (void)delayLoad;
- (void)reloadDataSource;
- (void)viewWillAppear:(_Bool)arg1;
- (void)fetchRankList;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)restartRequestWhenNetworkErrorOccurred;
- (void)shieldBtnClicked;
- (void)addShieldButton;
- (void)setTitle;
- (void)viewDidLoad;

@end

