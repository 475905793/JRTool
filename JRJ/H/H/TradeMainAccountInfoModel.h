//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TradeFundInfoModel;

@interface TradeMainAccountInfoModel : NSObject
{
    TradeFundInfoModel *_fund;
    NSArray *_stockInfoList;
    NSArray *_positionReverseRepoList;
}

+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSArray *positionReverseRepoList; // @synthesize positionReverseRepoList=_positionReverseRepoList;
@property(retain, nonatomic) NSArray *stockInfoList; // @synthesize stockInfoList=_stockInfoList;
@property(retain, nonatomic) TradeFundInfoModel *fund; // @synthesize fund=_fund;
- (void).cxx_destruct;

@end

