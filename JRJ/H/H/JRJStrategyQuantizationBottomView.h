//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface JRJStrategyQuantizationBottomView : UIView
{
    CAShapeLayer *_roundLayer;
}

@property(retain, nonatomic) CAShapeLayer *roundLayer; // @synthesize roundLayer=_roundLayer;
- (void).cxx_destruct;
- (struct CGPath *)roundCornerPath;
- (void)layoutSubviews;
- (void)commonInit;
- (void)awakeFromNib;

@end

