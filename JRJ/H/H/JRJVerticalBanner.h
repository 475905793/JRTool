//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;
@protocol JRJVerticalBannerDataSource, JRJVerticalBannerDelegate;

@interface JRJVerticalBanner : UIView
{
    id <JRJVerticalBannerDataSource> _datasource;
    id <JRJVerticalBannerDelegate> _delegate;
    double _duration;
    UIView *_currentView;
    UIView *_incomingView;
    NSTimer *_timer;
    long long _numberOfItems;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *incomingView; // @synthesize incomingView=_incomingView;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <JRJVerticalBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <JRJVerticalBannerDataSource> datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect outgoingFrame;
@property(readonly, nonatomic) struct CGRect incomingFrame;
@property(readonly, nonatomic) struct CGRect currentFrame;
- (void)resetView:(id)arg1;
- (void)reloadView:(id)arg1 withItemAtIndex:(long long)arg2;
- (void)setupTimer;
- (void)manualTick;
- (void)reloadData;
- (void)handleTap:(id)arg1;
- (void)timeTick:(id)arg1;
- (void)didMoveToWindow;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

