//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLock.h>

@class NSMutableArray;

@interface _priv_NBSLensCustomerEventLogger : NSLock
{
    NSMutableArray *_customerEvents;
}

+ (id)shareLogger;
@property(retain, nonatomic) NSMutableArray *customerEvents; // @synthesize customerEvents=_customerEvents;
- (void).cxx_destruct;
- (void)clear;
- (id)renderCustomerEvents;
- (void)logCustomerEvent:(id)arg1;

@end

