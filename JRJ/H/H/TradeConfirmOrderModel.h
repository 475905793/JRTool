//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TradeConfirmOrderModel : NSObject
{
    NSString *_stockCode;
    NSString *_stockName;
    NSString *_resultCode;
    NSString *_resultName;
    NSString *_resultMsg;
}

@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(copy, nonatomic) NSString *resultName; // @synthesize resultName=_resultName;
@property(copy, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
