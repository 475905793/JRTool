//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YCBBaseTableViewCell.h"

@class AdviserBattleTeamModel, UILabel;
@protocol JRJAdviserBattleTeamViewDelegate;

@interface JRJAdviserBattleTeamCell : YCBBaseTableViewCell
{
    UILabel *_lbProfit;
    UILabel *_lbProfitLb;
    UILabel *_lbRank;
    UILabel *_lbRankLb;
    UILabel *_lbPersonNum;
    UILabel *_lbPersonNumLb;
    UILabel *_lbMoney;
    UILabel *_lbMoneyLb;
    AdviserBattleTeamModel *_teamModel;
    id <JRJAdviserBattleTeamViewDelegate> _delegate;
}

+ (double)heightForCell;
@property(nonatomic) __weak id <JRJAdviserBattleTeamViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AdviserBattleTeamModel *teamModel; // @synthesize teamModel=_teamModel;
@property(retain, nonatomic) UILabel *lbMoneyLb; // @synthesize lbMoneyLb=_lbMoneyLb;
@property(retain, nonatomic) UILabel *lbMoney; // @synthesize lbMoney=_lbMoney;
@property(retain, nonatomic) UILabel *lbPersonNumLb; // @synthesize lbPersonNumLb=_lbPersonNumLb;
@property(retain, nonatomic) UILabel *lbPersonNum; // @synthesize lbPersonNum=_lbPersonNum;
@property(retain, nonatomic) UILabel *lbRankLb; // @synthesize lbRankLb=_lbRankLb;
@property(retain, nonatomic) UILabel *lbRank; // @synthesize lbRank=_lbRank;
@property(retain, nonatomic) UILabel *lbProfitLb; // @synthesize lbProfitLb=_lbProfitLb;
@property(retain, nonatomic) UILabel *lbProfit; // @synthesize lbProfit=_lbProfit;
- (void).cxx_destruct;
- (void)cellPressed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
