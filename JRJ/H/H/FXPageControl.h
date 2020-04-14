//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImage;
@protocol FXPageControlDelegate;

@interface FXPageControl : UIControl
{
    _Bool _defersCurrentPageDisplay;
    _Bool _hidesForSinglePage;
    _Bool _wrapEnabled;
    _Bool _vertical;
    id <FXPageControlDelegate> _delegate;
    long long _currentPage;
    long long _numberOfPages;
    const struct CGPath *_dotShape;
    double _dotSize;
    double _dotShadowBlur;
    double _dotBorderWidth;
    UIImage *_dotImage;
    UIColor *_dotColor;
    UIColor *_dotShadowColor;
    UIColor *_dotBorderColor;
    const struct CGPath *_selectedDotShape;
    double _selectedDotSize;
    double _selectedDotShadowBlur;
    double _selectedDotBorderWidth;
    UIImage *_selectedDotImage;
    UIColor *_selectedDotColor;
    UIColor *_selectedDotShadowColor;
    UIColor *_selectedDotBorderColor;
    double _dotSpacing;
    struct CGSize _dotShadowOffset;
    struct CGSize _selectedDotShadowOffset;
}

@property(nonatomic) double dotSpacing; // @synthesize dotSpacing=_dotSpacing;
@property(retain, nonatomic) UIColor *selectedDotBorderColor; // @synthesize selectedDotBorderColor=_selectedDotBorderColor;
@property(retain, nonatomic) UIColor *selectedDotShadowColor; // @synthesize selectedDotShadowColor=_selectedDotShadowColor;
@property(retain, nonatomic) UIColor *selectedDotColor; // @synthesize selectedDotColor=_selectedDotColor;
@property(retain, nonatomic) UIImage *selectedDotImage; // @synthesize selectedDotImage=_selectedDotImage;
@property(nonatomic) double selectedDotBorderWidth; // @synthesize selectedDotBorderWidth=_selectedDotBorderWidth;
@property(nonatomic) struct CGSize selectedDotShadowOffset; // @synthesize selectedDotShadowOffset=_selectedDotShadowOffset;
@property(nonatomic) double selectedDotShadowBlur; // @synthesize selectedDotShadowBlur=_selectedDotShadowBlur;
@property(nonatomic) double selectedDotSize; // @synthesize selectedDotSize=_selectedDotSize;
@property(nonatomic) const struct CGPath *selectedDotShape; // @synthesize selectedDotShape=_selectedDotShape;
@property(retain, nonatomic) UIColor *dotBorderColor; // @synthesize dotBorderColor=_dotBorderColor;
@property(retain, nonatomic) UIColor *dotShadowColor; // @synthesize dotShadowColor=_dotShadowColor;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
@property(retain, nonatomic) UIImage *dotImage; // @synthesize dotImage=_dotImage;
@property(nonatomic) double dotBorderWidth; // @synthesize dotBorderWidth=_dotBorderWidth;
@property(nonatomic) struct CGSize dotShadowOffset; // @synthesize dotShadowOffset=_dotShadowOffset;
@property(nonatomic) double dotShadowBlur; // @synthesize dotShadowBlur=_dotShadowBlur;
@property(nonatomic) double dotSize; // @synthesize dotSize=_dotSize;
@property(nonatomic) const struct CGPath *dotShape; // @synthesize dotShape=_dotShape;
@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic, getter=isWrapEnabled) _Bool wrapEnabled; // @synthesize wrapEnabled=_wrapEnabled;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) _Bool defersCurrentPageDisplay; // @synthesize defersCurrentPageDisplay=_defersCurrentPageDisplay;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) __weak id <FXPageControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (long long)clampedPageValue:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateCurrentPageDisplay;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setUp;

@end

