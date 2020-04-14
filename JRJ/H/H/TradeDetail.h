//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface TradeDetail : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasTradePx_:1;
    unsigned int hasTradeNum_:1;
    unsigned int hasTradeTime_:1;
    unsigned int hasTradeType_:1;
    float tradePx;
    int tradeNum;
    NSString *tradeTime;
    int tradeType;
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
@property float tradePx; // @synthesize tradePx;
@property int tradeNum; // @synthesize tradeNum;
@property(retain) NSString *tradeTime; // @synthesize tradeTime;
@property int tradeType; // @synthesize tradeType;
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
- (void)setHasTradePx:(_Bool)arg1;
- (_Bool)hasTradePx;
- (void)setHasTradeNum:(_Bool)arg1;
- (_Bool)hasTradeNum;
- (void)setHasTradeTime:(_Bool)arg1;
- (_Bool)hasTradeTime;
- (void)setHasTradeType:(_Bool)arg1;
- (_Bool)hasTradeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

