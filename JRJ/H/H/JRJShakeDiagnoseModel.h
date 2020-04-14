//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface JRJShakeDiagnoseModel : NSObject
{
    NSArray *_kline;
    NSArray *_zsList;
    NSDictionary *_zs;
    NSDictionary *_stockInfo;
    NSDictionary *_today;
    NSDictionary *_shortL;
    NSDictionary *_median;
    NSDictionary *_longL;
    NSString *_listDesc;
    NSString *_resultString;
}

@property(retain, nonatomic) NSString *resultString; // @synthesize resultString=_resultString;
@property(retain, nonatomic) NSString *listDesc; // @synthesize listDesc=_listDesc;
@property(retain, nonatomic) NSDictionary *longL; // @synthesize longL=_longL;
@property(retain, nonatomic) NSDictionary *median; // @synthesize median=_median;
@property(retain, nonatomic) NSDictionary *shortL; // @synthesize shortL=_shortL;
@property(retain, nonatomic) NSDictionary *today; // @synthesize today=_today;
@property(retain, nonatomic) NSDictionary *stockInfo; // @synthesize stockInfo=_stockInfo;
@property(retain, nonatomic) NSDictionary *zs; // @synthesize zs=_zs;
@property(retain, nonatomic) NSArray *zsList; // @synthesize zsList=_zsList;
@property(retain, nonatomic) NSArray *kline; // @synthesize kline=_kline;
- (void).cxx_destruct;

@end

