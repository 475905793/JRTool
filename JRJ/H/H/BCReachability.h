//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BCReachability : NSObject
{
    _Bool _reachableOnWWAN;
    CDUnknownBlockType _reachableBlock;
    CDUnknownBlockType _unreachableBlock;
    CDUnknownBlockType _reachabilityBlock;
    struct __SCNetworkReachability *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_reachabilitySerialQueue;
    id _reachabilityObject;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(void *)arg1;
+ (id)reachabilityWithHostname:(id)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject=_reachabilityObject;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue=_reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(nonatomic) _Bool reachableOnWWAN; // @synthesize reachableOnWWAN=_reachableOnWWAN;
@property(copy, nonatomic) CDUnknownBlockType reachabilityBlock; // @synthesize reachabilityBlock=_reachabilityBlock;
@property(copy, nonatomic) CDUnknownBlockType unreachableBlock; // @synthesize unreachableBlock=_unreachableBlock;
@property(copy, nonatomic) CDUnknownBlockType reachableBlock; // @synthesize reachableBlock=_reachableBlock;
- (void).cxx_destruct;
- (id)description;
- (void)reachabilityChanged:(unsigned int)arg1;
- (id)currentReachabilityFlags;
- (id)currentReachabilityString;
- (unsigned int)reachabilityFlags;
- (long long)currentReachabilityStatus;
- (_Bool)isInterventionRequired;
- (_Bool)isConnectionOnDemand;
- (_Bool)connectionRequired;
- (_Bool)isConnectionRequired;
- (_Bool)isReachableViaWiFi;
- (_Bool)isReachableViaWWAN;
- (_Bool)isReachable;
- (_Bool)isReachableWithFlags:(unsigned int)arg1;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;

@end

