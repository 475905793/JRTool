//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface JRJRESTopLookUpDownView : UIView
{
    long long forecastUp;
    long long selectThumbStyle;
    long long forecastDown;
    CDUnknownBlockType _changeThumbBlock;
    CDUnknownBlockType _needLoginBlock;
    UIView *_view;
    UIButton *_lookup_btn;
    UILabel *_lookup_lbl;
    NSLayoutConstraint *_lookup_width;
    UILabel *_lookDown_lbl;
    UIButton *_lookdown_btn;
    UIImageView *_middleImgView;
}

@property(nonatomic) __weak UIImageView *middleImgView; // @synthesize middleImgView=_middleImgView;
@property(nonatomic) __weak UIButton *lookdown_btn; // @synthesize lookdown_btn=_lookdown_btn;
@property(nonatomic) __weak UILabel *lookDown_lbl; // @synthesize lookDown_lbl=_lookDown_lbl;
@property(nonatomic) __weak NSLayoutConstraint *lookup_width; // @synthesize lookup_width=_lookup_width;
@property(nonatomic) __weak UILabel *lookup_lbl; // @synthesize lookup_lbl=_lookup_lbl;
@property(nonatomic) __weak UIButton *lookup_btn; // @synthesize lookup_btn=_lookup_btn;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(copy, nonatomic) CDUnknownBlockType needLoginBlock; // @synthesize needLoginBlock=_needLoginBlock;
@property(copy, nonatomic) CDUnknownBlockType changeThumbBlock; // @synthesize changeThumbBlock=_changeThumbBlock;
- (void).cxx_destruct;
- (void)starClickAnimationFromCenter:(struct CGPoint)arg1;
- (void)lookDownClick:(id)arg1;
- (void)lookUpClick:(id)arg1;
- (void)p_layoutLookProgressWithUpNum:(long long)arg1 downNum:(long long)arg2;
- (void)p_setUserForecastWithStyle:(long long)arg1;
- (void)p_setForecastUpWithUP:(long long)arg1 downNum:(long long)arg2;
- (void)p_layOutUIWithUpNum:(long long)arg1 downNum:(long long)arg2 userForecast:(long long)arg3;
- (void)lookupOrDownFinishedWithType:(long long)arg1;
- (void)updateHeaderWithRequestDic:(id)arg1;
- (void)creatView;
- (id)initWithCoder:(id)arg1;

@end

