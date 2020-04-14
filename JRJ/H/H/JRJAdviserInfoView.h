//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JRJPortfolioDetail, UIImageView, UILabel;

@interface JRJAdviserInfoView : UIView
{
    JRJPortfolioDetail *_infoDetail;
    CDUnknownBlockType _nameTapBlock;
    UILabel *_MatchIncomLabel;
    UILabel *_MatchIncomNameLabel;
    UIImageView *_RankImageVIew;
    UILabel *_RankLabel;
    UILabel *_AccountNameLabel;
    UILabel *_AccountNameLabel1;
    UILabel *_AccountNameLabel2;
    UILabel *_AccountNameLabel3;
    UILabel *_AccountValueLabel;
    UILabel *_AccountValueLabel1;
    UILabel *_AccountValueLabel2;
    UILabel *_AccountValueLabel3;
    UIImageView *_userHeadImageView;
    UILabel *_UserNameLabel;
    UILabel *_averageIncomLabel;
    UIView *_nameSeperateVIew;
    UILabel *_MatchStatusLabel;
    UIView *_nameMaskView;
}

+ (double)viewHeight;
@property(nonatomic) __weak UIView *nameMaskView; // @synthesize nameMaskView=_nameMaskView;
@property(nonatomic) __weak UILabel *MatchStatusLabel; // @synthesize MatchStatusLabel=_MatchStatusLabel;
@property(nonatomic) __weak UIView *nameSeperateVIew; // @synthesize nameSeperateVIew=_nameSeperateVIew;
@property(nonatomic) __weak UILabel *averageIncomLabel; // @synthesize averageIncomLabel=_averageIncomLabel;
@property(nonatomic) __weak UILabel *UserNameLabel; // @synthesize UserNameLabel=_UserNameLabel;
@property(nonatomic) __weak UIImageView *userHeadImageView; // @synthesize userHeadImageView=_userHeadImageView;
@property(nonatomic) __weak UILabel *AccountValueLabel3; // @synthesize AccountValueLabel3=_AccountValueLabel3;
@property(nonatomic) __weak UILabel *AccountValueLabel2; // @synthesize AccountValueLabel2=_AccountValueLabel2;
@property(nonatomic) __weak UILabel *AccountValueLabel1; // @synthesize AccountValueLabel1=_AccountValueLabel1;
@property(nonatomic) __weak UILabel *AccountValueLabel; // @synthesize AccountValueLabel=_AccountValueLabel;
@property(nonatomic) __weak UILabel *AccountNameLabel3; // @synthesize AccountNameLabel3=_AccountNameLabel3;
@property(nonatomic) __weak UILabel *AccountNameLabel2; // @synthesize AccountNameLabel2=_AccountNameLabel2;
@property(nonatomic) __weak UILabel *AccountNameLabel1; // @synthesize AccountNameLabel1=_AccountNameLabel1;
@property(nonatomic) __weak UILabel *AccountNameLabel; // @synthesize AccountNameLabel=_AccountNameLabel;
@property(nonatomic) __weak UILabel *RankLabel; // @synthesize RankLabel=_RankLabel;
@property(nonatomic) __weak UIImageView *RankImageVIew; // @synthesize RankImageVIew=_RankImageVIew;
@property(nonatomic) __weak UILabel *MatchIncomNameLabel; // @synthesize MatchIncomNameLabel=_MatchIncomNameLabel;
@property(nonatomic) __weak UILabel *MatchIncomLabel; // @synthesize MatchIncomLabel=_MatchIncomLabel;
@property(copy, nonatomic) CDUnknownBlockType nameTapBlock; // @synthesize nameTapBlock=_nameTapBlock;
@property(retain, nonatomic) JRJPortfolioDetail *infoDetail; // @synthesize infoDetail=_infoDetail;
- (void).cxx_destruct;
- (void)setIncomText;
- (void)updateRankImage;
- (id)mactchDateString;
- (id)intNumberString:(id)arg1;
- (void)tapHandler:(id)arg1;
- (void)loadNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

