//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JRJBaseViewController, NSDictionary, NSString, TradePublicHandler;

@interface PickerBrokerHandler : NSObject
{
    _Bool isBrokerAppHave;
    _Bool _isCancelNotificationBecomeActivity;
    _Bool _accountGrayStatus;
    int _iosParamSize;
    JRJBaseViewController *_delegate;
    NSDictionary *_brokerSource;
    NSString *_data;
    NSString *_sign;
    long long _cellHeight;
    NSString *_iosParam;
    NSString *_iosAPP;
    NSString *_brokerDownloadUrl;
    NSString *_brokerUrlSchemes;
    NSString *_brokerAppName;
    NSString *_iosSDK;
    NSString *_sname;
    NSString *_iosWeb;
    TradePublicHandler *_tradePublicHandler;
}

@property(retain, nonatomic) TradePublicHandler *tradePublicHandler; // @synthesize tradePublicHandler=_tradePublicHandler;
@property(copy, nonatomic) NSString *iosWeb; // @synthesize iosWeb=_iosWeb;
@property(copy, nonatomic) NSString *sname; // @synthesize sname=_sname;
@property(copy, nonatomic) NSString *iosSDK; // @synthesize iosSDK=_iosSDK;
@property(copy, nonatomic) NSString *brokerAppName; // @synthesize brokerAppName=_brokerAppName;
@property(copy, nonatomic) NSString *brokerUrlSchemes; // @synthesize brokerUrlSchemes=_brokerUrlSchemes;
@property(copy, nonatomic) NSString *brokerDownloadUrl; // @synthesize brokerDownloadUrl=_brokerDownloadUrl;
@property(nonatomic) int iosParamSize; // @synthesize iosParamSize=_iosParamSize;
@property(copy, nonatomic) NSString *iosAPP; // @synthesize iosAPP=_iosAPP;
@property(copy, nonatomic) NSString *iosParam; // @synthesize iosParam=_iosParam;
@property(nonatomic) _Bool accountGrayStatus; // @synthesize accountGrayStatus=_accountGrayStatus;
@property(nonatomic) long long cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) _Bool isCancelNotificationBecomeActivity; // @synthesize isCancelNotificationBecomeActivity=_isCancelNotificationBecomeActivity;
@property(retain, nonatomic) NSDictionary *brokerSource; // @synthesize brokerSource=_brokerSource;
@property(nonatomic) __weak JRJBaseViewController *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openAccountFromCRH;
- (void)showAlertViewWithTitile:(id)arg1 message:(id)arg2 cancel:(id)arg3 ensure:(id)arg4;
- (void)showTradWebController:(id)arg1 accountBrokerId:(id)arg2 brokerName:(id)arg3;
- (void)openAndTransferAccountAction:(id)arg1;
- (void)parseOpenAccountData:(id)arg1 brokerId:(id)arg2;
- (void)sendOpenAccountRequest:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)bindAccountWithBrokerId:(id)arg1 brokerName:(id)arg2;
- (void)openAccount:(id)arg1 openType:(int)arg2 brokerId:(id)arg3;
- (void)openAccountShouldSkipInviteCode:(_Bool)arg1 brokerId:(id)arg2;
- (void)p_JRJUpdateMobileViewController;
- (void)tradeGuideOpenAccountWithBrokerId:(id)arg1;
- (void)openAccountWithBrokerId:(id)arg1;
- (void)GDZQOpenAccountOrTrade:(_Bool)arg1;
- (void)dealloc;

@end

