//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseModel.h"

@class NSString;

@interface JRJCameraModel : BaseModel
{
    NSString *_scode;
    NSString *_sname;
    long long _switchOpen;
}

@property(nonatomic) long long switchOpen; // @synthesize switchOpen=_switchOpen;
@property(retain, nonatomic) NSString *sname; // @synthesize sname=_sname;
@property(retain, nonatomic) NSString *scode; // @synthesize scode=_scode;
- (void).cxx_destruct;

@end

