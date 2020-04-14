//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JRJPortfolioRatingProgressView, NSString, UIButton, UILabel;

@interface JRJPortfolioRatingView : UIView
{
    _Bool _selected;
    NSString *_name;
    CDUnknownBlockType _buttonPressedBlock;
    JRJPortfolioRatingProgressView *_progressView;
    UILabel *_label;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) JRJPortfolioRatingProgressView *progressView; // @synthesize progressView=_progressView;
@property(copy, nonatomic) CDUnknownBlockType buttonPressedBlock; // @synthesize buttonPressedBlock=_buttonPressedBlock;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)updateWithCount:(long long)arg1 highest:(long long)arg2;
- (void)buttonPressed:(id)arg1;
- (void)setupLabel;
- (void)setupButton;
- (void)setupProgressView;
- (void)awakeFromNib;

@end

