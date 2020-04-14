//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJToutiaoListViewController.h"

@class JRJToutiaoJiHuiHeaderView, NSMutableArray, NSString;

@interface JRJToutiaoJiHuiViewController : JRJToutiaoListViewController
{
    NSMutableArray *_sections;
    NSMutableArray *_models;
    NSString *_lastIIID;
    JRJToutiaoJiHuiHeaderView *_tableHeaderView;
}

@property(retain, nonatomic) JRJToutiaoJiHuiHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) NSString *lastIIID; // @synthesize lastIIID=_lastIIID;
@property(retain, nonatomic) NSMutableArray *models; // @synthesize models=_models;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)cellForRowAtIndexPath:(id)arg1;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_splitToSectionsWithArray:(id)arg1;
- (id)p_modelAtSection:(long long)arg1 row:(long long)arg2;
- (void)turnToTheNextPage;
- (id)dataArrayWithResponse:(id)arg1;
- (id)dataSource;
- (id)APIURLString;
- (void)viewDidLoad;
- (id)init;

@end

