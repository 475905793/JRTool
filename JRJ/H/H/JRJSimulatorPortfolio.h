//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString, NSURL;

@interface JRJSimulatorPortfolio : MTLModel <MTLJSONSerializing>
{
    NSString *_authDesc;
    NSString *_tgId;
    NSString *_tgName;
    NSURL *_tgPic;
    NSNumber *_income;
    NSString *_detaiUrl;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *detaiUrl; // @synthesize detaiUrl=_detaiUrl;
@property(copy, nonatomic) NSNumber *income; // @synthesize income=_income;
@property(copy, nonatomic) NSURL *tgPic; // @synthesize tgPic=_tgPic;
@property(copy, nonatomic) NSString *tgName; // @synthesize tgName=_tgName;
@property(copy, nonatomic) NSString *tgId; // @synthesize tgId=_tgId;
@property(copy, nonatomic) NSString *authDesc; // @synthesize authDesc=_authDesc;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

