//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewModel.h"

@class NSArray;

@interface JRJStockSmartStareSettingListViewModel : MMViewModel
{
    NSArray *_stockGroups;
}

@property(retain, nonatomic) NSArray *stockGroups; // @synthesize stockGroups=_stockGroups;
- (void).cxx_destruct;
- (id)requestUrl;
- (void)configSmartSettingList:(id)arg1;
- (id)stockModelAtIndexPath:(id)arg1;
- (id)groupModelAtSection:(long long)arg1;
- (id)stockIdAtIndexPath:(id)arg1;
- (_Bool)stockSubscribeStatusAtIndexPath:(id)arg1;
- (id)stockCodeAtIndexPath:(id)arg1;
- (id)stockNameAtIndexPath:(id)arg1;
- (void)setGroupFoldingStatusAtSection:(long long)arg1;
- (_Bool)groupFoldingStatusAtSection:(long long)arg1;
- (_Bool)groupSubscribeStatusAtSection:(long long)arg1;
- (id)groupIdAtSection:(long long)arg1;
- (id)groupNameAtSection:(long long)arg1;
- (long long)numberOfRowsInSections:(long long)arg1;
- (long long)numberOfSections;
- (void)stockGroupSmartStareSetStatus:(_Bool)arg1 groupId:(id)arg2 stockId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadStockSmartStareList:(CDUnknownBlockType)arg1;

@end

