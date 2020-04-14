//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSDictionary, UIImageView, UILabel, UIView;

@interface JRJStrategyHomeZhenGuCell : JRJTableViewCell
{
    CDUnknownBlockType _buttonPressedBlock;
    NSDictionary *_data;
    UILabel *_label1;
    UILabel *_label2;
    UILabel *_label3;
    UIView *_bannerBackgroundView;
    UIImageView *_bannerView;
    double _fontSize;
}

+ (double)cellHeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) __weak UIImageView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak UIView *bannerBackgroundView; // @synthesize bannerBackgroundView=_bannerBackgroundView;
@property(nonatomic) __weak UILabel *label3; // @synthesize label3=_label3;
@property(nonatomic) __weak UILabel *label2; // @synthesize label2=_label2;
@property(nonatomic) __weak UILabel *label1; // @synthesize label1=_label1;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType buttonPressedBlock; // @synthesize buttonPressedBlock=_buttonPressedBlock;
- (void).cxx_destruct;
- (id)p_formatNumber:(id)arg1 prefix:(id)arg2 postfix:(id)arg3 showUnit:(_Bool)arg4;
- (void)buttonPressed;
- (void)awakeFromNib;

@end
