//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JRJUIKit/ModalView.h>

@class NSString, UIButton, UIColor, UILabel, UIView;

@interface _TtC16JRJInvestAdviser18JRJCustomAlertView : ModalView
{
    // Error parsing type: , name: topView
    // Error parsing type: , name: topTitle
    // Error parsing type: , name: topLabel
    // Error parsing type: , name: midView
    // Error parsing type: , name: bottomView
    // Error parsing type: , name: bottomCompletionBtn
    // Error parsing type: , name: completionBtnBgColor
    // Error parsing type: , name: completionBtnTitle
}

- (void).cxx_destruct;
- (void)completionBtnAction;
- (void)customBottomView:(struct CGRect)arg1;
- (void)customTopView:(struct CGRect)arg1;
- (void)setUpView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 level:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) NSString *completionBtnTitle;
@property(nonatomic, retain) UIColor *completionBtnBgColor; // @synthesize completionBtnBgColor;
@property(nonatomic, retain) UIButton *bottomCompletionBtn; // @synthesize bottomCompletionBtn;
@property(nonatomic, retain) UIView *bottomView; // @synthesize bottomView;
@property(nonatomic, retain) UIView *midView; // @synthesize midView;
@property(nonatomic, retain) UILabel *topLabel; // @synthesize topLabel;
@property(nonatomic, copy) NSString *topTitle;
@property(nonatomic, retain) UIView *topView; // @synthesize topView;

@end
