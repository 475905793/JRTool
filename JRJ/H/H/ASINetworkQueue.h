//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

#import "ASIHTTPRequestDelegate-Protocol.h"
#import "ASIProgressDelegate-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface ASINetworkQueue : NSOperationQueue <ASIProgressDelegate, ASIHTTPRequestDelegate, NSCopying>
{
    id delegate;
    SEL requestDidStartSelector;
    SEL requestDidReceiveResponseHeadersSelector;
    SEL requestWillRedirectSelector;
    SEL requestDidFinishSelector;
    SEL requestDidFailSelector;
    SEL queueDidFinishSelector;
    id uploadProgressDelegate;
    unsigned long long bytesUploadedSoFar;
    unsigned long long totalBytesToUpload;
    id downloadProgressDelegate;
    unsigned long long bytesDownloadedSoFar;
    unsigned long long totalBytesToDownload;
    _Bool shouldCancelAllRequestsOnFailure;
    int requestsCount;
    _Bool showAccurateProgress;
    NSDictionary *userInfo;
}

+ (id)queue;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo;
@property _Bool showAccurateProgress; // @synthesize showAccurateProgress;
@property id delegate; // @synthesize delegate;
@property SEL queueDidFinishSelector; // @synthesize queueDidFinishSelector;
@property SEL requestDidFailSelector; // @synthesize requestDidFailSelector;
@property SEL requestDidFinishSelector; // @synthesize requestDidFinishSelector;
@property SEL requestWillRedirectSelector; // @synthesize requestWillRedirectSelector;
@property SEL requestDidReceiveResponseHeadersSelector; // @synthesize requestDidReceiveResponseHeadersSelector;
@property SEL requestDidStartSelector; // @synthesize requestDidStartSelector;
@property(nonatomic, setter=setDownloadProgressDelegate:) id downloadProgressDelegate; // @synthesize downloadProgressDelegate;
@property(nonatomic, setter=setUploadProgressDelegate:) id uploadProgressDelegate; // @synthesize uploadProgressDelegate;
@property _Bool shouldCancelAllRequestsOnFailure; // @synthesize shouldCancelAllRequestsOnFailure;
@property unsigned long long totalBytesToDownload; // @synthesize totalBytesToDownload;
@property unsigned long long bytesDownloadedSoFar; // @synthesize bytesDownloadedSoFar;
@property unsigned long long totalBytesToUpload; // @synthesize totalBytesToUpload;
@property unsigned long long bytesUploadedSoFar; // @synthesize bytesUploadedSoFar;
@property int requestsCount; // @synthesize requestsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)proxyAuthenticationNeededForRequest:(id)arg1;
- (void)authenticationNeededForRequest:(id)arg1;
- (void)request:(id)arg1 incrementUploadSizeBy:(long long)arg2;
- (void)request:(id)arg1 incrementDownloadSizeBy:(long long)arg2;
- (void)request:(id)arg1 didSendBytes:(long long)arg2;
- (void)request:(id)arg1 didReceiveBytes:(long long)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 willRedirectToURL:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)addHEADOperation:(id)arg1;
- (void)resetProgressDelegate:(id *)arg1;
- (void)cancelAllOperations;
- (void)go;
- (void)reset;
- (void)setSuspended:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

