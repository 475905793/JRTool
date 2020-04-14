//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJRichTextModel.h"

@class NSString, UserInformationModel;

@interface StockWarningModel : JRJRichTextModel
{
    _Bool _isNewPush;
    _Bool _isAdvise;
    long long _dataId;
    NSString *_stockTitle;
    NSString *_stockName;
    NSString *_stockCode;
    NSString *_stockMarket;
    NSString *_pushTime;
    NSString *_senderTime;
    UserInformationModel *_userInfoModel;
    NSString *_groupName;
    NSString *_groupId;
    NSString *_stockPrice;
    NSString *_stockRise;
    NSString *_oldPosition;
    long long _dealtype;
}

@property(nonatomic) _Bool isAdvise; // @synthesize isAdvise=_isAdvise;
@property(nonatomic) long long dealtype; // @synthesize dealtype=_dealtype;
@property(copy, nonatomic) NSString *oldPosition; // @synthesize oldPosition=_oldPosition;
@property(copy, nonatomic) NSString *stockRise; // @synthesize stockRise=_stockRise;
@property(copy, nonatomic) NSString *stockPrice; // @synthesize stockPrice=_stockPrice;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) UserInformationModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(copy, nonatomic) NSString *senderTime; // @synthesize senderTime=_senderTime;
@property(copy, nonatomic) NSString *pushTime; // @synthesize pushTime=_pushTime;
@property(nonatomic) _Bool isNewPush; // @synthesize isNewPush=_isNewPush;
@property(copy, nonatomic) NSString *stockMarket; // @synthesize stockMarket=_stockMarket;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(copy, nonatomic) NSString *stockTitle; // @synthesize stockTitle=_stockTitle;
@property(nonatomic) long long dataId; // @synthesize dataId=_dataId;
- (void).cxx_destruct;
- (void)parseDictionary:(id)arg1;
- (id)initWithAdviseChangeType:(_Bool)arg1;

@end

