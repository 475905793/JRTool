//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IModelCell <NSObject>
+ (double)cellHeightWithModel:(id)arg1;
+ (NSString *)cellIdentifierWithModel:(id)arg1;
@property(retain, nonatomic) id model;

@optional
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(NSString *)arg2 model:(id)arg3;
@end

