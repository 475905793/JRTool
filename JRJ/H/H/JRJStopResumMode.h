//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface JRJStopResumMode : NSObject
{
    NSNumber *_INNER_CODE;
    NSString *_STOCKCODE;
    NSString *_STOCKSNAME;
    NSString *_LIST_SEC;
    NSString *_LIST_DATE;
    NSString *_STP_DT;
    NSString *_OPN_DT;
    NSString *_STP_LNG;
    NSString *_STP_KEY_NAME;
    NSString *_ESP_HINT;
}

@property(copy, nonatomic) NSString *ESP_HINT; // @synthesize ESP_HINT=_ESP_HINT;
@property(copy, nonatomic) NSString *STP_KEY_NAME; // @synthesize STP_KEY_NAME=_STP_KEY_NAME;
@property(copy, nonatomic) NSString *STP_LNG; // @synthesize STP_LNG=_STP_LNG;
@property(copy, nonatomic) NSString *OPN_DT; // @synthesize OPN_DT=_OPN_DT;
@property(copy, nonatomic) NSString *STP_DT; // @synthesize STP_DT=_STP_DT;
@property(copy, nonatomic) NSString *LIST_DATE; // @synthesize LIST_DATE=_LIST_DATE;
@property(copy, nonatomic) NSString *LIST_SEC; // @synthesize LIST_SEC=_LIST_SEC;
@property(copy, nonatomic) NSString *STOCKSNAME; // @synthesize STOCKSNAME=_STOCKSNAME;
@property(copy, nonatomic) NSString *STOCKCODE; // @synthesize STOCKCODE=_STOCKCODE;
@property(retain, nonatomic) NSNumber *INNER_CODE; // @synthesize INNER_CODE=_INNER_CODE;
- (void).cxx_destruct;

@end
