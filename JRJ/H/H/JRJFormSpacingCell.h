//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJFormBaseCell.h"

@class UIView;

@interface JRJFormSpacingCell : JRJFormBaseCell
{
    double _spacing;
    UIView *_emptyView;
}

+ (id)cellWithSpacing:(double)arg1;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (void).cxx_destruct;
- (void)configure;

@end

