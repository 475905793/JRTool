//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJFundFinancialAccountAssetItemModel : NSObject
{
    NSString *_name;
    NSString *_url;
    NSString *_value;
    long long _type;
    NSString *_trackId;
}

@property(copy, nonatomic) NSString *trackId; // @synthesize trackId=_trackId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

