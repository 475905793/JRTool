//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

@class NSArray, NSURLConnection, NSURLResponse;

@interface _priv_NBSURLProtocolConnection : NSURLProtocol
{
    NSURLResponse *curr_response;
    _Bool isStartLoading;
    NSURLConnection *_connection;
    NSArray *_modes;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)setCallBackOfShippingAuthentication:(CDUnknownFunctionPointerType)arg1 andCallBackOfPreparingRequest:(CDUnknownFunctionPointerType)arg2;
@property(copy) NSArray *modes; // @synthesize modes=_modes;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)dealloc;
- (void)stopLoading;
- (void)startLoading;

@end
