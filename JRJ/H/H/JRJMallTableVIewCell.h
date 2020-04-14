//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSDictionary, NSString, UICollectionView;

@interface JRJMallTableVIewCell : JRJBaseCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIAlertViewDelegate>
{
    NSArray *_array;
    NSDictionary *_dic;
    CDUnknownBlockType _clickExchangeBtnBlock;
    UICollectionView *_collectionView;
}

+ (double)cellHeight;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType clickExchangeBtnBlock; // @synthesize clickExchangeBtnBlock=_clickExchangeBtnBlock;
@property(retain, nonatomic) NSDictionary *dic; // @synthesize dic=_dic;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (long long)transposeIndex:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showLogoutAlert;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
