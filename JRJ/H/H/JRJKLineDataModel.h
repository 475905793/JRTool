//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJKLineDataModel : NSObject
{
    NSString *_nSecurityID;
    unsigned long long _nTime;
    long long _nPreClosePx;
    long long _nOpenPx;
    long long _nHighPx;
    long long _nLowPx;
    long long _nLastPx;
    long long _llVolume;
    long long _llValue;
    long long _nAvgPx;
    long long _nIndex;
}

@property(nonatomic) long long nIndex; // @synthesize nIndex=_nIndex;
@property(nonatomic) long long nAvgPx; // @synthesize nAvgPx=_nAvgPx;
@property(nonatomic) long long llValue; // @synthesize llValue=_llValue;
@property(nonatomic) long long llVolume; // @synthesize llVolume=_llVolume;
@property(nonatomic) long long nLastPx; // @synthesize nLastPx=_nLastPx;
@property(nonatomic) long long nLowPx; // @synthesize nLowPx=_nLowPx;
@property(nonatomic) long long nHighPx; // @synthesize nHighPx=_nHighPx;
@property(nonatomic) long long nOpenPx; // @synthesize nOpenPx=_nOpenPx;
@property(nonatomic) long long nPreClosePx; // @synthesize nPreClosePx=_nPreClosePx;
@property(nonatomic) unsigned long long nTime; // @synthesize nTime=_nTime;
@property(copy, nonatomic) NSString *nSecurityID; // @synthesize nSecurityID=_nSecurityID;
- (void).cxx_destruct;

@end

