//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TradeBankAccountInfoModel : NSObject
{
    NSString *_bankAccount;
    NSString *_bankNo;
    NSString *_bankName;
    NSString *_moneyType;
}

@property(copy, nonatomic) NSString *moneyType; // @synthesize moneyType=_moneyType;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *bankNo; // @synthesize bankNo=_bankNo;
@property(copy, nonatomic) NSString *bankAccount; // @synthesize bankAccount=_bankAccount;
- (void).cxx_destruct;

@end

