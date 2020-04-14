//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DynamicConfigure : NSObject
{
    NSDictionary *_configuire;
    _Bool _isInvestGroupDetailUpgrade;
    NSDictionary *_configureChanged;
}

+ (id)sharedConfigure;
@property(readonly, nonatomic) NSDictionary *configureChanged; // @synthesize configureChanged=_configureChanged;
@property(readonly, nonatomic) _Bool isInvestGroupDetailUpgrade; // @synthesize isInvestGroupDetailUpgrade=_isInvestGroupDetailUpgrade;
@property(retain, nonatomic) NSDictionary *configuire; // @synthesize configuire=_configuire;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isInvestGroupListUpgrade;
@property(readonly, nonatomic) _Bool isInvestAdviserMatchOpen;
@property(readonly, nonatomic) _Bool isCouponOpen;
@property(readonly, nonatomic) _Bool isCacheRequestOpen;
@property(readonly, nonatomic) _Bool isMoneyOpen;
@property(readonly, nonatomic) _Bool isEditInvestGroupOpen;
@property(readonly, nonatomic) _Bool isCreateInvestGroupOpen;
@property(readonly, nonatomic) _Bool isJRJTrackOpen;
@property(readonly, nonatomic) _Bool isIAPOpen;
- (void)saveConfigure:(id)arg1;
- (id)init;

@end
