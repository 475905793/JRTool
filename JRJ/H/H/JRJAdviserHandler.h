//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseHandler.h"

@interface JRJAdviserHandler : BaseHandler
{
    long long _nextIndex;
}

@property(nonatomic) long long nextIndex; // @synthesize nextIndex=_nextIndex;
- (void)unFollowAdviser:(id)arg1;
- (void)followAdviser:(id)arg1;
- (void)adviserRankList:(id)arg1 andPageSize:(long long)arg2 andDirection:(id)arg3 andId:(long long)arg4 andUserId:(id)arg5 andIsFirst:(long long)arg6 block:(CDUnknownBlockType)arg7;
- (void)searchAdviser:(id)arg1 searchType:(id)arg2 pageIndex:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)followAdviser:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)followUsesr:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)handleParseAdviserHomeList:(id)arg1;
- (id)handleParseResponseObject:(id)arg1 isFirstPage:(_Bool)arg2;
- (id)responseObjectForResponse:(id)arg1 responseObject:(id)arg2 error:(id *)arg3;
- (Class)responseClass:(id)arg1;
- (_Bool)isNeedAutoLoadingResponse:(id)arg1;
- (long long)lastModelId;
- (_Bool)isCacheResponse:(id)arg1;
- (void)fetchAdviserBestPoint:(long long)arg1 block:(CDUnknownBlockType)arg2 cacheBlock:(CDUnknownBlockType)arg3;
- (void)fetchAdviserHotLive:(long long)arg1 block:(CDUnknownBlockType)arg2 cacheBlock:(CDUnknownBlockType)arg3;
- (void)fetchAdviserNewAdivser:(long long)arg1 block:(CDUnknownBlockType)arg2 cacheBlock:(CDUnknownBlockType)arg3;
- (void)fetchAdviserAnserMost:(long long)arg1 block:(CDUnknownBlockType)arg2 cacheBlock:(CDUnknownBlockType)arg3;
- (void)fetchHotAdviserList:(CDUnknownBlockType)arg1 cacheBlock:(CDUnknownBlockType)arg2;

@end
