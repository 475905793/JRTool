//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TradeOpenAccountModel : NSObject
{
    NSString *_backgroundsLogo;
    NSString *_backgroundsPic;
    NSString *_accountId;
    long long _bind;
    NSString *_brokerId;
    NSString *_mark;
    NSString *_brokerName;
    NSString *_brokerLogo;
    NSString *_tip;
    NSString *_ext1;
    NSString *_ext2;
    NSString *_ext3;
    NSString *_bindOther;
    NSString *_bindSelf;
    NSString *_kNewStr;
    NSString *_recommend;
    NSString *_intro;
    NSString *_selfBindFlag;
    NSString *_open;
    NSString *_maintenance;
    NSString *_statusDisplay;
    NSString *_shareContent;
    NSString *_shareTitle;
    NSString *_shareImgUrl;
    NSString *_shareTargetUrl;
}

@property(copy, nonatomic) NSString *shareTargetUrl; // @synthesize shareTargetUrl=_shareTargetUrl;
@property(copy, nonatomic) NSString *shareImgUrl; // @synthesize shareImgUrl=_shareImgUrl;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *statusDisplay; // @synthesize statusDisplay=_statusDisplay;
@property(copy, nonatomic) NSString *maintenance; // @synthesize maintenance=_maintenance;
@property(copy, nonatomic) NSString *open; // @synthesize open=_open;
@property(copy, nonatomic) NSString *selfBindFlag; // @synthesize selfBindFlag=_selfBindFlag;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *recommend; // @synthesize recommend=_recommend;
@property(copy, nonatomic) NSString *kNewStr; // @synthesize kNewStr=_kNewStr;
@property(copy, nonatomic) NSString *bindSelf; // @synthesize bindSelf=_bindSelf;
@property(copy, nonatomic) NSString *bindOther; // @synthesize bindOther=_bindOther;
@property(copy, nonatomic) NSString *ext3; // @synthesize ext3=_ext3;
@property(copy, nonatomic) NSString *ext2; // @synthesize ext2=_ext2;
@property(copy, nonatomic) NSString *ext1; // @synthesize ext1=_ext1;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *brokerLogo; // @synthesize brokerLogo=_brokerLogo;
@property(copy, nonatomic) NSString *brokerName; // @synthesize brokerName=_brokerName;
@property(copy, nonatomic) NSString *mark; // @synthesize mark=_mark;
@property(copy, nonatomic) NSString *brokerId; // @synthesize brokerId=_brokerId;
@property(nonatomic) long long bind; // @synthesize bind=_bind;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *backgroundsPic; // @synthesize backgroundsPic=_backgroundsPic;
@property(copy, nonatomic) NSString *backgroundsLogo; // @synthesize backgroundsLogo=_backgroundsLogo;
- (void).cxx_destruct;

@end
