//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJMedianChartView, UILabel;

@interface JRJMedianDiagnoseCell : JRJTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    JRJMedianChartView *_klineView;
}

@property(nonatomic) __weak JRJMedianChartView *klineView; // @synthesize klineView=_klineView;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithDic:(id)arg1;
- (void)awakeFromNib;

@end

