//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface SATradeCollectionCell : UICollectionViewCell
{
    UILabel *_titleLbl;
    UILabel *_contentLbl;
    UIImageView *_BG_ImageView;
}

@property(nonatomic) __weak UIImageView *BG_ImageView; // @synthesize BG_ImageView=_BG_ImageView;
@property(nonatomic) __weak UILabel *contentLbl; // @synthesize contentLbl=_contentLbl;
@property(nonatomic) __weak UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
- (void).cxx_destruct;
- (void)updateWithDic:(id)arg1;
- (void)awakeFromNib;

@end

