//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MBProgressHUD, NSArray, NSString;

@protocol ViewControllerPromptingDelegate <NSObject>

@optional
- (void)showActionSheet:(NSString *)arg1 andButtonArray:(NSArray *)arg2 andButtonBlcok:(void (^)(long long))arg3;
- (void)removeMBProgressHudInManaual;
- (MBProgressHUD *)showHudErrorView:(NSString *)arg1;
- (MBProgressHUD *)showHudSuccessView:(NSString *)arg1;
- (MBProgressHUD *)showHudManaual:(NSString *)arg1;
- (MBProgressHUD *)showHudAuto:(NSString *)arg1 duration:(double)arg2;
- (MBProgressHUD *)showHudAuto:(NSString *)arg1;
- (MBProgressHUD *)showHudWaitingView:(NSString *)arg1;
- (id)showActionSheet:(NSString *)arg1 message:(NSString *)arg2 buttonTitle:(NSArray *)arg3 style:(long long)arg4 handler:(void (^)(UIActionSheet *, long long))arg5;
- (id)showActionSheet:(NSString *)arg1 message:(NSString *)arg2 buttonTitle:(NSArray *)arg3 handler:(void (^)(UIActionSheet *, long long))arg4;
- (void)alertViewWithTitle:(NSString *)arg1 cancelButton:(NSString *)arg2 andHandleBlock:(void (^)(UIAlertView *, long long))arg3;
- (void)alertViewWithButtonsBlock:(NSArray * (^)(void))arg1 andHandleBlock:(void (^)(UIAlertView *, long long))arg2 andMessage:(NSString *)arg3;
- (void)alertViewWithoutButton:(NSString *)arg1;
- (void)alertView:(NSString *)arg1;
@end
