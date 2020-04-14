//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EMConversation, NSString, UIImage;

@protocol IConversationModel <NSObject>
@property(retain, nonatomic) UIImage *avatarImage;
@property(retain, nonatomic) NSString *avatarURLPath;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) EMConversation *conversation;
- (id)initWithConversation:(EMConversation *)arg1;
@end

