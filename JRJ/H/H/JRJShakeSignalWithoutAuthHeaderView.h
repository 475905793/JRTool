//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface JRJShakeSignalWithoutAuthHeaderView : UIView
{
    UILabel *_titleLabel;
    UIButton *_authButton;
    CDUnknownBlockType _getAuthBlock;
    CDUnknownBlockType _pushLoginBlock;
}

@property(copy) CDUnknownBlockType pushLoginBlock; // @synthesize pushLoginBlock=_pushLoginBlock;
@property(copy) CDUnknownBlockType getAuthBlock; // @synthesize getAuthBlock=_getAuthBlock;
@property(retain, nonatomic) UIButton *authButton; // @synthesize authButton=_authButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)authAction;
- (void)configData:(id)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

