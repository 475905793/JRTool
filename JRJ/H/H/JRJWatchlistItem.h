//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSDate, NSNumber, NSString, NSURL;

@interface JRJWatchlistItem : MTLModel <MTLJSONSerializing>
{
    _Bool _isFollow;
    NSString *_title;
    NSString *_content;
    NSNumber *_itemId;
    NSNumber *_ID;
    NSString *_userId;
    NSString *_userName;
    NSURL *_userAvatarURL;
    NSDate *_time;
    long long _option;
    long long _type;
    double _cachedCellHeight;
    long long _topTime;
    NSArray *_stocks;
}

+ (id)typeJSONTransformer;
+ (id)isFollowJSONTransformer;
+ (id)stocksJSONTransformer;
+ (id)timeJSONTransformer;
+ (id)userAvatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)watchlistItemWithActivyMessageModel:(id)arg1;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(copy, nonatomic) NSArray *stocks; // @synthesize stocks=_stocks;
@property(nonatomic) long long topTime; // @synthesize topTime=_topTime;
@property(nonatomic) double cachedCellHeight; // @synthesize cachedCellHeight=_cachedCellHeight;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long option; // @synthesize option=_option;
@property(copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(copy, nonatomic) NSURL *userAvatarURL; // @synthesize userAvatarURL=_userAvatarURL;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSNumber *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSNumber *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayContent;
@property(readonly, nonatomic) NSString *displayTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

