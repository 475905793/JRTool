//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface _priv_NBSLensAppStartsReporter : NSObject
{
    NSArray *postDatas;
    NSObject<OS_dispatch_queue> *queue;
    NSArray *_appStartItems;
}

+ (id)sharedReporter;
@property(retain, nonatomic) NSArray *appStartItems; // @synthesize appStartItems=_appStartItems;
- (void).cxx_destruct;
- (void)reportData;
- (void)postDataToServer;
- (id)init;

@end

