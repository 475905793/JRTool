//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CustomWebAlertView, UIView;

@protocol CustomAlertViewDelegate <NSObject>

@optional
- (void)hideCurrentKeyBoard;
- (void)willPresentCustomAlertView:(UIView *)arg1;
- (void)alertViewClosed:(CustomWebAlertView *)arg1;
- (void)alertView:(CustomWebAlertView *)arg1 clickedButtonAtIndex:(long long)arg2 IsView:(_Bool)arg3;
@end

