//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class JRJAdviserInfoView, JRJPortfolioMasterDetailHandler, JRJPortfolioToolbar, NSString;

@interface JRJPOrtfolioMasterDetailViewController : KKTableViewController
{
    NSString *_pid;
    JRJPortfolioMasterDetailHandler *_handler;
    JRJAdviserInfoView *_adviserInfoView;
    JRJPortfolioToolbar *_toolbarView;
}

@property(retain, nonatomic) JRJPortfolioToolbar *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) JRJAdviserInfoView *adviserInfoView; // @synthesize adviserInfoView=_adviserInfoView;
@property(retain, nonatomic) JRJPortfolioMasterDetailHandler *handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)reloadDataSource;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)refreshTableViewHeader;
- (void)updateHeaderView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)fetchChartData;
- (void)fetchDetail;
- (void)storeAndUnstorePortfolio;
- (void)doFavoriteBtnClicked;
- (void)doCommentBtnClicked;
- (void)bookAndUnbookPortfolio;
- (void)doClickBuyBtn;
- (void)setupToolbar;
- (void)shieldBtnClicked;
- (void)addShieldButton;
- (void)viewDidLoad;
- (void)tableViewBgColor;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

@end
