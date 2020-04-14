//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewModel.h"

@class JRJFundFinancialAccountInfoModel, JRJFundFinancialConfigModel, NSArray;

@interface JRJFundFinancialViewModel : MMViewModel
{
    JRJFundFinancialAccountInfoModel *_accountInfoModel;
    JRJFundFinancialConfigModel *_configModel;
    long long _recommendTagIndex;
    long long _dingqiTagIndex;
    long long _insuranceTagIndex;
    long long _newsTagIndex;
    NSArray *_sectionTitles;
    NSArray *_fundList;
    NSArray *_dingqiList;
    NSArray *_insuranceList;
    NSArray *_newsList;
}

+ (id)getInstance;
@property(retain, nonatomic) NSArray *newsList; // @synthesize newsList=_newsList;
@property(retain, nonatomic) NSArray *insuranceList; // @synthesize insuranceList=_insuranceList;
@property(retain, nonatomic) NSArray *dingqiList; // @synthesize dingqiList=_dingqiList;
@property(retain, nonatomic) NSArray *fundList; // @synthesize fundList=_fundList;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(nonatomic) long long newsTagIndex; // @synthesize newsTagIndex=_newsTagIndex;
@property(nonatomic) long long insuranceTagIndex; // @synthesize insuranceTagIndex=_insuranceTagIndex;
@property(nonatomic) long long dingqiTagIndex; // @synthesize dingqiTagIndex=_dingqiTagIndex;
@property(nonatomic) long long recommendTagIndex; // @synthesize recommendTagIndex=_recommendTagIndex;
@property(retain, nonatomic) JRJFundFinancialConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) JRJFundFinancialAccountInfoModel *accountInfoModel; // @synthesize accountInfoModel=_accountInfoModel;
- (void).cxx_destruct;
- (long long)sectionMenuIndexAtIndex:(long long)arg1;
- (_Bool)isShowMoreAtIndex:(long long)arg1;
- (id)getNewsTagOfList;
- (id)getInsuranceTagOfList;
- (id)getDingQiTagOfList;
- (id)getRecommendFundTagOfList;
- (void)configAllSectionsViewTagOfList;
- (void)configSectionTitles;
- (void)configFunctionList;
- (id)bankModelAtIndex:(long long)arg1;
- (id)newsModelAtIndex:(long long)arg1;
- (id)insuranceModelAtIndex:(long long)arg1;
- (id)dingqiModelAtIndex:(long long)arg1;
- (id)fundModelAtIndex:(long long)arg1;
- (void)configSectionViewTagOfListWithSectionType:(unsigned long long)arg1;
- (id)getSectionTitlesAtSection:(long long)arg1;
- (_Bool)validAccount;
- (void)getFundFinancialConfigList:(CDUnknownBlockType)arg1;
- (void)loadYingLiBaoAccountInfo:(CDUnknownBlockType)arg1;
- (double)headerHeightInSection:(long long)arg1;
- (double)rowHeightWithIndexPath:(id)arg1;
- (long long)numberOfRowsInSections:(long long)arg1;
- (long long)numberOfSections;
- (void)clear;

@end

