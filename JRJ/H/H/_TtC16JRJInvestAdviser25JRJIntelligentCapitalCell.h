//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseCell.h"

@class JRJCapitalFlowBarChartView, JRJCapitalFlowPieChartView, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface _TtC16JRJInvestAdviser25JRJIntelligentCapitalCell : _TtC16JRJInvestAdviser10ZKBaseCell
{
    // Error parsing type: , name: no_label
    // Error parsing type: , name: no_image
    // Error parsing type: , name: heightConstraint
    // Error parsing type: , name: pieChartView
    // Error parsing type: , name: barChartView
    // Error parsing type: , name: capitalView
    // Error parsing type: , name: empt_Image
    // Error parsing type: , name: empt_Label
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateViewForModelWithModel:(id)arg1;
- (void)setSubViewStyle;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *empt_Label; // @synthesize empt_Label;
@property(nonatomic) __weak UIImageView *empt_Image; // @synthesize empt_Image;
@property(nonatomic) __weak UIView *capitalView; // @synthesize capitalView;
@property(nonatomic) __weak JRJCapitalFlowBarChartView *barChartView; // @synthesize barChartView;
@property(nonatomic) __weak JRJCapitalFlowPieChartView *pieChartView; // @synthesize pieChartView;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint;
@property(nonatomic) __weak UIImageView *no_image; // @synthesize no_image;
@property(nonatomic) __weak UILabel *no_label; // @synthesize no_label;

@end
