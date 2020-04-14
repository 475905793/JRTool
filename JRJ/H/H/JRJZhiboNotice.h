//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface JRJZhiboNotice : MTLModel <MTLJSONSerializing>
{
    NSString *_noticeId;
    NSNumber *_timeId;
    NSString *_content;
    NSDate *_datetime;
    NSString *_dateString;
}

+ (id)noticeIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) NSDate *datetime; // @synthesize datetime=_datetime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSNumber *timeId; // @synthesize timeId=_timeId;
@property(copy, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
- (void).cxx_destruct;
- (id)cacheKeyWithUserId:(id)arg1;
- (void)markNoticeAsReadedByUser:(id)arg1;
- (_Bool)noticeIsReadedByUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

