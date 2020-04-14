//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface TradeEmptyView : UIView
{
    UIImageView *_imageView;
    NSLayoutConstraint *_imageViewHeight;
    UIButton *_rightBtn;
    UILabel *_title;
    UILabel *_subhead;
    UIImageView *_subheadMsgImageView;
    CDUnknownBlockType _rightBtnClickBlock;
}

+ (id)viewFromNIB;
@property(copy, nonatomic) CDUnknownBlockType rightBtnClickBlock; // @synthesize rightBtnClickBlock=_rightBtnClickBlock;
@property(nonatomic) __weak UIImageView *subheadMsgImageView; // @synthesize subheadMsgImageView=_subheadMsgImageView;
@property(nonatomic) __weak UILabel *subhead; // @synthesize subhead=_subhead;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(nonatomic) __weak NSLayoutConstraint *imageViewHeight; // @synthesize imageViewHeight=_imageViewHeight;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)rightBtnClick:(id)arg1;
- (void)awakeFromNib;

@end

