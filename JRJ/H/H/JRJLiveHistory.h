//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface JRJLiveHistory : BaseModel <MTLJSONSerializing>
{
    NSString *_roomId;
    NSString *_date;
    NSString *_roomName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
