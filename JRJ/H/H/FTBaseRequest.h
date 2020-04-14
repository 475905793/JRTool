//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTBaseRequestProtocol-Protocol.h"

@class AFHTTPRequestOperation, HqPackage, NSDictionary, NSString;

@interface FTBaseRequest : NSObject <FTBaseRequestProtocol>
{
    CDUnknownBlockType _didSuccessBlock;
    CDUnknownBlockType _disSuccessJSONBlock;
    CDUnknownBlockType _didFailedBlock;
    HqPackage *_response;
    NSDictionary *_jsonResponse;
    AFHTTPRequestOperation *_innnerOperation;
    long long _refreshAccesstokenTime;
}

+ (_Bool)isReachable;
+ (id)request;
+ (void)initialize;
@property(nonatomic) long long refreshAccesstokenTime; // @synthesize refreshAccesstokenTime=_refreshAccesstokenTime;
@property(retain, nonatomic) AFHTTPRequestOperation *innnerOperation; // @synthesize innnerOperation=_innnerOperation;
@property(retain, nonatomic) NSDictionary *jsonResponse; // @synthesize jsonResponse=_jsonResponse;
@property(retain, nonatomic) HqPackage *response; // @synthesize response=_response;
@property(copy, nonatomic) CDUnknownBlockType didFailedBlock; // @synthesize didFailedBlock=_didFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType disSuccessJSONBlock; // @synthesize disSuccessJSONBlock=_disSuccessJSONBlock;
@property(copy, nonatomic) CDUnknownBlockType didSuccessBlock; // @synthesize didSuccessBlock=_didSuccessBlock;
- (void).cxx_destruct;
- (long long)responseDataType;
- (id)baseContentType;
- (id)convertRequestMethodToString:(long long)arg1;
- (long long)baseRequestMethod;
- (id)basePostData;
- (id)baseHeaderValues;
- (id)baseRequestParas;
- (id)baseRequestPaths;
- (id)baseRequestHost;
- (void)pause;
- (void)updateAndValidateAccesstoken;
- (void)requestDidFinishedHandleOperation:(id)arg1 response:(id)arg2;
- (void)addRequestHeaderForRequest:(id)arg1;
- (id)constructRequest;
- (void)startWithScheduleTimeInterval:(double)arg1;
- (void)startRequestWithSelectedTimeInterval;
- (void)startRequest;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

