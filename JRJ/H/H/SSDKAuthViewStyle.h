//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIButton, UIColor, UIImage;

@interface SSDKAuthViewStyle : NSObject
{
    UIImage *_navigationbarBackgroundImage;
    UIColor *_navigationbarBackgroundColor;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_cancelButtonLabel;
    UIColor *_cancelButtonLabelColor;
    UIImage *_cancelButtonImage;
    double _cancelButtonLeftMargin;
    UIButton *_rightButton;
    double _rightButtonRightMargin;
    unsigned long long _supportedInterfaceOrientation;
    long long _statusBarStyle;
}

+ (void)setStatusBarStyle:(long long)arg1;
+ (void)setSupportedInterfaceOrientation:(unsigned long long)arg1;
+ (void)setRightButtonRightMargin:(double)arg1;
+ (void)setRightButton:(id)arg1;
+ (void)setCancelButtonLeftMargin:(double)arg1;
+ (void)setCancelButtonImage:(id)arg1;
+ (void)setCancelButtonLabelColor:(id)arg1;
+ (void)setCancelButtonLabel:(id)arg1;
+ (void)setTitleColor:(id)arg1;
+ (void)setTitle:(id)arg1;
+ (void)setNavigationBarBackgroundColor:(id)arg1;
+ (void)setNavigationBarBackgroundImage:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) unsigned long long supportedInterfaceOrientation; // @synthesize supportedInterfaceOrientation=_supportedInterfaceOrientation;
@property(nonatomic) double rightButtonRightMargin; // @synthesize rightButtonRightMargin=_rightButtonRightMargin;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) double cancelButtonLeftMargin; // @synthesize cancelButtonLeftMargin=_cancelButtonLeftMargin;
@property(retain, nonatomic) UIImage *cancelButtonImage; // @synthesize cancelButtonImage=_cancelButtonImage;
@property(retain, nonatomic) UIColor *cancelButtonLabelColor; // @synthesize cancelButtonLabelColor=_cancelButtonLabelColor;
@property(copy, nonatomic) NSString *cancelButtonLabel; // @synthesize cancelButtonLabel=_cancelButtonLabel;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *navigationbarBackgroundColor; // @synthesize navigationbarBackgroundColor=_navigationbarBackgroundColor;
@property(retain, nonatomic) UIImage *navigationbarBackgroundImage; // @synthesize navigationbarBackgroundImage=_navigationbarBackgroundImage;
- (void).cxx_destruct;
- (id)init;

@end
