//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SystemConfig : NSObject
{
    _Bool _isHaveLoad;
    long long _fontSize;
    long long _refreshInterval;
    int _marketStatus;
    long long _cellularRefreshType;
    long long _wifiRefreshType;
    long long _serverDeviceTimeInterval;
    CDUnknownBlockType _didChangeRefreshTimeInterval;
}

+ (_Bool)canStockInfoRefresh;
+ (long long)wifiRefreshInterval;
+ (long long)cellularRefreshInterval;
+ (_Bool)refreshShouldRepeat;
+ (long long)refreshTimeIntervalAtCurrentNetworkEnvironment;
+ (id)stringForRefreshType:(long long)arg1;
+ (id)refreshTitle;
+ (long long)selectedRow:(long long)arg1;
+ (id)sharedSysConfig;
+ (void)timeDidChanged:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didChangeRefreshTimeInterval; // @synthesize didChangeRefreshTimeInterval=_didChangeRefreshTimeInterval;
@property(nonatomic) int marketStatus; // @synthesize marketStatus=_marketStatus;
@property(nonatomic) long long serverDeviceTimeInterval; // @synthesize serverDeviceTimeInterval=_serverDeviceTimeInterval;
@property(nonatomic) long long wifiRefreshType; // @synthesize wifiRefreshType=_wifiRefreshType;
@property(nonatomic) long long cellularRefreshType; // @synthesize cellularRefreshType=_cellularRefreshType;
- (void).cxx_destruct;
- (void)updateServerAndDeviceTimeInterval:(id)arg1;
- (long long)refreshType;
@property(nonatomic) _Bool isHaveLoad;
- (void)setRefreshInterval:(long long)arg1;
@property(nonatomic) long long fontSize;
- (long long)refreshInterval;
- (id)huShen300Dic;
- (id)shangzIndexDic;
- (id)shenzIndexDic;
- (id)init;

@end

