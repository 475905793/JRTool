//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface _priv_NBSLensCustomerAPIBusyItem : NSObject
{
    _Bool _isMainTHread;
    _Bool _isOtherStage;
    NSString *_eventName;
    NSString *_clsName;
    NSString *_methodName;
    NSString *_threadName;
    NSString *_threadId;
    NSNumber *_tm1;
    NSDictionary *_otherInfo;
}

@property(nonatomic) _Bool isOtherStage; // @synthesize isOtherStage=_isOtherStage;
@property(nonatomic) _Bool isMainTHread; // @synthesize isMainTHread=_isMainTHread;
@property(retain, nonatomic) NSDictionary *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(retain, nonatomic) NSNumber *tm1; // @synthesize tm1=_tm1;
@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(retain, nonatomic) NSString *clsName; // @synthesize clsName=_clsName;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;

@end

