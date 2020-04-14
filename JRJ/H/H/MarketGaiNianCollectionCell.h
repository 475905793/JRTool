//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface MarketGaiNianCollectionCell : UICollectionViewCell
{
    UILabel *_nameLabel;
    UILabel *_mainLabel;
    UILabel *_stockNameLabel;
    UILabel *_detailLabel;
    UIImageView *_imageBack;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *imageBack; // @synthesize imageBack=_imageBack;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *stockNameLabel; // @synthesize stockNameLabel=_stockNameLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)configureLabel:(id)arg1 value:(id)arg2 colorized:(_Bool)arg3 percentile:(_Bool)arg4 signed:(_Bool)arg5;
- (void)configureDataWithModel:(id)arg1;
- (void)layoutPageSubviews;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
