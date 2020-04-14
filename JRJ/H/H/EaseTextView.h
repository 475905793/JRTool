//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor;

@interface EaseTextView : UITextView
{
    NSString *_placeHolder;
    UIColor *_placeHolderTextColor;
}

+ (unsigned long long)numberOfLinesForMessage:(id)arg1;
+ (unsigned long long)maxCharactersPerLine;
@property(retain, nonatomic) UIColor *placeHolderTextColor; // @synthesize placeHolderTextColor=_placeHolderTextColor;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;
- (void)didReceiveTextDidChangeNotification:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (unsigned long long)numberOfLinesOfText;

@end

