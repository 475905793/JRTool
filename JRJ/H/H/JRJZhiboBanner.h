//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJZhiboBanner : NSObject
{
    _Bool _show;
    long long _courseId;
    NSString *_content;
    NSString *_title;
    long long _bannerType;
    long long _type;
    long long _dataType;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long bannerType; // @synthesize bannerType=_bannerType;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long courseId; // @synthesize courseId=_courseId;
- (void).cxx_destruct;

@end

