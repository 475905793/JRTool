//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, FTBaseDrawView, FTNoWonderfulAndTendView, FTStockInfoDataManager, FTUnpayWonderfulView, FTWonderfulHandleView, JRJStockZsCoverView, NSArray, NSString, UIButton, UIFont, UIImageView, UILabel;

@interface FTTrendBaseContainerView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isLandscape;
    _Bool _isCancalLongGesture;
    double _chart_top_gap;
    double _chart_left_gap;
    double _chart_bottom_gap;
    double _chart_right_gap;
    double _chart_upper_height;
    double _chart_lower_height;
    double _chart_width;
    double _chart_right;
    double _chart_upper_bottom;
    double _chart_lower_top;
    double _chart_lower_bottom;
    double _chart_upper_lower_gap;
    double _pan_first_xAxis;
    CAShapeLayer *_upper_container;
    CAShapeLayer *_lower_container;
    FTBaseDrawView *_lower_drawView;
    FTBaseDrawView *_upper_drawView;
    FTStockInfoDataManager *_dataSource;
    CAShapeLayer *_sl_index_horizon;
    CAShapeLayer *_sl_index_vertical;
    CAShapeLayer *_sl_index_circle;
    UILabel *_lbl_index_left;
    UILabel *_lbl_index_right;
    UILabel *_lbl_index_bottom;
    FTWonderfulHandleView *_caozuoView;
    FTUnpayWonderfulView *_unPayView;
    FTNoWonderfulAndTendView *_noWonderAndTendView;
    JRJStockZsCoverView *_coverView;
    UIImageView *_largeVolumeLockView;
    UIButton *_redBlueKlineCoverView;
    NSArray *_arr_labels_bottom_left;
    NSArray *_arr_labels_bottom_right;
    UIFont *_leftFontSize;
    NSArray *_arr_labels_top_left;
    NSArray *_arr_labels_top_right;
    struct UIEdgeInsets _insets;
}

