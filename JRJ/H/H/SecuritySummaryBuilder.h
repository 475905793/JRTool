//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class SecuritySummary;

@interface SecuritySummaryBuilder : PBGeneratedMessageBuilder
{
    SecuritySummary *resultSecuritySummary;
}

@property(retain) SecuritySummary *resultSecuritySummary; // @synthesize resultSecuritySummary;
- (void).cxx_destruct;
- (id)clearMarketValue;
- (id)setMarketValue:(float)arg1;
- (float)marketValue;
- (_Bool)hasMarketValue;
- (id)clearPxTurnoverRadio;
- (id)setPxTurnoverRadio:(float)arg1;
- (float)pxTurnoverRadio;
- (_Bool)hasPxTurnoverRadio;
- (id)clearPxVibRadio;
- (id)setPxVibRadio:(float)arg1;
- (float)pxVibRadio;
- (_Bool)hasPxVibRadio;
- (id)clearPxSlideRadio;
- (id)setPxSlideRadio:(float)arg1;
- (float)pxSlideRadio;
- (_Bool)hasPxSlideRadio;
- (id)clearPxIncRadio;
- (id)setPxIncRadio:(float)arg1;
- (float)pxIncRadio;
- (_Bool)hasPxIncRadio;
- (id)clearPxChgRadio;
- (id)setPxChgRadio:(float)arg1;
- (float)pxChgRadio;
- (_Bool)hasPxChgRadio;
- (id)clearNPxChg;
- (id)setNPxChg:(float)arg1;
- (float)nPxChg;
- (_Bool)hasNPxChg;
- (id)clearGroupName;
- (id)setGroupName:(id)arg1;
- (id)groupName;
- (_Bool)hasGroupName;
- (id)clearGroupId;
- (id)setGroupId:(int)arg1;
- (int)groupId;
- (_Bool)hasGroupId;
- (id)clearOrderId;
- (id)setOrderId:(int)arg1;
- (int)orderId;
- (_Bool)hasOrderId;
- (id)clearLastPx;
- (id)setLastPx:(float)arg1;
- (float)lastPx;
- (_Bool)hasLastPx;
- (id)clearTradingStatus;
- (id)setTradingStatus:(int)arg1;
- (int)tradingStatus;
- (_Bool)hasTradingStatus;
- (id)clearMarketType;
- (id)setMarketType:(int)arg1;
- (int)marketType;
- (_Bool)hasMarketType;
- (id)clearSecurityType;
- (id)setSecurityType:(int)arg1;
- (int)securityType;
- (_Bool)hasSecurityType;
- (id)clearSecurityName;
- (id)setSecurityName:(id)arg1;
- (id)securityName;
- (_Bool)hasSecurityName;
- (id)clearSecurityCode;
- (id)setSecurityCode:(id)arg1;
- (id)securityCode;
- (_Bool)hasSecurityCode;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;

@end
