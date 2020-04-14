//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface JRJZhiboArchivedVideoViewController : JRJListTableViewController <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _moreBlock;
    CDUnknownBlockType _toggleBlock;
    UILabel *_titleLabel;
    UILabel *_moreLabel;
    UIImageView *_arrowImageView;
    UIButton *_moreButton;
    UIView *_separator;
    UIView *_loadingView;
    UIActivityIndicatorView *_loadingIndicator;
    UIButton *_closeButton;
    UIView *_emptyView;
    UIView *_backgroundView;
    NSString *_adviserId;
}

@property(retain, nonatomic) NSString *adviserId; // @synthesize adviserId=_adviserId;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType toggleBlock; // @synthesize toggleBlock=_toggleBlock;
@property(copy, nonatomic) CDUnknownBlockType moreBlock; // @synthesize moreBlock=_moreBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)p_handleResponse:(id)arg1;
- (void)p_stopLoading;
- (void)showLoadingViewWithState:(long long)arg1;
- (void)moreButtonTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)dismiss;
- (void)loadListRequest;
- (void)makeConstraints;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAdviserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
