//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface StockNewsResearchInfoModel : NSObject
{
    NSString *_STOCKCODE;
    NSString *_DECLAREDATE;
    NSString *_RPT_TITLE;
    NSString *_RPT_FILE;
    NSString *_INVEST_RATING;
    NSString *_ORGNAME;
    NSString *_ORGSNAME;
    double _EXPECT_PRICE;
    NSString *_RES_ID;
}

@property(copy, nonatomic) NSString *RES_ID; // @synthesize RES_ID=_RES_ID;
@property(nonatomic) double EXPECT_PRICE; // @synthesize EXPECT_PRICE=_EXPECT_PRICE;
@property(copy, nonatomic) NSString *ORGSNAME; // @synthesize ORGSNAME=_ORGSNAME;
@property(copy, nonatomic) NSString *ORGNAME; // @synthesize ORGNAME=_ORGNAME;
@property(copy, nonatomic) NSString *INVEST_RATING; // @synthesize INVEST_RATING=_INVEST_RATING;
@property(copy, nonatomic) NSString *RPT_FILE; // @synthesize RPT_FILE=_RPT_FILE;
@property(copy, nonatomic) NSString *RPT_TITLE; // @synthesize RPT_TITLE=_RPT_TITLE;
@property(copy, nonatomic) NSString *DECLAREDATE; // @synthesize DECLAREDATE=_DECLAREDATE;
@property(copy, nonatomic) NSString *STOCKCODE; // @synthesize STOCKCODE=_STOCKCODE;
- (void).cxx_destruct;

@end
