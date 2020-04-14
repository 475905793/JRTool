//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, NSString, RTLabelComponent, RTLabelComponentsStructure, UIColor, UIFont;
@protocol RTLabelDelegate, RTLabelSizeDelegate;

@interface RCLabel : UIView
{
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_originalColor;
    int _textAlignment;
    int _lineBreakMode;
    struct CGSize _optimumSize;
    id <RTLabelDelegate> _delegate;
    id <RTLabelSizeDelegate> _sizeDelegate;
    struct __CTFramesetter *_framesetter;
    struct __CTFrame *_ctFrame;
    CDStruct_627e0f85 _visibleRange;
    NSString *_paragraphReplacement;
    struct __CTFont *_thisFont;
    struct __CFAttributedString *_attrString;
    RTLabelComponent *_currentLinkComponent;
    RTLabelComponent *_currentImgComponent;
    RTLabelComponentsStructure *componentsAndPlainText_;
    long long _numberOfLines;
    struct CGPoint _oldTouchPoint;
    _Bool _autoDetectLinks;
    double _firstLineLeading;
    double _lineLeading;
    NSString *_linkColor;
}

+ (id)stripURL:(id)arg1;
+ (id)extractTextStyle:(id)arg1;
+ (id)rcLabelWithFrame:(struct CGRect)arg1 andFontSize:(long long)arg2;
+ (id)rcAskTempLabel:(_Bool)arg1;
+ (id)rcRichTextLabel20;
+ (id)rcRichTextLabel;
+ (id)rcTempLabel;
+ (id)rcQuestionLabel;
+ (id)rcSystemMessageLabel;
+ (id)rcStockWarningLabel;
+ (id)rcMessageQuestionLabel;
+ (id)rcMessageQuestionLititleLabel;
+ (id)rcZhiboDetailLabel;
@property(copy, nonatomic) NSString *linkColor; // @synthesize linkColor=_linkColor;
@property(nonatomic) double lineLeading; // @synthesize lineLeading=_lineLeading;
@property(nonatomic) double firstLineLeading; // @synthesize firstLineLeading=_firstLineLeading;
@property(nonatomic) _Bool autoDetectLinks; // @synthesize autoDetectLinks=_autoDetectLinks;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) RTLabelComponent *currentLinkComponent; // @synthesize currentLinkComponent=_currentLinkComponent;
@property(retain, nonatomic) RTLabelComponent *currentImgComponent; // @synthesize currentImgComponent=_currentImgComponent;
@property(copy, nonatomic) NSString *paragraphReplacement; // @synthesize paragraphReplacement=_paragraphReplacement;
@property(nonatomic) id <RTLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <RTLabelSizeDelegate> sizeDelegate; // @synthesize sizeDelegate=_sizeDelegate;
@property(nonatomic) struct CGSize optimumSize; // @synthesize optimumSize=_optimumSize;
- (id)visibleText;
- (void)dismissBoundRectForTouch;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)colorForHex:(id)arg1;
- (void)applyFontWithComponent:(id)arg1 toText:(struct __CFAttributedString *)arg2;
- (void)genAttributedString;
- (void)dealloc;
- (void)applyLinkAttributes:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)applyImageAttributes:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)applyUnderlineColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)applyColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)applyBoldStyleToText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;
- (void)applyFontAttributes:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)applyItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;
- (void)applyDoubleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;
- (void)applySingleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;
- (void)applyParagraphStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(int)arg3 withLength:(int)arg4;
- (void)render;
- (struct __CTLine *)createTruncatedLine:(struct __CTLine *)arg1 currentLine:(long long)arg2 totalLine:(long long)arg3 lastLinePos:(struct CGPoint)arg4;
- (struct CGSize)sizeOfnumberOfLines;
- (struct CGRect)BoundingRectFroImage:(id)arg1 withRun:(struct __CTRun *)arg2;
- (struct CGRect)BoundingRectForLink:(id)arg1 withRun:(struct __CTRun *)arg2;
- (struct CGPath *)newPathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)componentsAndPlainText;
- (void)setComponentsAndPlainText:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (int)lineBreakMode;
- (void)setLineBreakMode:(int)arg1;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (id)getTouchText;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getSeparatedLinesFromLabel:(id)arg1;
- (id)handleMessageTestLength:(id)arg1 WithRow:(long long)arg2 WithText:(id)arg3 WithIsShowCardStlye:(_Bool)arg4;
@property(retain, nonatomic) NSString *copyString;
@property(retain, nonatomic) NSNumber *firstResponser;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copyItemClicked:(id)arg1;
- (void)copyMenu:(id)arg1;

@end

