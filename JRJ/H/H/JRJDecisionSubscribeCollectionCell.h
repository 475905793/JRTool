//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface JRJDecisionSubscribeCollectionCell : UICollectionViewCell
{
    UIView *_selectedView;
    UIView *_unSelectedView;
    UIView *_unSelectedSmallView;
    UIView *_selectedSmallView;
    UILabel *_unSelectedNameLabel;
    UILabel *_selectedNameLabel;
}

@property(nonatomic) __weak UILabel *selectedNameLabel; // @synthesize selectedNameLabel=_selectedNameLabel;
@property(nonatomic) __weak UILabel *unSelectedNameLabel; // @synthesize unSelectedNameLabel=_unSelectedNameLabel;
@property(nonatomic) __weak UIView *selectedSmallView; // @synthesize selectedSmallView=_selectedSmallView;
@property(nonatomic) __weak UIView *unSelectedSmallView; // @synthesize unSelectedSmallView=_unSelectedSmallView;
@property(nonatomic) __weak UIView *unSelectedView; // @synthesize unSelectedView=_unSelectedView;
@property(nonatomic) __weak UIView *selectedView; // @synthesize selectedView=_selectedView;
- (void).cxx_destruct;
- (void)configData:(id)arg1;
- (void)awakeFromNib;

@end

