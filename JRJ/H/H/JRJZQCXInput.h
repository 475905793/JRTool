//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITextField;

@interface JRJZQCXInput : UIView
{
    UITextField *_textfield;
    CDUnknownBlockType _beginCommentBlock;
    CDUnknownBlockType _emotionBtnBlock;
    CDUnknownBlockType _textBtnBlock;
}

+ (id)viewFromNIB;
@property(copy, nonatomic) CDUnknownBlockType textBtnBlock; // @synthesize textBtnBlock=_textBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType emotionBtnBlock; // @synthesize emotionBtnBlock=_emotionBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType beginCommentBlock; // @synthesize beginCommentBlock=_beginCommentBlock;
@property(nonatomic) __weak UITextField *textfield; // @synthesize textfield=_textfield;
- (void).cxx_destruct;
- (void)textBtn:(id)arg1;
- (void)emotionBtn:(id)arg1;
- (void)commentButton:(id)arg1;
- (void)awakeFromNib;

@end

