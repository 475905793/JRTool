//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJZhibopopulWindowModel : NSObject
{
    long long _type;
    NSString *_userId;
    NSString *_userName;
    NSString *_headImage;
    NSString *_giftName;
    NSString *_giftPic;
    NSString *_giftNum;
    unsigned long long _rewardRmb;
    long long _timeId;
}

@property(nonatomic) long long timeId; // @synthesize timeId=_timeId;
@property(nonatomic) unsigned long long rewardRmb; // @synthesize rewardRmb=_rewardRmb;
@property(copy, nonatomic) NSString *giftNum; // @synthesize giftNum=_giftNum;
@property(copy, nonatomic) NSString *giftPic; // @synthesize giftPic=_giftPic;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(copy, nonatomic) NSString *headImage; // @synthesize headImage=_headImage;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

