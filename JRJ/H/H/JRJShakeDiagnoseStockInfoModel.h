//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJShakeDiagnoseStockInfoModel : NSObject
{
    int _isStop;
    float _cp;
    float _lp;
    float _profit;
    NSString *_scode;
    NSString *_sname;
    NSString *_stkId;
}

@property(nonatomic) float profit; // @synthesize profit=_profit;
@property(nonatomic) float lp; // @synthesize lp=_lp;
@property(nonatomic) float cp; // @synthesize cp=_cp;
@property(nonatomic) int isStop; // @synthesize isStop=_isStop;
@property(retain, nonatomic) NSString *stkId; // @synthesize stkId=_stkId;
@property(retain, nonatomic) NSString *sname; // @synthesize sname=_sname;
@property(retain, nonatomic) NSString *scode; // @synthesize scode=_scode;
- (void).cxx_destruct;

@end

