//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class SecuritySyncList;

@interface SecuritySyncListBuilder : PBGeneratedMessageBuilder
{
    SecuritySyncList *resultSecuritySyncList;
}

@property(retain) SecuritySyncList *resultSecuritySyncList; // @synthesize resultSecuritySyncList;
- (void).cxx_destruct;
- (id)clearSecuritySyncItem;
- (id)setSecuritySyncItemArray:(id)arg1;
- (id)addSecuritySyncItem:(id)arg1;
- (id)securitySyncItemAtIndex:(unsigned long long)arg1;
- (id)securitySyncItem;
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
