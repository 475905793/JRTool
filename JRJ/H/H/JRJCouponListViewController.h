//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJListTableViewController.h"

@class JRJCouponHeaderView, NSString;

@interface JRJCouponListViewController : JRJListTableViewController
{
    _Bool _noData;
    _Bool _hideHeader;
    long long _type;
    long long _us;
    NSString *_adImageURLString;
    NSString *_adLinkURLString;
    double _adHeight;
    JRJCouponHeaderView *_containerView;
}

@property(retain, nonatomic) JRJCouponHeaderView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool hideHeader; // @synthesize hideHeader=_hideHeader;
@property(nonatomic) double adHeight; // @synthesize adHeight=_adHeight;
@property(retain, nonatomic) NSString *adLinkURLString; // @synthesize adLinkURLString=_adLinkURLString;
@property(retain, nonatomic) NSString *adImageURLString; // @synthesize adImageURLString=_adImageURLString;
@property(nonatomic) _Bool noData; // @synthesize noData=_noData;
@property(nonatomic) long long us; // @synthesize us=_us;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)resignFirstResponder;
- (void)alert:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)adPressed:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)requestCouponList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleRequestDataArray:(id)arg1;
- (void)loadDataWithPageId:(long long)arg1;
- (void)loadListRequest;
- (void)refreshViewBeginRefresh:(id)arg1;
- (void)addCoupon:(id)arg1;
- (void)addHeaderView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(long long)arg1;

@end

