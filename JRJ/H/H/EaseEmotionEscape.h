//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface EaseEmotionEscape : NSObject
{
    NSString *_urlPattern;
    NSDictionary *_dict;
}

+ (id)attStringFromTextForInputView:(id)arg1;
+ (id)attStringFromTextForChatting:(id)arg1;
+ (id)attributtedStringFromText:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setEaseEmotionEscapeDictionary:(id)arg1;
- (void)setEaseEmotionEscapePattern:(id)arg1;
- (id)getEmojiImageNameByKey:(id)arg1;
- (id)getEmojiTextByKey:(id)arg1;
- (id)attStringFromTextForInputView:(id)arg1 textFont:(id)arg2;
- (id)attStringFromTextForChatting:(id)arg1 textFont:(id)arg2;
- (id)attributtedStringFromText:(id)arg1;

@end
