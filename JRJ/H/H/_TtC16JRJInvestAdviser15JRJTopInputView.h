//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseView.h"

@class UIButton, UITextField, UIView;

@interface _TtC16JRJInvestAdviser15JRJTopInputView : _TtC16JRJInvestAdviser10ZKBaseView
{
    // Error parsing type: , name: topView
    // Error parsing type: , name: textFieldView
    // Error parsing type: , name: cancelBtn
    // Error parsing type: , name: okBtn
    // Error parsing type: , name: okFunc
    // Error parsing type: , name: cancelFunc
}

+ (void)showTopViewWithModel:(id)arg1 okFunc:(CDUnknownBlockType)arg2 cancelFunc:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateViewForModelWithModel:(id)arg1;
- (void)textChangeHandle;
- (void)okBtnHandle:(id)arg1;
- (void)cancelBtnHandle:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, copy) CDUnknownBlockType cancelFunc;
@property(nonatomic, copy) CDUnknownBlockType okFunc;
@property(nonatomic) __weak UIButton *okBtn; // @synthesize okBtn;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn;
@property(nonatomic) __weak UITextField *textFieldView; // @synthesize textFieldView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView;

@end
