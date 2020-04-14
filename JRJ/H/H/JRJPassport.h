//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JRJPassport : NSObject
{
}

+ (id)sharedPassport;
- (void)saveUserInfoGJ:(id)arg1 andUserInfoXY:(id)arg2;
- (void)handleQuickLoginResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleRegisterResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleLoginResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleThirdPartyResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loginWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)errorWithRequest:(id)arg1 message:(id)arg2;
- (void)loginWithChinaMobileAccessToken:(id)arg1 userId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loginWithWeiboAccessToken:(id)arg1 userId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loginWithQQAccessToken:(id)arg1 openId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loginWithWeixinCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkPasswordExistanceWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUserInfoWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetPasswordOfUser:(id)arg1 to:(id)arg2 withToken:(id)arg3 mobileNumber:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)changeMobileOfUser:(id)arg1 to:(id)arg2 withToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPasswordOfUser:(id)arg1 withPassword:(id)arg2 token:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changePasswordOfUser:(id)arg1 to:(id)arg2 withToken:(id)arg3 currentPasswod:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)changeNickNameOfUser:(id)arg1 to:(id)arg2 withToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)verifyMobileNumber:(id)arg1 code:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkMobileNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendVoiceCodeToMobileNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendCodeToMobileNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerWithMobileNumber:(id)arg1 userName:(id)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loginWithMobileNumber:(id)arg1 code:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loginWithName:(id)arg1 password:(id)arg2 captcha:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

