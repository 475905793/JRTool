//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JRJTimeLineTechModelContainer : NSObject
{
    NSString *_retcode;
    NSString *_msg;
    NSArray *_data;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *retcode; // @synthesize retcode=_retcode;
- (void).cxx_destruct;

@end
