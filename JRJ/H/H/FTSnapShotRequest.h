//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTBaseRequest.h"

@class NSString;

@interface FTSnapShotRequest : FTBaseRequest
{
    int _marketType;
    int _securityType;
    NSString *_stockID;
}

@property(copy, nonatomic) NSString *stockID; // @synthesize stockID=_stockID;
@property(nonatomic) int securityType; // @synthesize securityType=_securityType;
@property(nonatomic) int marketType; // @synthesize marketType=_marketType;
- (void).cxx_destruct;
- (id)baseRequestPaths;

@end

