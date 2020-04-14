//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JRJZhiboMessage, MLLabel, NSArray, NSString, UITableView;

@interface JRJZhiboLargeMessageViewController : JRJBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    JRJZhiboMessage *_message;
    CDUnknownBlockType _closeBlock;
    NSArray *_data;
    UITableView *_tableView;
    MLLabel *_contentLabel;
    MLLabel *_quoteLabel;
    double _paddingTop;
}

@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) MLLabel *quoteLabel; // @synthesize quoteLabel=_quoteLabel;
@property(retain, nonatomic) MLLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) JRJZhiboMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)p_reloadMessage;
- (void)didTap:(id)arg1;
- (void)viewDidLoad;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
