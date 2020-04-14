//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _priv_NBSEventForest : NSObject
{
    NSMutableDictionary *eventDict;
    NSMutableArray *appStartsArray;
    NSMutableArray *userActionArray;
    NSLock *arrayLock;
    NSLock *dictLock;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)getCompletedTrees;
- (void)addCompletedEventTree:(id)arg1;
- (id)findActiveTree;
- (id)findEventTree:(id)arg1;
- (void)removeEventTree:(id)arg1;
- (void)addEventTree:(id)arg1 withKey:(id)arg2;
- (void)dealloc;
- (void)breakIn;
- (void)checkCrashAction;
- (id)init;

@end

