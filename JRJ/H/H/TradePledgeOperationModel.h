//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TradePledgeOperationModel : NSObject
{
    long long _showDialog;
    NSString *_dialogMsg;
    long long _showBankTrans;
    NSString *_pageMsg;
    NSArray *_resultList;
}

@property(retain, nonatomic) NSArray *resultList; // @synthesize resultList=_resultList;
@property(retain, nonatomic) NSString *pageMsg; // @synthesize pageMsg=_pageMsg;
@property(nonatomic) long long showBankTrans; // @synthesize showBankTrans=_showBankTrans;
@property(copy, nonatomic) NSString *dialogMsg; // @synthesize dialogMsg=_dialogMsg;
@property(nonatomic) long long showDialog; // @synthesize showDialog=_showDialog;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end

