//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EMPushOptions : NSObject
{
    NSArray *_ignoredGroupIds;
    int _displayStyle;
    int _noDisturbStatus;
    NSString *_displayName;
    long long _noDisturbingStartH;
    long long _noDisturbingEndH;
}

+ (void)saveIgnoredGroupIds:(id)arg1 userName:(id)arg2;
@property(nonatomic) long long noDisturbingEndH; // @synthesize noDisturbingEndH=_noDisturbingEndH;
@property(nonatomic) long long noDisturbingStartH; // @synthesize noDisturbingStartH=_noDisturbingStartH;
@property(nonatomic) int noDisturbStatus; // @synthesize noDisturbStatus=_noDisturbStatus;
@property(nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nickname;
- (id)init;
- (shared_ptr_61363424)toCorePtrWithoutIgnoredGroupIds;
- (void)saveIgnoredGroupIdsWithUserName:(id)arg1;
- (void)setIgnoredGroupIds:(id)arg1;
- (void)updateWithCorePtr:(shared_ptr_61363424)arg1;

@end

