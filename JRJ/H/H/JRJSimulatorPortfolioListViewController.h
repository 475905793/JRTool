//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class JRJSimulatorPortfolioHandler;

@interface JRJSimulatorPortfolioListViewController : KKTableViewController
{
    JRJSimulatorPortfolioHandler *_handler;
}

@property(retain, nonatomic) JRJSimulatorPortfolioHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)restartRequestWhenNetworkErrorOccurred;
- (void)didReceiveMemoryWarning;
- (void)delayLoadMore;
- (void)reloadDataSource:(id)arg1 isCache:(_Bool)arg2;
- (void)fetchPortfolioList;
- (void)viewDidLoad;

@end

