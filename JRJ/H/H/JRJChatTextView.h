//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIFont, UILabel;

@interface JRJChatTextView : UITextView
{
    UIFont *_placeholderFont;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
- (void).cxx_destruct;
- (void)p_didChangeText:(id)arg1;
- (void)p_unregisterNotifications;
- (void)p_registerNotifications;
@property(copy, nonatomic) NSString *placeholder;
- (_Bool)p_shouldShowPlaceholder;
- (void)layoutSubviews;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@end

