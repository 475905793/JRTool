//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TradeKeepAliveModel : NSObject
{
    NSString *_keepAlive;
    NSString *_vcodeFlag;
    NSString *_vcode;
    NSString *_vcodeImage;
    long long _errCount;
}

@property(nonatomic) long long errCount; // @synthesize errCount=_errCount;
@property(copy, nonatomic) NSString *vcodeImage; // @synthesize vcodeImage=_vcodeImage;
@property(copy, nonatomic) NSString *vcode; // @synthesize vcode=_vcode;
@property(copy, nonatomic) NSString *vcodeFlag; // @synthesize vcodeFlag=_vcodeFlag;
@property(copy, nonatomic) NSString *keepAlive; // @synthesize keepAlive=_keepAlive;
- (void).cxx_destruct;

@end
