//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJSmartCommentModel : NSObject
{
    _Bool _favorStatus;
    NSString *_title;
    NSString *_ID;
    long long _favorTotal;
    NSString *_pubTime;
    NSString *_showPubTime;
    NSString *_imgUrl;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *showPubTime; // @synthesize showPubTime=_showPubTime;
@property(copy, nonatomic) NSString *pubTime; // @synthesize pubTime=_pubTime;
@property(nonatomic) long long favorTotal; // @synthesize favorTotal=_favorTotal;
@property(nonatomic) _Bool favorStatus; // @synthesize favorStatus=_favorStatus;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

