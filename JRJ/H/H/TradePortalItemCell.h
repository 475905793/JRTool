//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface TradePortalItemCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_titleLbl;
    UILabel *_redBadgeLbl;
}

@property(nonatomic) __weak UILabel *redBadgeLbl; // @synthesize redBadgeLbl=_redBadgeLbl;
@property(nonatomic) __weak UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateCellWithModel:(id)arg1;
- (void)awakeFromNib;

@end
