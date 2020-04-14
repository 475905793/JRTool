//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JFTagListDelegate-Protocol.h"

@class AdviserModel, JFTagListView, NSArray, NSString, UIButton, UIImageView, UILabel;
@protocol JRJAdviserProfileViewDelegate;

@interface JRJAdviserProfileView : UIView <JFTagListDelegate>
{
    UIImageView *_backBtn;
    struct CGPoint _oldPos;
    double _oldHeadWidth;
    double _oldNamePosX;
    double _oldNamePosY;
    int _isFocus;
    UIView *_backgroudView;
    UIImageView *_headerIV;
    UILabel *_nameL;
    AdviserModel *_adviserM;
    id <JRJAdviserProfileViewDelegate> _delegate;
    UIImageView *_backgroundView;
    NSArray *_tags;
    UILabel *_introLabel;
    UIView *_topV;
    UILabel *_brokerL;
    UIButton *_fansBtn;
    UIButton *_followBtn;
    UIView *_centerV;
    UILabel *_tagLabel;
    UIImageView *_verIV;
    JFTagListView *_tagListV;
    UIButton *_evaluateBtn;
    UIImageView *_topHeaderIV;
    UILabel *_topNameL;
}

@property(retain, nonatomic) UILabel *topNameL; // @synthesize topNameL=_topNameL;
@property(retain, nonatomic) UIImageView *topHeaderIV; // @synthesize topHeaderIV=_topHeaderIV;
@property(nonatomic) __weak UIButton *evaluateBtn; // @synthesize evaluateBtn=_evaluateBtn;
@property(retain, nonatomic) JFTagListView *tagListV; // @synthesize tagListV=_tagListV;
@property(nonatomic) __weak UIImageView *verIV; // @synthesize verIV=_verIV;
@property(nonatomic) __weak UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(nonatomic) __weak UIView *centerV; // @synthesize centerV=_centerV;
@property(nonatomic) __weak UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(nonatomic) __weak UIButton *fansBtn; // @synthesize fansBtn=_fansBtn;
@property(nonatomic) __weak UILabel *brokerL; // @synthesize brokerL=_brokerL;
@property(nonatomic) __weak UIView *topV; // @synthesize topV=_topV;
@property(nonatomic) __weak UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) id <JRJAdviserProfileViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AdviserModel *adviserM; // @synthesize adviserM=_adviserM;
@property(nonatomic) __weak UILabel *nameL; // @synthesize nameL=_nameL;
@property(nonatomic) __weak UIImageView *headerIV; // @synthesize headerIV=_headerIV;
@property(nonatomic) int isFocus; // @synthesize isFocus=_isFocus;
@property(nonatomic) __weak UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
- (void).cxx_destruct;
- (id)stringDisposeWithFloat:(float)arg1;
- (id)fansTitleWithNum:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didClickedUserHead;
- (id)adviserHeadImg;
- (void)updateAnimation:(double)arg1 maxScrollDistance:(double)arg2;
- (void)updateAnimationWithH:(double)arg1;
- (void)tagList:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)introButtonDidPressed;
- (void)evluateBtnAction:(id)arg1;
- (void)backButtonDidPressed:(id)arg1;
- (void)friendShipButtonDidPressed:(id)arg1;
- (void)fansButtonDidPressed:(id)arg1;
- (void)moreButtonDidPressed:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setAskBtnVisible:(_Bool)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

