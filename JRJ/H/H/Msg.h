//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class Msg_ProtoFile, NSMutableDictionary, NSString;

@interface Msg : GPBMessage
{
}

+ (id)descriptor;
- (id)description;

// Remaining properties
@property(copy, nonatomic) NSString *appIdFrom; // @dynamic appIdFrom;
@property(copy, nonatomic) NSString *appIdTo; // @dynamic appIdTo;
@property(copy, nonatomic) NSString *data_p; // @dynamic data_p;
@property(copy, nonatomic) NSString *from; // @dynamic from;
@property(nonatomic) _Bool hasPFile; // @dynamic hasPFile;
@property(retain, nonatomic) NSMutableDictionary *mapBak; // @dynamic mapBak;
@property(readonly, nonatomic) unsigned long long mapBak_Count; // @dynamic mapBak_Count;
@property(copy, nonatomic) NSString *msgId; // @dynamic msgId;
@property(retain, nonatomic) Msg_ProtoFile *pFile; // @dynamic pFile;
@property(nonatomic) int seq; // @dynamic seq;
@property(nonatomic) long long time; // @dynamic time;
@property(copy, nonatomic) NSString *to; // @dynamic to;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) int ver; // @dynamic ver;

@end

