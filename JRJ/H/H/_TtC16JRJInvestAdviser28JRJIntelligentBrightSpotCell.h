//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseCell.h"

@class NSString, UIButton, UIImageView, UILabel, _TtC16JRJInvestAdviser24JRJStockIntelligentModel;

@interface _TtC16JRJInvestAdviser28JRJIntelligentBrightSpotCell : _TtC16JRJInvestAdviser10ZKBaseCell
{
    // Error parsing type: , name: investmentHighlightLabel
    // Error parsing type: , name: loadMoreButton
    // Error parsing type: , name: empty_Image
    // Error parsing type: , name: empty_Label
    // Error parsing type: , name: btnClickFunc
    // Error parsing type: , name: model
    // Error parsing type: , name: investmentHighlight
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)clickHandle:(id)arg1;
- (void)updateViewForModel;
- (void)awakeFromNib;
@property(nonatomic, copy) NSString *investmentHighlight;
@property(nonatomic, retain) _TtC16JRJInvestAdviser24JRJStockIntelligentModel *model; // @synthesize model;
@property(nonatomic, copy) CDUnknownBlockType btnClickFunc;
@property(nonatomic) __weak UILabel *empty_Label; // @synthesize empty_Label;
@property(nonatomic) __weak UIImageView *empty_Image; // @synthesize empty_Image;
@property(nonatomic) __weak UIButton *loadMoreButton; // @synthesize loadMoreButton;
@property(nonatomic) __weak UILabel *investmentHighlightLabel; // @synthesize investmentHighlightLabel;

@end
