//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseHandler.h"

@class JRJPortfolioAdviser, NSDictionary, NSIndexPath;

@interface JRJMyPortfolioHandler : BaseHandler
{
    _Bool _isFirstPage;
    _Bool _showAdviser;
    _Bool _isAdviserPortfolioList;
    long long _pageIndex;
    long long _totlaPages;
    JRJPortfolioAdviser *_portfolio;
    NSIndexPath *_clickedPath;
    NSDictionary *_matchRate;
}

@property(retain, nonatomic) NSDictionary *matchRate; // @synthesize matchRate=_matchRate;
@property(retain, nonatomic) NSIndexPath *clickedPath; // @synthesize clickedPath=_clickedPath;
@property(retain, nonatomic) JRJPortfolioAdviser *portfolio; // @synthesize portfolio=_portfolio;
@property(nonatomic) _Bool isAdviserPortfolioList; // @synthesize isAdviserPortfolioList=_isAdviserPortfolioList;
@property(nonatomic) _Bool showAdviser; // @synthesize showAdviser=_showAdviser;
@property(nonatomic) _Bool isFirstPage; // @synthesize isFirstPage=_isFirstPage;
@property(nonatomic) long long totlaPages; // @synthesize totlaPages=_totlaPages;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (_Bool)isNeedAutoLoadingResponse:(id)arg1;
- (_Bool)isCacheResponse:(id)arg1;
- (id)updateAdviserPortflioModelList:(id)arg1;
- (id)updateMyPortfolioModelList:(id)arg1;
- (id)viewModelOfClass:(Class)arg1 fromModelArray:(id)arg2;
- (id)responseObjectForResponse:(id)arg1 responseObject:(id)arg2 error:(id *)arg3;
- (void)changeReceiveMsg:(id)arg1 isReceiveMsg:(int)arg2 index:(id)arg3 block:(CDUnknownBlockType)arg4 cacheBlock:(CDUnknownBlockType)arg5;
- (void)fetchAdviserMatchRateWithAdviserId:(id)arg1 block:(CDUnknownBlockType)arg2 cacheBlock:(CDUnknownBlockType)arg3;
- (void)fetchAdviserPortfolioList:(id)arg1 block:(CDUnknownBlockType)arg2 cacheBlock:(CDUnknownBlockType)arg3;
- (void)fetchMySubscribedPortfolioList:(int)arg1 block:(CDUnknownBlockType)arg2 cacheBlock:(CDUnknownBlockType)arg3;

@end

