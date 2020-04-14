//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface JRJStockFriendsTouTiaoView : UIView
{
    CDUnknownBlockType _jumpToStockFriendCircleBlock;
    CDUnknownBlockType _closeClickBlock;
    UIImageView *_userIcon;
    UILabel *_titleLbl;
    UILabel *_subTitleLbl;
    UIButton *_closeBtn;
    NSLayoutConstraint *_title_Bottom_H;
    NSLayoutConstraint *_title_right_W;
    NSLayoutConstraint *_title_closeBtn_W;
    long long _viewType;
    NSDictionary *_paramDic;
}

+ (id)viewFromNIB;
@property(retain, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) __weak NSLayoutConstraint *title_closeBtn_W; // @synthesize title_closeBtn_W=_title_closeBtn_W;
@property(nonatomic) __weak NSLayoutConstraint *title_right_W; // @synthesize title_right_W=_title_right_W;
@property(nonatomic) __weak NSLayoutConstraint *title_Bottom_H; // @synthesize title_Bottom_H=_title_Bottom_H;
@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak UILabel *subTitleLbl; // @synthesize subTitleLbl=_subTitleLbl;
@property(nonatomic) __weak UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(nonatomic) __weak UIImageView *userIcon; // @synthesize userIcon=_userIcon;
@property(copy, nonatomic) CDUnknownBlockType closeClickBlock; // @synthesize closeClickBlock=_closeClickBlock;
@property(copy, nonatomic) CDUnknownBlockType jumpToStockFriendCircleBlock; // @synthesize jumpToStockFriendCircleBlock=_jumpToStockFriendCircleBlock;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)closeBtnClick:(id)arg1;
- (void)updateTopicNumWithParamDic:(id)arg1;
- (void)robotUpdateWithStockName:(id)arg1 rate:(double)arg2;
- (void)updateWithRecordNum:(long long)arg1 infoDic:(id)arg2;
- (void)awakeFromNib;

@end
