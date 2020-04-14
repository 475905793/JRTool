//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel;

@interface JRJOrdinaryUserHeaderView : UIView
{
    UILabel *_nameLabel;
    NSString *_userName;
    NSLayoutConstraint *_headerHeight;
    NSString *_avatarURLString;
    CDUnknownBlockType _loginButtonTapped;
    CDUnknownBlockType _registerButtonTapped;
    CDUnknownBlockType _headTapBlock;
    CDUnknownBlockType _userInfoBlock;
    UIButton *_registerBtn;
    UIButton *_loginBtn;
    UIView *_verticalLine;
    UIImageView *_userHeadImage;
}

@property(nonatomic) __weak UIImageView *userHeadImage; // @synthesize userHeadImage=_userHeadImage;
@property(nonatomic) __weak UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(nonatomic) __weak UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(nonatomic) __weak UIButton *registerBtn; // @synthesize registerBtn=_registerBtn;
@property(copy, nonatomic) CDUnknownBlockType userInfoBlock; // @synthesize userInfoBlock=_userInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType headTapBlock; // @synthesize headTapBlock=_headTapBlock;
@property(copy, nonatomic) CDUnknownBlockType registerButtonTapped; // @synthesize registerButtonTapped=_registerButtonTapped;
@property(copy, nonatomic) CDUnknownBlockType loginButtonTapped; // @synthesize loginButtonTapped=_loginButtonTapped;
@property(retain, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(nonatomic) __weak NSLayoutConstraint *headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)didClickedUserInfo:(id)arg1;
- (void)didClickedRegisterButton:(id)arg1;
- (void)didClickedSignButton:(id)arg1;
- (void)headTap;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end

