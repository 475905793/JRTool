//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UIColor, UIFont, UILabel;
@protocol LMJScrollTextView2Delegate;

@interface LMJScrollTextView2 : UIView
{
    UILabel *_scrollLabel;
    long long _index;
    NSTimer *_timer;
    _Bool _isShowAttributed;
    id <LMJScrollTextView2Delegate> _delegate;
    NSArray *_textDataArr;
    NSArray *_attributedDataArr;
    UIFont *_textFont;
    UIColor *_textColor;
}

@property(nonatomic) _Bool isShowAttributed; // @synthesize isShowAttributed=_isShowAttributed;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSArray *attributedDataArr; // @synthesize attributedDataArr=_attributedDataArr;
@property(copy, nonatomic) NSArray *textDataArr; // @synthesize textDataArr=_textDataArr;
@property(nonatomic) id <LMJScrollTextView2Delegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)viewController;
- (_Bool)isCurrentViewControllerVisible:(id)arg1;
- (void)scrollBottomToTop;
- (void)stop;
- (void)startScrollBottomToTop;
- (void)tapLabelHandle;
- (void)createScrollLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

