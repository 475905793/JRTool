//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface TimeLine : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasTradeVolume_:1;
    unsigned int hasTradeValue_:1;
    unsigned int hasLastPx_:1;
    unsigned int hasAvgPx_:1;
    unsigned int hasId_:1;
    unsigned int hasTime_:1;
    double tradeVolume;
    double tradeValue;
    float lastPx;
    float avgPx;
    int id;
    NSString *time;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property double tradeValue; // @synthesize tradeValue;
@property double tradeVolume; // @synthesize tradeVolume;
@property float avgPx; // @synthesize avgPx;
@property float lastPx; // @synthesize lastPx;
@property(retain) NSString *time; // @synthesize time;
@property int id; // @synthesize id;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)setHasTradeValue:(_Bool)arg1;
- (_Bool)hasTradeValue;
- (void)setHasTradeVolume:(_Bool)arg1;
- (_Bool)hasTradeVolume;
- (void)setHasAvgPx:(_Bool)arg1;
- (_Bool)hasAvgPx;
- (void)setHasLastPx:(_Bool)arg1;
- (_Bool)hasLastPx;
- (void)setHasTime:(_Bool)arg1;
- (_Bool)hasTime;
- (void)setHasId:(_Bool)arg1;
- (_Bool)hasId;
- (_Bool)isValidDrawWithNextTimeline:(id)arg1 snapShot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

