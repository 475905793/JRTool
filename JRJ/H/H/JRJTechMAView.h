//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface JRJTechMAView : UIView
{
    UIView *_backTechView;
    NSLayoutConstraint *_leftLayout;
    UIImageView *_jiantouImageView;
    UILabel *_techNameLabel;
    CDUnknownBlockType _chooseTechBlock;
    NSLayoutConstraint *_centerYConstant;
    UILabel *_ma5Label;
    UILabel *_ma10Label;
    UILabel *_ma20Label;
    UILabel *_ma30Label;
    UILabel *_ma60Label;
}

@property(nonatomic) __weak UILabel *ma60Label; // @synthesize ma60Label=_ma60Label;
@property(nonatomic) __weak UILabel *ma30Label; // @synthesize ma30Label=_ma30Label;
@property(nonatomic) __weak UILabel *ma20Label; // @synthesize ma20Label=_ma20Label;
@property(nonatomic) __weak UILabel *ma10Label; // @synthesize ma10Label=_ma10Label;
@property(nonatomic) __weak UILabel *ma5Label; // @synthesize ma5Label=_ma5Label;
@property(nonatomic) __weak NSLayoutConstraint *centerYConstant; // @synthesize centerYConstant=_centerYConstant;
@property(copy, nonatomic) CDUnknownBlockType chooseTechBlock; // @synthesize chooseTechBlock=_chooseTechBlock;
@property(nonatomic) __weak UILabel *techNameLabel; // @synthesize techNameLabel=_techNameLabel;
@property(nonatomic) __weak UIImageView *jiantouImageView; // @synthesize jiantouImageView=_jiantouImageView;
@property(nonatomic) __weak NSLayoutConstraint *leftLayout; // @synthesize leftLayout=_leftLayout;
@property(nonatomic) __weak UIView *backTechView; // @synthesize backTechView=_backTechView;
- (void).cxx_destruct;
- (void)updateMaDataWithModel:(id)arg1;
- (void)awakeFromNib;

@end
