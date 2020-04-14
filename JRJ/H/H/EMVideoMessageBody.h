//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EMFileMessageBody.h"

@class NSString;

@interface EMVideoMessageBody : EMFileMessageBody
{
    NSString *_thumbnailLocalPath;
    shared_ptr_2defcc3c _coreBody;
}

@property(nonatomic) shared_ptr_2defcc3c coreBody; // @synthesize coreBody=_coreBody;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_2defcc3c)getCoreBody;
- (id)initWithCoreBodyPtr:(shared_ptr_2defcc3c)arg1;
@property(nonatomic) int thumbnailDownloadStatus;
@property(nonatomic) struct CGSize thumbnailSize;
@property(copy, nonatomic) NSString *thumbnailSecretKey;
@property(copy, nonatomic) NSString *thumbnailRemotePath;
@property(copy, nonatomic) NSString *thumbnailLocalPath; // @synthesize thumbnailLocalPath=_thumbnailLocalPath;
@property(nonatomic) int duration;
- (int)type;
- (id)initWithLocalPath:(id)arg1 displayName:(id)arg2;

@end

