//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSString, UILabel;

@interface JRJPortfolioDescriptionTableViewCell : JRJTableViewCell
{
    UILabel *_descriptionLabel;
    NSString *_descriptionString;
    double _cellHeight;
}

+ (double)cellHeightWithText:(id)arg1 width:(double)arg2;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

