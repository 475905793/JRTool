//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class UILabel;

@interface JRJAnswerDetailSuccessCell1 : JRJTableViewCell
{
    UILabel *_timeLabel1;
    UILabel *_timeLabel2;
    UILabel *_askLabel;
}

+ (double)cellHeight;
@property(nonatomic) __weak UILabel *askLabel; // @synthesize askLabel=_askLabel;
@property(nonatomic) __weak UILabel *timeLabel2; // @synthesize timeLabel2=_timeLabel2;
@property(nonatomic) __weak UILabel *timeLabel1; // @synthesize timeLabel1=_timeLabel1;
- (void).cxx_destruct;
- (void)askLabelTapped:(id)arg1;
- (void)updateCellWithSource:(id)arg1;
- (void)zhenguButtonTapped:(id)arg1;
- (void)awakeFromNib;

@end

