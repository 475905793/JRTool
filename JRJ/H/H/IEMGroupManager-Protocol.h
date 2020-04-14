//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EMCursorResult, EMError, EMGroup, EMGroupOptions, NSArray, NSObject, NSString;
@protocol EMGroupManagerDelegate, OS_dispatch_queue;

@protocol IEMGroupManager <NSObject>
- (void)asyncIgnoreGroupPush:(NSString *)arg1 ignore:(_Bool)arg2 success:(void (^)(void))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncDeclineInvitationFromGroup:(NSString *)arg1 inviter:(NSString *)arg2 reason:(NSString *)arg3 success:(void (^)(void))arg4 failure:(void (^)(EMError *))arg5;
- (void)asyncAcceptInvitationFromGroup:(NSString *)arg1 inviter:(NSString *)arg2 success:(void (^)(EMGroup *))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncDeclineJoinApplication:(NSString *)arg1 applicant:(NSString *)arg2 reason:(NSString *)arg3 success:(void (^)(void))arg4 failure:(void (^)(EMError *))arg5;
- (void)asyncAcceptJoinApplication:(NSString *)arg1 applicant:(NSString *)arg2 success:(void (^)(void))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncApplyJoinPublicGroup:(NSString *)arg1 message:(NSString *)arg2 success:(void (^)(EMGroup *))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncJoinPublicGroup:(NSString *)arg1 success:(void (^)(EMGroup *))arg2 failure:(void (^)(EMError *))arg3;
- (void)asyncUnblockGroup:(NSString *)arg1 success:(void (^)(EMGroup *))arg2 failure:(void (^)(EMError *))arg3;
- (void)asyncBlockGroup:(NSString *)arg1 success:(void (^)(EMGroup *))arg2 failure:(void (^)(EMError *))arg3;
- (void)asyncDestroyGroup:(NSString *)arg1 success:(void (^)(EMGroup *))arg2 failure:(void (^)(EMError *))arg3;
- (void)asyncLeaveGroup:(NSString *)arg1 success:(void (^)(EMGroup *))arg2 failure:(void (^)(EMError *))arg3;
- (void)asyncChangeDescription:(NSString *)arg1 forGroup:(NSString *)arg2 success:(void (^)(EMGroup *))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncChangeGroupSubject:(NSString *)arg1 forGroup:(NSString *)arg2 success:(void (^)(EMGroup *))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncUnblockOccupants:(NSArray *)arg1 forGroup:(NSString *)arg2 success:(void (^)(EMGroup *))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncBlockOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2 success:(void (^)(EMGroup *))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncRemoveOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2 success:(void (^)(EMGroup *))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncAddOccupants:(NSArray *)arg1 toGroup:(NSString *)arg2 welcomeMessage:(NSString *)arg3 success:(void (^)(EMGroup *))arg4 failure:(void (^)(EMError *))arg5;
- (void)asyncFetchGroupBansList:(NSString *)arg1 success:(void (^)(NSArray *))arg2 failure:(void (^)(EMError *))arg3;
- (void)asyncFetchGroupInfo:(NSString *)arg1 includeMembersList:(_Bool)arg2 success:(void (^)(EMGroup *))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncCreateGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 message:(NSString *)arg4 setting:(EMGroupOptions *)arg5 success:(void (^)(EMGroup *))arg6 failure:(void (^)(EMError *))arg7;
- (void)asyncSearchPublicGroupWithId:(NSString *)arg1 success:(void (^)(EMGroup *))arg2 failure:(void (^)(EMError *))arg3;
- (void)asyncGetPublicGroupsFromServerWithCursor:(NSString *)arg1 pageSize:(long long)arg2 success:(void (^)(EMCursorResult *))arg3 failure:(void (^)(EMError *))arg4;
- (void)asyncGetMyGroupsFromServer:(void (^)(NSArray *))arg1 failure:(void (^)(EMError *))arg2;
- (NSArray *)getAllIgnoredGroupIds;
- (NSArray *)loadAllMyGroupsFromDB;
- (NSArray *)getAllGroups;
- (void)updatePushServiceForGroup:(NSString *)arg1 isPushEnabled:(_Bool)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)declineGroupInvitation:(NSString *)arg1 inviter:(NSString *)arg2 reason:(NSString *)arg3 completion:(void (^)(EMError *))arg4;
- (void)acceptInvitationFromGroup:(NSString *)arg1 inviter:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)declineJoinGroupRequest:(NSString *)arg1 sender:(NSString *)arg2 reason:(NSString *)arg3 completion:(void (^)(EMGroup *, EMError *))arg4;
- (void)approveJoinGroupRequest:(NSString *)arg1 sender:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)requestToJoinPublicGroup:(NSString *)arg1 message:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)joinPublicGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2;
- (void)unblockGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2;
- (void)blockGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2;
- (void)destroyGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2;
- (void)leaveGroup:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2;
- (void)updateDescription:(NSString *)arg1 forGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)updateGroupSubject:(NSString *)arg1 forGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)unblockMembers:(NSArray *)arg1 fromGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)blockMembers:(NSArray *)arg1 fromGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)removeMembers:(NSArray *)arg1 fromGroup:(NSString *)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)addMembers:(NSArray *)arg1 toGroup:(NSString *)arg2 message:(NSString *)arg3 completion:(void (^)(EMGroup *, EMError *))arg4;
- (void)getGroupBlackListFromServerByID:(NSString *)arg1 completion:(void (^)(NSArray *, EMError *))arg2;
- (void)getGroupSpecificationFromServerByID:(NSString *)arg1 includeMembersList:(_Bool)arg2 completion:(void (^)(EMGroup *, EMError *))arg3;
- (void)createGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 message:(NSString *)arg4 setting:(EMGroupOptions *)arg5 completion:(void (^)(EMGroup *, EMError *))arg6;
- (void)searchPublicGroupWithId:(NSString *)arg1 completion:(void (^)(EMGroup *, EMError *))arg2;
- (void)getPublicGroupsFromServerWithCursor:(NSString *)arg1 pageSize:(long long)arg2 completion:(void (^)(EMCursorResult *, EMError *))arg3;
- (void)getJoinedGroupsFromServerWithCompletion:(void (^)(NSArray *, EMError *))arg1;
- (EMError *)ignoreGroupPush:(NSString *)arg1 ignore:(_Bool)arg2;
- (EMError *)declineInvitationFromGroup:(NSString *)arg1 inviter:(NSString *)arg2 reason:(NSString *)arg3;
- (EMGroup *)acceptInvitationFromGroup:(NSString *)arg1 inviter:(NSString *)arg2 error:(id *)arg3;
- (EMError *)declineJoinApplication:(NSString *)arg1 applicant:(NSString *)arg2 reason:(NSString *)arg3;
- (EMError *)acceptJoinApplication:(NSString *)arg1 applicant:(NSString *)arg2;
- (EMGroup *)applyJoinPublicGroup:(NSString *)arg1 message:(NSString *)arg2 error:(id *)arg3;
- (EMGroup *)joinPublicGroup:(NSString *)arg1 error:(id *)arg2;
- (EMGroup *)unblockGroup:(NSString *)arg1 error:(id *)arg2;
- (EMGroup *)blockGroup:(NSString *)arg1 error:(id *)arg2;
- (EMGroup *)destroyGroup:(NSString *)arg1 error:(id *)arg2;
- (EMGroup *)leaveGroup:(NSString *)arg1 error:(id *)arg2;
- (EMGroup *)changeDescription:(NSString *)arg1 forGroup:(NSString *)arg2 error:(id *)arg3;
- (EMGroup *)changeGroupSubject:(NSString *)arg1 forGroup:(NSString *)arg2 error:(id *)arg3;
- (EMGroup *)unblockOccupants:(NSArray *)arg1 forGroup:(NSString *)arg2 error:(id *)arg3;
- (EMGroup *)blockOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2 error:(id *)arg3;
- (EMGroup *)removeOccupants:(NSArray *)arg1 fromGroup:(NSString *)arg2 error:(id *)arg3;
- (EMGroup *)addOccupants:(NSArray *)arg1 toGroup:(NSString *)arg2 welcomeMessage:(NSString *)arg3 error:(id *)arg4;
- (NSArray *)fetchGroupBansList:(NSString *)arg1 error:(id *)arg2;
- (EMGroup *)fetchGroupInfo:(NSString *)arg1 includeMembersList:(_Bool)arg2 error:(id *)arg3;
- (EMGroup *)createGroupWithSubject:(NSString *)arg1 description:(NSString *)arg2 invitees:(NSArray *)arg3 message:(NSString *)arg4 setting:(EMGroupOptions *)arg5 error:(id *)arg6;
- (EMGroup *)searchPublicGroupWithId:(NSString *)arg1 error:(id *)arg2;
- (EMCursorResult *)getPublicGroupsFromServerWithCursor:(NSString *)arg1 pageSize:(long long)arg2 error:(id *)arg3;
- (NSArray *)getMyGroupsFromServerWithError:(id *)arg1;
- (NSArray *)getGroupsWithoutPushNotification:(id *)arg1;
- (NSArray *)getJoinedGroups;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id <EMGroupManagerDelegate>)arg1;
- (void)addDelegate:(id <EMGroupManagerDelegate>)arg1 delegateQueue:(NSObject<OS_dispatch_queue> *)arg2;
@end

