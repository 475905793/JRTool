//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSDictionary, UIImageView, UILabel;

@interface JRJTimeSignalItemCell : JRJTableViewCell
{
    UILabel *_timeLabel;
    UILabel *_stockNameLabel;
    UILabel *_descriptionLabel;
    UILabel *_raiseLabel;
    NSDictionary *_myDic;
    UIImageView *_signalImageView;
}

+ (double)cellHeight;
@property(nonatomic) __weak UIImageView *signalImageView; // @synthesize signalImageView=_signalImageView;
@property(nonatomic) __weak NSDictionary *myDic; // @synthesize myDic=_myDic;
@property(nonatomic) __weak UILabel *raiseLabel; // @synthesize raiseLabel=_raiseLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *stockNameLabel; // @synthesize stockNameLabel=_stockNameLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configCellWithDic:(id)arg1;
- (void)configCellWithLeftModel:(id)arg1 rightDic:(id)arg2;
- (void)awakeFromNib;

@end

