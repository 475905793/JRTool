//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTimelineCell.h"

@class UIButton, UIImageView;

@interface JRJTimelineAnswerCell : JRJTimelineCell
{
    UIButton *_askButton;
    UIImageView *_askIcon;
}

+ (double)cellHeightWithModel:(id)arg1;
+ (void)load;
@property(retain, nonatomic) UIImageView *askIcon; // @synthesize askIcon=_askIcon;
@property(retain, nonatomic) UIButton *askButton; // @synthesize askButton=_askButton;
- (void).cxx_destruct;
- (void)askButtonTapped:(id)arg1;
- (void)setModel:(id)arg1;
- (void)makeConstraints;
- (void)setup;

@end

