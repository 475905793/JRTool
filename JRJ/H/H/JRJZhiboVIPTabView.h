//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIImageView;

@interface JRJZhiboVIPTabView : UIView
{
    NSArray *_titles;
    CDUnknownBlockType _buttonTappedBlock;
    UIColor *_highlightedColor;
    UIColor *_normalColor;
    NSMutableArray *_buttons;
    UIImageView *_underline;
}

@property(retain, nonatomic) UIImageView *underline; // @synthesize underline=_underline;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(copy, nonatomic) CDUnknownBlockType buttonTappedBlock; // @synthesize buttonTappedBlock=_buttonTappedBlock;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

