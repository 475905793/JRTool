//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSDictionary, UIImageView, UILabel;

@interface JRJDiscoverHourSignalCell : JRJTableViewCell
{
    UILabel *_timeLabel;
    UILabel *_descriptionLabel;
    UILabel *_stockNameLabel;
    UILabel *_ratioLabel;
    NSDictionary *_myDic;
    UIImageView *_photoView;
}

+ (double)cellHeight;
@property(nonatomic) __weak UIImageView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) NSDictionary *myDic; // @synthesize myDic=_myDic;
@property(nonatomic) __weak UILabel *ratioLabel; // @synthesize ratioLabel=_ratioLabel;
@property(nonatomic) __weak UILabel *stockNameLabel; // @synthesize stockNameLabel=_stockNameLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)signalTypeImageName:(id)arg1;
- (void)configCellWithDic:(id)arg1;
- (void)pushStockInfo;
- (void)awakeFromNib;

@end

