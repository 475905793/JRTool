//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IAGiftPayModel : NSObject
{
    long long _roomId;
    NSString *_tgId;
    long long _giftNum;
    long long _rewardRmb;
    long long _place;
    long long _nextStart;
    NSArray *_rankList;
}

+ (id)mj_objectClassInArray;
@property(copy, nonatomic) NSArray *rankList; // @synthesize rankList=_rankList;
@property(nonatomic) long long nextStart; // @synthesize nextStart=_nextStart;
@property(nonatomic) long long place; // @synthesize place=_place;
@property(nonatomic) long long rewardRmb; // @synthesize rewardRmb=_rewardRmb;
@property(nonatomic) long long giftNum; // @synthesize giftNum=_giftNum;
@property(copy, nonatomic) NSString *tgId; // @synthesize tgId=_tgId;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;

@end

