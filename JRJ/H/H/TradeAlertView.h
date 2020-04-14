//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JRJUIKit/ModalView.h>

@class NSLayoutConstraint, UIButton, UILabel;

@interface TradeAlertView : ModalView
{
    _Bool _showRightCloseBtn;
    _Bool _showLeftCloseBtn;
    UILabel *_titleLbl;
    UILabel *_contentLbl;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIButton *_leftCloseBtn;
    UIButton *_rightCloseBtn;
    NSLayoutConstraint *_titleLblHeight;
    NSLayoutConstraint *_cancelBtnWidth;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
}

+ (id)viewFromNIB;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) __weak NSLayoutConstraint *cancelBtnWidth; // @synthesize cancelBtnWidth=_cancelBtnWidth;
@property(nonatomic) __weak NSLayoutConstraint *titleLblHeight; // @synthesize titleLblHeight=_titleLblHeight;
@property(nonatomic) __weak UIButton *rightCloseBtn; // @synthesize rightCloseBtn=_rightCloseBtn;
@property(nonatomic) __weak UIButton *leftCloseBtn; // @synthesize leftCloseBtn=_leftCloseBtn;
@property(nonatomic) _Bool showLeftCloseBtn; // @synthesize showLeftCloseBtn=_showLeftCloseBtn;
@property(nonatomic) _Bool showRightCloseBtn; // @synthesize showRightCloseBtn=_showRightCloseBtn;
@property(nonatomic) __weak UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak UILabel *contentLbl; // @synthesize contentLbl=_contentLbl;
@property(nonatomic) __weak UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
- (void).cxx_destruct;
- (void)closeBtnClick:(id)arg1;
- (void)confirmClick:(id)arg1;
- (void)cancelClick:(id)arg1;
- (void)updateWithtitle:(id)arg1 content:(id)arg2 cancelTitle:(id)arg3 confirmTitle:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 confirmBlock:(CDUnknownBlockType)arg6;
- (void)awakeFromNib;

@end

