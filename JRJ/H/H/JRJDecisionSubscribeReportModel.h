//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJDecisionSubscribeReportModel : NSObject
{
    NSString *_myId;
    NSString *_orgId;
    NSString *_authorName;
    NSString *_pubTime;
    NSString *_title;
    NSString *_orgName;
    NSString *_typeName;
    NSString *_typeId;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSString *typeId; // @synthesize typeId=_typeId;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pubTime; // @synthesize pubTime=_pubTime;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(retain, nonatomic) NSString *orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) NSString *myId; // @synthesize myId=_myId;
- (void).cxx_destruct;

@end

