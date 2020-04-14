//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString;

@interface PBUninterpretedOption : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasDoubleValue_:1;
    unsigned int hasNegativeIntValue_:1;
    unsigned int hasPositiveIntValue_:1;
    unsigned int hasIdentifierValue_:1;
    unsigned int hasAggregateValue_:1;
    unsigned int hasStringValue_:1;
    double doubleValue;
    long long negativeIntValue;
    unsigned long long positiveIntValue;
    NSString *identifierValue;
    NSString *aggregateValue;
    NSData *stringValue;
    NSMutableArray *nameArray;
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
@property(retain) NSString *aggregateValue; // @synthesize aggregateValue;
@property(retain) NSData *stringValue; // @synthesize stringValue;
@property double doubleValue; // @synthesize doubleValue;
@property long long negativeIntValue; // @synthesize negativeIntValue;
@property unsigned long long positiveIntValue; // @synthesize positiveIntValue;
@property(retain) NSString *identifierValue; // @synthesize identifierValue;
@property(retain) NSMutableArray *nameArray; // @synthesize nameArray;
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
- (id)nameAtIndex:(unsigned long long)arg1;
@property(readonly) NSArray *name; // @dynamic name;
- (id)defaultInstance;
- (id)init;
- (void)setHasAggregateValue:(_Bool)arg1;
- (_Bool)hasAggregateValue;
- (void)setHasStringValue:(_Bool)arg1;
- (_Bool)hasStringValue;
- (void)setHasDoubleValue:(_Bool)arg1;
- (_Bool)hasDoubleValue;
- (void)setHasNegativeIntValue:(_Bool)arg1;
- (_Bool)hasNegativeIntValue;
- (void)setHasPositiveIntValue:(_Bool)arg1;
- (_Bool)hasPositiveIntValue;
- (void)setHasIdentifierValue:(_Bool)arg1;
- (_Bool)hasIdentifierValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

