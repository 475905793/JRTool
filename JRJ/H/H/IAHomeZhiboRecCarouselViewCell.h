//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IAHomeZhiboRecView, IALiveModel;

@interface IAHomeZhiboRecCarouselViewCell : UICollectionViewCell
{
    IALiveModel *_model1;
    IALiveModel *_model2;
    CDUnknownBlockType _tapContentBlock;
    CDUnknownBlockType _tapAdvierBlock;
    IAHomeZhiboRecView *_recView1;
    IAHomeZhiboRecView *_recView2;
}

@property(retain, nonatomic) IAHomeZhiboRecView *recView2; // @synthesize recView2=_recView2;
@property(retain, nonatomic) IAHomeZhiboRecView *recView1; // @synthesize recView1=_recView1;
@property(copy, nonatomic) CDUnknownBlockType tapAdvierBlock; // @synthesize tapAdvierBlock=_tapAdvierBlock;
@property(copy, nonatomic) CDUnknownBlockType tapContentBlock; // @synthesize tapContentBlock=_tapContentBlock;
@property(retain, nonatomic) IALiveModel *model2; // @synthesize model2=_model2;
@property(retain, nonatomic) IALiveModel *model1; // @synthesize model1=_model1;
- (void).cxx_destruct;
- (void)setupRecView:(id)arg1 WithModel:(id)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

