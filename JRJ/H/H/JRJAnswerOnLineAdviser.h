//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseModel.h"

@class NSNumber, NSString;

@interface JRJAnswerOnLineAdviser : BaseModel
{
    NSString *_avatar;
    NSString *_company;
    NSString *_adViserId;
    NSString *_name;
    NSNumber *_count;
    NSString *_title;
    NSString *_url;
}

+ (id)countJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *adViserId; // @synthesize adViserId=_adViserId;
@property(retain, nonatomic) NSString *company; // @synthesize company=_company;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;

@end
