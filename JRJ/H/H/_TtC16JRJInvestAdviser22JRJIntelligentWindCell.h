//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseCell.h"

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIView, _TtC16JRJInvestAdviser16JRJHistogramView;

@interface _TtC16JRJInvestAdviser22JRJIntelligentWindCell : _TtC16JRJInvestAdviser10ZKBaseCell
{
    // Error parsing type: , name: histogramView
    // Error parsing type: , name: descLabel
    // Error parsing type: , name: windVOList
    // Error parsing type: , name: no_image
    // Error parsing type: , name: no_label
    // Error parsing type: , name: heightC
    // Error parsing type: , name: $__lazy_storage_$_histogram
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateViewForModel;
- (void)awakeFromNib;
@property(nonatomic, retain) _TtC16JRJInvestAdviser16JRJHistogramView *histogram;
@property(nonatomic) __weak NSLayoutConstraint *heightC; // @synthesize heightC;
@property(nonatomic) __weak UILabel *no_label; // @synthesize no_label;
@property(nonatomic) __weak UIImageView *no_image; // @synthesize no_image;
@property(nonatomic, copy) NSArray *windVOList;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel;
@property(nonatomic) __weak UIView *histogramView; // @synthesize histogramView;

@end

