//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class UILabel, UIView;

@interface JRJCapitalStructureCell : JRJTableViewCell
{
    UIView *_grayView;
    UILabel *_titleLabel;
    UILabel *_numberLabel;
    UILabel *_rateLabel;
}

@property(nonatomic) __weak UILabel *rateLabel; // @synthesize rateLabel=_rateLabel;
@property(nonatomic) __weak UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *grayView; // @synthesize grayView=_grayView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithDic:(id)arg1 withIndex:(int)arg2;
- (void)updateInit;
- (void)awakeFromNib;

@end

