//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MobClickSocialWeibo : NSObject
{
    NSString *_platformType;
    NSString *_weiboId;
    NSString *_userId;
    NSDictionary *_param;
}

@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *weiboId; // @synthesize weiboId=_weiboId;
@property(copy, nonatomic) NSString *platformType; // @synthesize platformType=_platformType;
- (id)description;
- (id)initWithPlatformType:(id)arg1 weiboId:(id)arg2 usid:(id)arg3 param:(id)arg4;

@end

