//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EaseMessageViewController.h"

#import "EaseMessageViewControllerDataSource-Protocol.h"

@class NSString;

@interface JRJCustomerServicesController : EaseMessageViewController <EaseMessageViewControllerDataSource>
{
    _Bool _isPresent;
    NSString *_queueName;
}

@property(retain, nonatomic) NSString *queueName; // @synthesize queueName=_queueName;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
- (void).cxx_destruct;
- (void)receiveWelcomeMsg:(id)arg1;
- (void)asyncSendWelcomMessageWithToken:(id)arg1;
- (void)getWelcomeToken;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)getWeiChat;
- (id)getUserInfoAttribute;
- (void)sendTextMessage:(id)arg1;
- (void)dismiss;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

