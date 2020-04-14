//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewBaseCell.h"

@class UIColor, UIView;

@interface JRJCardCell : KKTableViewBaseCell
{
    _Bool _hidesTopBorder;
    _Bool _hidesBottomBorder;
    _Bool _hidesLeftBorder;
    _Bool _hidesRightBorder;
    _Bool _showsSeparator;
    _Bool _highlightEnabled;
    UIView *_containerView;
    UIColor *_containerBackgroundColor;
    UIColor *_borderColor;
    UIColor *_highlightedColor;
    double _separatorLeftPadding;
    UIView *_borderTop;
    UIView *_borderBottom;
    UIView *_borderLeft;
    UIView *_borderRight;
    UIView *_separator;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIView *borderRight; // @synthesize borderRight=_borderRight;
@property(retain, nonatomic) UIView *borderLeft; // @synthesize borderLeft=_borderLeft;
@property(retain, nonatomic) UIView *borderBottom; // @synthesize borderBottom=_borderBottom;
@property(retain, nonatomic) UIView *borderTop; // @synthesize borderTop=_borderTop;
@property(nonatomic) double separatorLeftPadding; // @synthesize separatorLeftPadding=_separatorLeftPadding;
@property(nonatomic) _Bool highlightEnabled; // @synthesize highlightEnabled=_highlightEnabled;
@property(nonatomic) _Bool showsSeparator; // @synthesize showsSeparator=_showsSeparator;
@property(nonatomic) _Bool hidesRightBorder; // @synthesize hidesRightBorder=_hidesRightBorder;
@property(nonatomic) _Bool hidesLeftBorder; // @synthesize hidesLeftBorder=_hidesLeftBorder;
@property(nonatomic) _Bool hidesBottomBorder; // @synthesize hidesBottomBorder=_hidesBottomBorder;
@property(nonatomic) _Bool hidesTopBorder; // @synthesize hidesTopBorder=_hidesTopBorder;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *containerBackgroundColor; // @synthesize containerBackgroundColor=_containerBackgroundColor;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)hideAllBorderLine;
- (void)setupBorder:(id)arg1 verticalFormat:(id)arg2 horizontalFormat:(id)arg3;
- (void)addBorders;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
