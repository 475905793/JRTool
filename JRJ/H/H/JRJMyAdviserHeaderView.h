//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HeaderImageView, JRJImageZoomView, NSDictionary, NSString, UIButton, UIImageView, UILabel;

@interface JRJMyAdviserHeaderView : UIView
{
    NSString *_userName;
    UILabel *_username;
    NSString *_avatarURLString;
    CDUnknownBlockType _attentionBlock;
    CDUnknownBlockType _signBlock;
    CDUnknownBlockType _fansBlock;
    CDUnknownBlockType _signTappedBlock;
    UILabel *_title;
    UILabel *_followNumber;
    UILabel *_signNumber;
    UILabel *_fansNumber;
    UILabel *_priseNumber;
    UIButton *_signBtn;
    UIImageView *_add_v_image;
    HeaderImageView *_userHead;
    JRJImageZoomView *_zoomView;
    NSDictionary *_source;
}

@property(retain, nonatomic) NSDictionary *source; // @synthesize source=_source;
@property(retain, nonatomic) JRJImageZoomView *zoomView; // @synthesize zoomView=_zoomView;
@property(nonatomic) __weak HeaderImageView *userHead; // @synthesize userHead=_userHead;
@property(nonatomic) __weak UIImageView *add_v_image; // @synthesize add_v_image=_add_v_image;
@property(nonatomic) __weak UIButton *signBtn; // @synthesize signBtn=_signBtn;
@property(nonatomic) __weak UILabel *priseNumber; // @synthesize priseNumber=_priseNumber;
@property(nonatomic) __weak UILabel *fansNumber; // @synthesize fansNumber=_fansNumber;
@property(nonatomic) __weak UILabel *signNumber; // @synthesize signNumber=_signNumber;
@property(nonatomic) __weak UILabel *followNumber; // @synthesize followNumber=_followNumber;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType signTappedBlock; // @synthesize signTappedBlock=_signTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType fansBlock; // @synthesize fansBlock=_fansBlock;
@property(copy, nonatomic) CDUnknownBlockType signBlock; // @synthesize signBlock=_signBlock;
@property(copy, nonatomic) CDUnknownBlockType attentionBlock; // @synthesize attentionBlock=_attentionBlock;
@property(retain, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(nonatomic) __weak UILabel *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (void)didClickedUserHead:(id)arg1;
- (void)fansButtonClick:(id)arg1;
- (void)signButtonClick:(id)arg1;
- (void)attentionButtonClick:(id)arg1;
- (void)updateSource:(id)arg1;
- (void)awakeFromNib;
- (void)changeSignBtnStyle:(_Bool)arg1;
- (void)clickSignBtn:(id)arg1;

@end
