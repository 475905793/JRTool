//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTStockSummaryUnloginRequest, JRJZixuanHandler, NSMutableArray;

@interface JRJmyStockManager : NSObject
{
    _Bool _isInActivate;
    _Bool _ActivateFinish;
    NSMutableArray *_addStockArray;
    long long _inActivateNum;
    JRJZixuanHandler *_zixuanHandler;
    FTStockSummaryUnloginRequest *_quotationRequest;
    NSMutableArray *_quotationRequestArray;
}

+ (id)instance;
+ (void)configAddStockArray:(id)arg1;
+ (void)addStockWithArray:(id)arg1 withParentVC:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)makeModelWithCode:(id)arg1 name:(id)arg2 market:(id)arg3 stockType:(id)arg4;
+ (_Bool)canAddStockWithModel:(id)arg1;
+ (_Bool)canAddStockWithCode:(id)arg1 name:(id)arg2 market:(id)arg3 stockType:(id)arg4;
+ (id)mrktTransformation:(id)arg1 name:(id)arg2 type:(id)arg3 mrkt:(id)arg4;
+ (id)stockTypeTransformation:(id)arg1 name:(id)arg2 type:(id)arg3 mrkt:(id)arg4;
+ (_Bool)stockExistsWithCode:(id)arg1 name:(id)arg2 market:(id)arg3 stockType:(id)arg4;
+ (void)addIntoGroup:(id)arg1 vc:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)addStockWithCode:(id)arg1 name:(id)arg2 marketType:(id)arg3 stockType:(id)arg4 viewControll:(id)arg5 completion:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) NSMutableArray *quotationRequestArray; // @synthesize quotationRequestArray=_quotationRequestArray;
@property(retain, nonatomic) FTStockSummaryUnloginRequest *quotationRequest; // @synthesize quotationRequest=_quotationRequest;
@property(retain, nonatomic) JRJZixuanHandler *zixuanHandler; // @synthesize zixuanHandler=_zixuanHandler;
@property(nonatomic) _Bool ActivateFinish; // @synthesize ActivateFinish=_ActivateFinish;
@property(nonatomic) _Bool isInActivate; // @synthesize isInActivate=_isInActivate;
@property(nonatomic) long long inActivateNum; // @synthesize inActivateNum=_inActivateNum;
@property(retain, nonatomic) NSMutableArray *addStockArray; // @synthesize addStockArray=_addStockArray;
- (void).cxx_destruct;
- (id)loadmyStockLocalDataUnLogin;
- (id)loadmyStockLocalDataWithCurrentGroupId:(id)arg1;
- (int)getMyStockListCount;
- (_Bool)isHasMyStockList;
- (id)loadmyStockLocalData;
- (id)loadmyStockLocalDataInUserLoginWithGroupId:(id)arg1;
- (id)convertToSecuritySummaryWithStockQuatation:(id)arg1;
- (id)convertToStockWithSecuritySummary:(id)arg1 withModel:(id)arg2;
- (id)convertToStockWithSecuritySummary:(id)arg1;
- (id)convertToSyncItemWithStock:(id)arg1;
- (void)getProfitAndLossFromServer:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)getQuotationFromServer:(id)arg1 su:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)getloacalQuotation:(id)arg1;
- (_Bool)deleteAllHistorise;
- (_Bool)insertModelToHistory:(id)arg1;
- (id)getALLHistory;
- (id)allModelWithGroup:(id)arg1;
- (id)allGroup:(id)arg1;
- (void)removeUserAllStocks:(id)arg1;
- (void)editGroup:(id)arg1 groupId:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)deleteGroup:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)orderGroups:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)addGroupWithName:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)deleteFromGroupWithModels:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)addModelToGroup:(id)arg1 model:(id)arg2 finish:(CDUnknownBlockType)arg3;
- (void)addStockArrayToGroup:(id)arg1 stockArray:(id)arg2 finish:(CDUnknownBlockType)arg3;
- (_Bool)isExistsStockWithGroupModel:(id)arg1 user:(id)arg2;
- (_Bool)isExistsStockWithGroupModel:(id)arg1 groupId:(id)arg2;
- (void)orderStocks:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (id)searchStockInAllGroup:(id)arg1;
- (id)orderStocksInDefaultGroup:(id)arg1;
- (id)deleteFromDefaultGroupWithModels:(id)arg1;
- (id)addModelToDefaultGroup:(id)arg1;
- (id)localGroup;
- (_Bool)haveBeenAddedStock:(id)arg1;
- (void)removeGroupsAndStocks:(id)arg1;
- (void)synchronousStockWithGourp:(id)arg1 Successed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)synchronousStocksSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2 fetchUserGroupList:(_Bool)arg3 groupList:(id)arg4;
- (void)addDefaultGroupToServerSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)synchronousUpdateStockSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)synchronousOnlyUpdateGroupSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)synchronousUpdateServerStockToLocal;
- (void)synchronousUpdateCurrentGroupStockSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)submitStockToServerWithGroups:(id)arg1;
- (void)relayMergaeStockToGroup:(id)arg1;
- (void)mergeStockToGroup:(id)arg1;
- (void)InitializationData;
- (id)createTable;
- (id)init;
- (_Bool)isOnlyOneGroupInUser:(id)arg1;

@end

