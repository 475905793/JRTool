//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface StockNameCacheManager : NSObject
{
    NSCache *_memCache;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
- (void).cxx_destruct;
- (void)removeAllObjects;

@end

