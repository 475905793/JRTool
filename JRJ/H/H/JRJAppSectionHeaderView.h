//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class JRJAppGroup, UIButton, UILabel;

@interface JRJAppSectionHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    JRJAppGroup *_model;
    CDUnknownBlockType _didTapDoneBlock;
    UIButton *_doneButton;
}

+ (double)heightWithGroup:(id)arg1;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(copy, nonatomic) CDUnknownBlockType didTapDoneBlock; // @synthesize didTapDoneBlock=_didTapDoneBlock;
@property(retain, nonatomic) JRJAppGroup *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)didTapDoneButton:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

