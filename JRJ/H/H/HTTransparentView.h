//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol HTTransparentViewDelegate;

@interface HTTransparentView : UIView
{
    id <HTTransparentViewDelegate> _delegate;
    CDUnknownBlockType _touchBlock;
}

+ (id)transparentView;
@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(nonatomic) __weak id <HTTransparentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)initlization;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

