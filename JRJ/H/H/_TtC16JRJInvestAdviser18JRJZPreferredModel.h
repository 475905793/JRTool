//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser12JRJBaseModel.h"

@class NSArray, NSNumber, NSString, _TtC16JRJInvestAdviser18JRJOptProcessModel, _TtC16JRJInvestAdviser22JRJHistoryPerformModel, _TtC16JRJInvestAdviser22JRJTodayExcellentModel;

@interface _TtC16JRJInvestAdviser18JRJZPreferredModel : _TtC16JRJInvestAdviser12JRJBaseModel
{
    // Error parsing type: , name: historyHotStocks
    // Error parsing type: , name: historyPerform
    // Error parsing type: , name: indicator
    // Error parsing type: , name: holdingList
    // Error parsing type: , name: optProcess
    // Error parsing type: , name: todayExcellent
    // Error parsing type: , name: todaySellExcellent
    // Error parsing type: , name: adviserStudioUrl
    // Error parsing type: , name: zExcellentAuth
    // Error parsing type: , name: optState
    // Error parsing type: , name: recentDays
    // Error parsing type: , name: strategyDesc
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *strategyDesc;
@property(nonatomic, retain) NSNumber *recentDays; // @synthesize recentDays;
@property(nonatomic, retain) NSNumber *optState; // @synthesize optState;
@property(nonatomic, retain) NSNumber *zExcellentAuth; // @synthesize zExcellentAuth;
@property(nonatomic, copy) NSString *adviserStudioUrl;
@property(nonatomic, retain) _TtC16JRJInvestAdviser22JRJTodayExcellentModel *todaySellExcellent; // @synthesize todaySellExcellent;
@property(nonatomic, retain) _TtC16JRJInvestAdviser22JRJTodayExcellentModel *todayExcellent; // @synthesize todayExcellent;
@property(nonatomic, retain) _TtC16JRJInvestAdviser18JRJOptProcessModel *optProcess; // @synthesize optProcess;
@property(nonatomic, copy) NSArray *holdingList;
@property(nonatomic, copy) NSArray *indicator;
@property(nonatomic, retain) _TtC16JRJInvestAdviser22JRJHistoryPerformModel *historyPerform; // @synthesize historyPerform;
@property(nonatomic, copy) NSArray *historyHotStocks;

@end
