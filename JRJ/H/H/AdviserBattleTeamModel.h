//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AdviserBattleTeamModel : NSObject
{
    NSString *_teamName;
    NSString *_membersNum;
    NSNumber *_totalProfit;
    NSString *_totalRank;
    NSString *_teamDetailUrl;
    NSNumber *_tradeCapital;
    NSNumber *_retCode;
    NSString *_msg;
}

@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSNumber *retCode; // @synthesize retCode=_retCode;
@property(copy, nonatomic) NSNumber *tradeCapital; // @synthesize tradeCapital=_tradeCapital;
@property(copy, nonatomic) NSString *teamDetailUrl; // @synthesize teamDetailUrl=_teamDetailUrl;
@property(copy, nonatomic) NSString *totalRank; // @synthesize totalRank=_totalRank;
@property(copy, nonatomic) NSNumber *totalProfit; // @synthesize totalProfit=_totalProfit;
@property(copy, nonatomic) NSString *membersNum; // @synthesize membersNum=_membersNum;
@property(copy, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
- (void).cxx_destruct;

@end

