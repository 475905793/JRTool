//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EaseMessageCell;
@protocol IMessageModel;

@protocol EaseMessageCellDelegate <NSObject>

@optional
- (void)avatarViewSelcted:(id <IMessageModel>)arg1;
- (void)statusButtonSelcted:(id <IMessageModel>)arg1 withMessageCell:(EaseMessageCell *)arg2;
- (void)messageCellSelected:(id <IMessageModel>)arg1;
@end
