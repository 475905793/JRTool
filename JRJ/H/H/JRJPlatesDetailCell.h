//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface JRJPlatesDetailCell : JRJTableViewCell
{
    CDUnknownBlockType _didTouchBlock;
    UILabel *_stockNameLabel;
    UIImageView *_marketImageView;
    UILabel *_stockCodeLabel;
    UILabel *_priceLabel;
    UILabel *_trendNameLabel;
    UIImageView *_zPointTypeImageView;
    NSLayoutConstraint *_rightImageViewLayout;
}

@property(nonatomic) __weak NSLayoutConstraint *rightImageViewLayout; // @synthesize rightImageViewLayout=_rightImageViewLayout;
@property(nonatomic) __weak UIImageView *zPointTypeImageView; // @synthesize zPointTypeImageView=_zPointTypeImageView;
@property(nonatomic) __weak UILabel *trendNameLabel; // @synthesize trendNameLabel=_trendNameLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *stockCodeLabel; // @synthesize stockCodeLabel=_stockCodeLabel;
@property(nonatomic) __weak UIImageView *marketImageView; // @synthesize marketImageView=_marketImageView;
@property(nonatomic) __weak UILabel *stockNameLabel; // @synthesize stockNameLabel=_stockNameLabel;
@property(copy, nonatomic) CDUnknownBlockType didTouchBlock; // @synthesize didTouchBlock=_didTouchBlock;
- (void).cxx_destruct;
- (void)updateDataWithDic:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

