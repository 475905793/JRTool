//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol EMContactManagerDelegate <NSObject>

@optional
- (void)didReceiveFriendInvitationFromUsername:(NSString *)arg1 message:(NSString *)arg2;
- (void)didReceiveAddedFromUsername:(NSString *)arg1;
- (void)didReceiveDeletedFromUsername:(NSString *)arg1;
- (void)didReceiveDeclinedFromUsername:(NSString *)arg1;
- (void)didReceiveAgreedFromUsername:(NSString *)arg1;
- (void)friendRequestDidReceiveFromUser:(NSString *)arg1 message:(NSString *)arg2;
- (void)friendshipDidAddByUser:(NSString *)arg1;
- (void)friendshipDidRemoveByUser:(NSString *)arg1;
- (void)friendRequestDidDeclineByUser:(NSString *)arg1;
- (void)friendRequestDidApproveByUser:(NSString *)arg1;
@end

