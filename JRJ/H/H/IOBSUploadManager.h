//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOBSConfiguration, IOBSResumeUpload, NSArray, NSString;
@protocol IOBSHttpDelegate;

@interface IOBSUploadManager : NSObject
{
    id <IOBSHttpDelegate> _httpManager;
    IOBSConfiguration *_config;
    IOBSResumeUpload *_refuseUpload;
    NSArray *_hosts;
    NSString *_coverid;
}

+ (_Bool)checkAndNotifyErrorBucket:(id)arg1 key:(id)arg2 token:(id)arg3 input:(id)arg4 complete:(CDUnknownBlockType)arg5;
+ (id)sharedInstanceWithConfiguration:(id)arg1;
+ (id)manager;
@property(copy, nonatomic) NSString *coverid; // @synthesize coverid=_coverid;
@property(copy, nonatomic) NSArray *hosts; // @synthesize hosts=_hosts;
@property(retain, nonatomic) IOBSResumeUpload *refuseUpload; // @synthesize refuseUpload=_refuseUpload;
@property(retain, nonatomic) IOBSConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) id <IOBSHttpDelegate> httpManager; // @synthesize httpManager=_httpManager;
- (void).cxx_destruct;
- (id)compressImage:(id)arg1 scale:(double)arg2;
- (void)putFileInternal:(id)arg1 bucket:(id)arg2 fileName:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7 withBaseUrl:(id)arg8;
- (void)finishUploadWithPath:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 index:(long long)arg6 length:(long long)arg7 complete:(CDUnknownBlockType)arg8 option:(id)arg9 withBaseUrl:(id)arg10 coverid:(id)arg11;
- (void)finishUploadWithPath:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 index:(long long)arg6 length:(long long)arg7 complete:(CDUnknownBlockType)arg8 option:(id)arg9 withBaseUrl:(id)arg10;
- (void)finishUploadWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 index:(long long)arg6 length:(long long)arg7 complete:(CDUnknownBlockType)arg8 option:(id)arg9 withBaseUrl:(id)arg10 coverid:(id)arg11;
- (void)finishUploadWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 index:(long long)arg6 length:(long long)arg7 complete:(CDUnknownBlockType)arg8 option:(id)arg9 withBaseUrl:(id)arg10;
- (void)finishUploadWithFileName:(id)arg1 bucket:(id)arg2 key:(id)arg3 token:(id)arg4 length:(long long)arg5 md5:(id)arg6 audioName:(id)arg7 complete:(CDUnknownBlockType)arg8 option:(id)arg9 withBaseUrl:(id)arg10 coverid:(id)arg11;
- (void)durativeUploadWithPath:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 index:(long long)arg6 complete:(CDUnknownBlockType)arg7 option:(id)arg8 withBaseUrl:(id)arg9 coverid:(id)arg10;
- (void)durativeUploadWithPath:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 index:(long long)arg6 complete:(CDUnknownBlockType)arg7 option:(id)arg8 withBaseUrl:(id)arg9;
- (void)durativeUploadWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 index:(long long)arg6 complete:(CDUnknownBlockType)arg7 option:(id)arg8 withBaseUrl:(id)arg9 coverid:(id)arg10;
- (void)durativeUploadWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 index:(long long)arg6 complete:(CDUnknownBlockType)arg7 option:(id)arg8 withBaseUrl:(id)arg9;
- (void)uploadImage:(id)arg1 scale:(double)arg2 fileName:(id)arg3 bucket:(id)arg4 key:(id)arg5 token:(id)arg6 complete:(CDUnknownBlockType)arg7 option:(id)arg8 withBaseUrl:(id)arg9 coverid:(id)arg10;
- (void)uploadImage:(id)arg1 scale:(double)arg2 fileName:(id)arg3 bucket:(id)arg4 key:(id)arg5 token:(id)arg6 complete:(CDUnknownBlockType)arg7 option:(id)arg8 withBaseUrl:(id)arg9;
- (void)encryptPutFileWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7 withBaseUrl:(id)arg8 AESKey:(id)arg9;
- (void)putFileWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7 withBaseUrl:(id)arg8 coverid:(id)arg9;
- (void)putFileWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7 withBaseUrl:(id)arg8;
- (void)putFileWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7;
- (void)putFileWithPath:(id)arg1 bucket:(id)arg2 key:(id)arg3 token:(id)arg4 complete:(CDUnknownBlockType)arg5 option:(id)arg6 withBaseUrl:(id)arg7 coverid:(id)arg8;
- (void)fenPianUploadFileWithPath:(id)arg1 bucket:(id)arg2 key:(id)arg3 token:(id)arg4 complete:(CDUnknownBlockType)arg5 option:(id)arg6 withBaseUrl:(id)arg7;
- (void)encryptPutFileWithPath:(id)arg1 bucket:(id)arg2 key:(id)arg3 token:(id)arg4 complete:(CDUnknownBlockType)arg5 option:(id)arg6 withBaseUrl:(id)arg7 AESKey:(id)arg8;
- (void)putFileWithPath:(id)arg1 bucket:(id)arg2 key:(id)arg3 token:(id)arg4 complete:(CDUnknownBlockType)arg5 option:(id)arg6 withBaseUrl:(id)arg7;
- (void)putFileWithPath:(id)arg1 bucket:(id)arg2 key:(id)arg3 token:(id)arg4 complete:(CDUnknownBlockType)arg5 option:(id)arg6;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithBackupHosts:(id)arg1;
- (id)initWithRecorder:(id)arg1;
- (id)init;

@end