@property(retain, nonatomic) NSArray *arr_labels_top_right; // @synthesize arr_labels_top_right=_arr_labels_top_right;
@property(retain, nonatomic) NSArray *arr_labels_top_left; // @synthesize arr_labels_top_left=_arr_labels_top_left;
@property(retain, nonatomic) UIFont *leftFontSize; // @synthesize leftFontSize=_leftFontSize;
@property(nonatomic) _Bool isCancalLongGesture; // @synthesize isCancalLongGesture=_isCancalLongGesture;
@property(retain, nonatomic) NSArray *arr_labels_bottom_right; // @synthesize arr_labels_bottom_right=_arr_labels_bottom_right;
@property(retain, nonatomic) NSArray *arr_labels_bottom_left; // @synthesize arr_labels_bottom_left=_arr_labels_bottom_left;
@property(retain, nonatomic) UIButton *redBlueKlineCoverView; // @synthesize redBlueKlineCoverView=_redBlueKlineCoverView;
@property(retain, nonatomic) UIImageView *largeVolumeLockView; // @synthesize largeVolumeLockView=_largeVolumeLockView;
@property(retain, nonatomic) JRJStockZsCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) FTNoWonderfulAndTendView *noWonderAndTendView; // @synthesize noWonderAndTendView=_noWonderAndTendView;
@property(retain, nonatomic) FTUnpayWonderfulView *unPayView; // @synthesize unPayView=_unPayView;
@property(retain, nonatomic) FTWonderfulHandleView *caozuoView; // @synthesize caozuoView=_caozuoView;
@property(retain, nonatomic) UILabel *lbl_index_bottom; // @synthesize lbl_index_bottom=_lbl_index_bottom;
@property(retain, nonatomic) UILabel *lbl_index_right; // @synthesize lbl_index_right=_lbl_index_right;
@property(retain, nonatomic) UILabel *lbl_index_left; // @synthesize lbl_index_left=_lbl_index_left;
@property(retain, nonatomic) CAShapeLayer *sl_index_circle; // @synthesize sl_index_circle=_sl_index_circle;
@property(retain, nonatomic) CAShapeLayer *sl_index_vertical; // @synthesize sl_index_vertical=_sl_index_vertical;
@property(retain, nonatomic) CAShapeLayer *sl_index_horizon; // @synthesize sl_index_horizon=_sl_index_horizon;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) FTStockInfoDataManager *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) FTBaseDrawView *upper_drawView; // @synthesize upper_drawView=_upper_drawView;
@property(retain, nonatomic) FTBaseDrawView *lower_drawView; // @synthesize lower_drawView=_lower_drawView;
@property(retain, nonatomic) CAShapeLayer *lower_container; // @synthesize lower_container=_lower_container;
@property(retain, nonatomic) CAShapeLayer *upper_container; // @synthesize upper_container=_upper_container;
@property(nonatomic) double pan_first_xAxis; // @synthesize pan_first_xAxis=_pan_first_xAxis;
@property(nonatomic) double chart_upper_lower_gap; // @synthesize chart_upper_lower_gap=_chart_upper_lower_gap;
@property(nonatomic) double chart_lower_bottom; // @synthesize chart_lower_bottom=_chart_lower_bottom;
@property(nonatomic) double chart_lower_top; // @synthesize chart_lower_top=_chart_lower_top;
@property(nonatomic) double chart_upper_bottom; // @synthesize chart_upper_bottom=_chart_upper_bottom;
@property(nonatomic) double chart_right; // @synthesize chart_right=_chart_right;
@property(nonatomic) double chart_width; // @synthesize chart_width=_chart_width;
@property(nonatomic) double chart_lower_height; // @synthesize chart_lower_height=_chart_lower_height;
@property(nonatomic) double chart_upper_height; // @synthesize chart_upper_height=_chart_upper_height;
@property(nonatomic) double chart_right_gap; // @synthesize chart_right_gap=_chart_right_gap;
@property(nonatomic) double chart_bottom_gap; // @synthesize chart_bottom_gap=_chart_bottom_gap;
@property(nonatomic) double chart_left_gap; // @synthesize chart_left_gap=_chart_left_gap;
@property(nonatomic) double chart_top_gap; // @synthesize chart_top_gap=_chart_top_gap;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;
- (void)buildDirectionChangeCoverView;
- (void)buildZPointCoverView;
- (void)resetLeftBottomLabel;
- (void)resetLeftTopTagLabel;
- (void)updateTagLabel:(id)arg1;
- (double)chartCurrentMinValue;
- (double)chartCurrentMaxValue;
- (double)chartSelectedItemValue:(long long)arg1;
- (void)resetGestureRecognizer;
- (_Bool)shouldAddPanPinchGesture;
- (void)updateDrawViewWithScale:(double)arg1 point1:(struct CGPoint)arg2 point2:(struct CGPoint)arg3;
- (void)resetDrawViewPinchParas;
- (void)resetDrawViewPanParas;
- (void)updateDrawViewWithScrollVelocity:(double)arg1 pan:(id)arg2;
- (void)zoomToBiger:(_Bool)arg1;
- (void)transitionToRight:(_Bool)arg1;
- (void)updateDrawViewWithTransition:(double)arg1 pan:(id)arg2;
- (_Bool)showIndexBottomLabel;
- (_Bool)showIndexRightLabel;
- (_Bool)showIndexLeftLabel;
- (void)addBaseDrawViewBottomTagLabelsIsLeft:(_Bool)arg1 top:(id)arg2 bottom:(id)arg3;
- (void)addBaseDrawViewTopTagLabelsIsLeft:(_Bool)arg1 max:(double)arg2 min:(double)arg3;
- (_Bool)centerHorizonIsGreen;
- (void)addTimelineGroupBordersVerticalLineCount:(long long)arg1 horizonLines:(long long)arg2;
- (void)hideIndexLines;
- (void)showIndexAtPoint:(struct CGPoint)arg1;
- (void)resetDrawViewContentOffset;
- (void)reloadLowerViewData;
- (void)reloadUpperViewData;
- (void)reloadData;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panGestureAction:(id)arg1;
- (void)pinchGestureAction:(id)arg1;
- (void)handleLongPressGestureEnded;
- (void)delayHidden;
- (void)longPressGesture:(id)arg1;
- (void)singleTapGesture:(id)arg1;
- (void)goNextMainTech;
- (void)goBuy:(id)arg1;
- (_Bool)chartGesturesIsEnabled;
- (void)willRefreshDrawViews:(id)arg1;
- (void)didFinishInitBaseProperties:(id)arg1;
- (void)didFinishInitDrawViews:(id)arg1;
- (void)willInitBaseProperties:(id)arg1;
- (Class)upperDrawViewClass;
- (Class)lowerDrawViewClass;
- (void)setupChartGestures;
- (void)updateChartBorders;
- (void)updateChartFramesWithGap:(double)arg1 bottomHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 insets:(struct UIEdgeInsets)arg2 upperLowerGap:(double)arg3 bottomHeight:(double)arg4 isLandscape:(_Bool)arg5;
- (id)initWithFrame:(struct CGRect)arg1 insets:(struct UIEdgeInsets)arg2 isLandscape:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

