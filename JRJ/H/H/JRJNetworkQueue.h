//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASINetworkQueue, NSMutableDictionary;

@interface JRJNetworkQueue : NSObject
{
    ASINetworkQueue *_networkQueue;
    NSMutableDictionary *_cacheRequest;
}

+ (id)sharedNetWork;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;
- (void)ASINetworkQueueFailed:(id)arg1;
- (void)ASINetworkQueueFinished:(id)arg1;
- (void)ASIRequestFinished:(id)arg1;
- (void)ASIRequestFailed:(id)arg1;
- (id)requestForASIRequest:(id)arg1;
- (void)removeForRequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)configASINetworkQueue:(_Bool)arg1;
- (id)init;

@end
