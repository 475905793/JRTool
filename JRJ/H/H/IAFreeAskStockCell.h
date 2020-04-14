//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class UIImageView, UILabel;

@interface IAFreeAskStockCell : JRJTableViewCell
{
    UIImageView *_leftImageView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_freeLabel;
    CDUnknownBlockType _tapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(copy, nonatomic) UILabel *freeLabel; // @synthesize freeLabel=_freeLabel;
@property(copy, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(copy, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (void)updateCellWithSource:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
