//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol JRJThirdPartyLoginViewDelegate;

@interface JRJThirdPartyLoginView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    long long _type;
    NSArray *_items;
    id <JRJThirdPartyLoginViewDelegate> _delegate;
    CDUnknownBlockType _loginBlock;
    UIView *_contentView;
    UICollectionView *_collectionView;
}

@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType loginBlock; // @synthesize loginBlock=_loginBlock;
@property(nonatomic) __weak id <JRJThirdPartyLoginViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (double)iconSpacing;
- (struct CGSize)iconSize;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadContentForType:(long long)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

