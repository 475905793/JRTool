//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface JRJDiscoverSignalColumnView : UIView
{
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIView *_redView;
    UIView *_greenView;
}

@property(retain, nonatomic) UIView *greenView; // @synthesize greenView=_greenView;
@property(retain, nonatomic) UIView *redView; // @synthesize redView=_redView;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void).cxx_destruct;
- (void)drawColumnWithRedNum:(long long)arg1 greenNum:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

