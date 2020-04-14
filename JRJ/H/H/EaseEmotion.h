//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EaseEmotion : NSObject
{
    unsigned long long _emotionType;
    NSString *_emotionTitle;
    NSString *_emotionId;
    NSString *_emotionThumbnail;
    NSString *_emotionOriginal;
    NSString *_emotionOriginalURL;
}

@property(copy, nonatomic) NSString *emotionOriginalURL; // @synthesize emotionOriginalURL=_emotionOriginalURL;
@property(copy, nonatomic) NSString *emotionOriginal; // @synthesize emotionOriginal=_emotionOriginal;
@property(copy, nonatomic) NSString *emotionThumbnail; // @synthesize emotionThumbnail=_emotionThumbnail;
@property(copy, nonatomic) NSString *emotionId; // @synthesize emotionId=_emotionId;
@property(copy, nonatomic) NSString *emotionTitle; // @synthesize emotionTitle=_emotionTitle;
@property(nonatomic) unsigned long long emotionType; // @synthesize emotionType=_emotionType;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 emotionId:(id)arg2 emotionThumbnail:(id)arg3 emotionOriginal:(id)arg4 emotionOriginalURL:(id)arg5 emotionType:(unsigned long long)arg6;

@end

