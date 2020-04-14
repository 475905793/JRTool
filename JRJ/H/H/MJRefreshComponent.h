//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIPanGestureRecognizer, UIScrollView;

@interface MJRefreshComponent : UIView
{
    struct UIEdgeInsets _scrollViewOriginalInset;
    UIScrollView *_scrollView;
    _Bool _automaticallyChangeAlpha;
    CDUnknownBlockType _refreshingBlock;
    id _refreshingTarget;
    SEL _refreshingAction;
    long long _state;
    double _pullingPercent;
    UIPanGestureRecognizer *_pan;
}

@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(nonatomic, getter=isAutomaticallyChangeAlpha) _Bool automaticallyChangeAlpha; // @synthesize automaticallyChangeAlpha=_automaticallyChangeAlpha;
@property(nonatomic) double pullingPercent; // @synthesize pullingPercent=_pullingPercent;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) struct UIEdgeInsets scrollViewOriginalInset; // @synthesize scrollViewOriginalInset=_scrollViewOriginalInset;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) SEL refreshingAction; // @synthesize refreshingAction=_refreshingAction;
@property(nonatomic) __weak id refreshingTarget; // @synthesize refreshingTarget=_refreshingTarget;
@property(copy, nonatomic) CDUnknownBlockType refreshingBlock; // @synthesize refreshingBlock=_refreshingBlock;
- (void).cxx_destruct;
- (void)executeRefreshingCallback;
@property(nonatomic, getter=isAutoChangeAlpha) _Bool autoChangeAlpha;
- (_Bool)isRefreshing;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)setRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservers;
- (void)addObservers;
- (void)drawRect:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)placeSubviews;
- (void)layoutSubviews;
- (void)prepare;
- (id)initWithFrame:(struct CGRect)arg1;

@end

