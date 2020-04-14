//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableView.h"

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString;

@interface TPKeyboardAvoidingTableView : KKTableView <UITextFieldDelegate, UITextViewDelegate>
{
}

- (void)layoutSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)scrollToActiveTextField;
- (_Bool)focusNextTextField;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

