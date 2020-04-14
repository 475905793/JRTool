//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIImageView;

@interface JRJOrientationAdditionHeaderView : UITableViewHeaderFooterView
{
    UIImageView *ratioImageView;
    UIImageView *progressImageView;
    int _progressFlag;
    int _ratioFlag;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _ratioBlock;
}

@property(nonatomic) int ratioFlag; // @synthesize ratioFlag=_ratioFlag;
@property(copy, nonatomic) CDUnknownBlockType ratioBlock; // @synthesize ratioBlock=_ratioBlock;
@property(nonatomic) int progressFlag; // @synthesize progressFlag=_progressFlag;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)ratioAction;
- (void)progressAction;
- (void)buildUI:(id)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 name:(id)arg2;

@end

