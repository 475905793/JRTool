//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MOBFDataService : NSObject
{
    NSMutableDictionary *_cacheDataDomains;
    NSMutableDictionary *_cacheDataRetainCounts;
    NSMutableDictionary *_secureDataCollection;
    NSMutableDictionary *_sharedDataCollection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *sharedDataCollection; // @synthesize sharedDataCollection=_sharedDataCollection;
@property(retain, nonatomic) NSMutableDictionary *secureDataCollection; // @synthesize secureDataCollection=_secureDataCollection;
@property(retain, nonatomic) NSMutableDictionary *cacheDataRetainCounts; // @synthesize cacheDataRetainCounts=_cacheDataRetainCounts;
@property(retain, nonatomic) NSMutableDictionary *cacheDataDomains; // @synthesize cacheDataDomains=_cacheDataDomains;
- (void).cxx_destruct;
- (void)_clearCacheData:(id)arg1;
- (id)cacheDataByTraceDomain:(id)arg1;
- (id)cacheDataFilePathForDomain:(id)arg1;
- (id)cacheDataForDomain:(id)arg1;
- (void)saveSecureDataContainer:(id)arg1;
- (id)secureDataContainer;
- (id)keychainQuery;
- (void)_saveCacheData:(id)arg1 forDomain:(id)arg2;
- (id)_cacheDataForDomain:(id)arg1 hasInTrans:(_Bool *)arg2;
- (id)_cacheDataForKey:(id)arg1;
- (void)_setCacheData:(id)arg1 forKey:(id)arg2;
- (void)_endCacheDataTrans;
- (void)_beginCacheDataTrans;
- (id)secureDataForKey:(id)arg1;
- (void)setSecureData:(id)arg1 forKey:(id)arg2;
- (void)endSecureDataTrans;
- (void)beginSecureDataTrans;
- (id)cacheDataForKey:(id)arg1 domain:(id)arg2;
- (void)setCacheData:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
- (void)endCacheDataTransForDomain:(id)arg1;
- (void)beginCacheDataTransForDomain:(id)arg1;
- (id)sharedDataForKey:(id)arg1;
- (void)setSharedData:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

