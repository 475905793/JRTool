//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseHandler.h"

@interface JRJZixuanHandler : BaseHandler
{
    CDUnknownBlockType _requetDataError;
}

@property(copy, nonatomic) CDUnknownBlockType requetDataError; // @synthesize requetDataError=_requetDataError;
- (void).cxx_destruct;
- (void)requestError:(id)arg1 code:(id)arg2;
- (id)handlelMyStockListWithAllGroup:(id)arg1;
- (id)handlelMyStockList:(id)arg1;
- (id)handleMyGroupList:(id)arg1;
- (id)handlerAddStockResponse:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 responseObject:(id)arg2 error:(id *)arg3;
- (void)fetchProfitAndLoss:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)orderMyGroup:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)editGroup:(id)arg1 groupId:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)orderMyStock:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)delGroup:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)addGroup:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)delMystock:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)addMystock:(id)arg1 groupId:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)fetchMyStockWithAllGroup:(CDUnknownBlockType)arg1;
- (void)fetchMyStockWithGroupId:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)fetchUserGroupList:(CDUnknownBlockType)arg1;
- (void)userActivate:(CDUnknownBlockType)arg1;

@end
