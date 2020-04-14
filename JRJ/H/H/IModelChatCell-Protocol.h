//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IModelCell-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol IModelChatCell <NSObject, IModelCell>
@property(retain, nonatomic) id model;

@optional
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(NSString *)arg2 model:(id)arg3;
- (void)updateCustomBubbleViewMargin:(struct UIEdgeInsets)arg1 model:(id)arg2;
- (void)setCustomModel:(id)arg1;
- (void)setCustomBubbleView:(id)arg1;
- (_Bool)isCustomBubbleView:(id)arg1;
@end
