//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JRJFundNetValue : NSObject
{
    float _netValue;
    float _pxChg;
    float _pxChgRadio;
    NSString *_date;
}

+ (id)fundNetValueWithPB:(id)arg1;
@property(nonatomic) float pxChgRadio; // @synthesize pxChgRadio=_pxChgRadio;
@property(nonatomic) float pxChg; // @synthesize pxChg=_pxChg;
@property(nonatomic) float netValue; // @synthesize netValue=_netValue;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (long long)klineItemMonth;
- (long long)klineItemYear;
- (_Bool)canDrawLastPrice;

@end

