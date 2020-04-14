//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

@class JRJAdviserHandler, JRJAnsweHomerHandler, JRJAnswerLabelCell, JRJAnswerSearchHandler, NSString, UIBarButtonItem;

@interface JRJAskStockSuccessViewController : KKTableViewController
{
    NSString *_textTitle;
    _Bool _isFollow;
    NSString *_stockCode;
    NSString *_stockName;
    NSString *_adviserName;
    NSString *_adviserId;
    long long _waitTime;
    double _pubTime;
    NSString *_code;
    JRJAnswerSearchHandler *_handler;
    JRJAnsweHomerHandler *_homeHandler;
    JRJAnswerLabelCell *_labelCell;
    JRJAdviserHandler *_adviserHandler;
    UIBarButtonItem *_askAgainBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *askAgainBarButtonItem; // @synthesize askAgainBarButtonItem=_askAgainBarButtonItem;
@property(retain, nonatomic) JRJAdviserHandler *adviserHandler; // @synthesize adviserHandler=_adviserHandler;
@property(retain, nonatomic) JRJAnswerLabelCell *labelCell; // @synthesize labelCell=_labelCell;
@property(retain, nonatomic) JRJAnsweHomerHandler *homeHandler; // @synthesize homeHandler=_homeHandler;
@property(retain, nonatomic) JRJAnswerSearchHandler *handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) double pubTime; // @synthesize pubTime=_pubTime;
@property(nonatomic) long long waitTime; // @synthesize waitTime=_waitTime;
@property(copy, nonatomic) NSString *adviserId; // @synthesize adviserId=_adviserId;
@property(copy, nonatomic) NSString *adviserName; // @synthesize adviserName=_adviserName;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
- (void).cxx_destruct;
- (void)askAgain;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isAppointAskAdviser;
- (id)title;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)createFinshView:(id)arg1;
- (void)createPushView:(id)arg1;
- (id)dataSourceHandle:(id)arg1;
- (void)p_showDetailWithAnswer:(id)arg1;
- (void)reloadDataSource;
- (void)fetchSearchResult;
- (void)updateSource:(id)arg1;
- (void)registerNSNotification;
- (id)createBackBtn;
- (void)setLeftNavigationItemBarButton;
- (void)delayShowCloseButton:(double)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
