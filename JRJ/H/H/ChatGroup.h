//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ChatDataBaseDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface ChatGroup : NSObject <ChatDataBaseDelegate>
{
    long long _groupID;
    long long _conversationIdServer;
    NSMutableArray *_numberArray;
}

@property(retain, nonatomic) NSMutableArray *numberArray; // @synthesize numberArray=_numberArray;
@property(nonatomic) long long conversationIdServer; // @synthesize conversationIdServer=_conversationIdServer;
@property(nonatomic) long long groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (void)remove;
- (void)insert;
- (void)update;
- (id)groupName;
- (_Bool)isEqualToGroup:(id)arg1;
- (_Bool)isMultiple;
- (id)init;
- (id)initWithGroupID:(long long)arg1;
- (id)initWithNumberList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
