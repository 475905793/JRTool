//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NoneDataItem, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer;

@interface LoadingStateView : UIView
{
    _Bool _shouldRefresh;
    _Bool _noDataResponseTouch;
    long long _loadingState;
    UIImage *_image;
    NSString *_promptStr;
    NoneDataItem *_item;
    CDUnknownBlockType _touchBlock;
    UILabel *_promptLabel;
    UIImageView *_imageView;
    UIActivityIndicatorView *_activyView;
    UIButton *_actionButton;
    UITapGestureRecognizer *_tap;
    struct CGPoint _offset;
}

@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIActivityIndicatorView *activyView; // @synthesize activyView=_activyView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool noDataResponseTouch; // @synthesize noDataResponseTouch=_noDataResponseTouch;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NoneDataItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool shouldRefresh; // @synthesize shouldRefresh=_shouldRefresh;
@property(copy, nonatomic) NSString *promptStr; // @synthesize promptStr=_promptStr;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
- (void).cxx_destruct;
- (void)configureNoNetworButton;
- (void)refreshNetwork;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)delayLoadingMethod;
- (void)reloadLoadingState:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

