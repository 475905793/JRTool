//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UserDetailsVCModel;

@interface UserHomeDetailCell : JRJTableViewCell
{
    CDUnknownBlockType _addStockBlock;
    CDUnknownBlockType _stockClickBlock;
    UILabel *_stockNameLbl;
    UILabel *_stockCodeLbl;
    UIImageView *_identifyImageView;
    UILabel *_addPriceLbl;
    UILabel *_profitLbl;
    UILabel *_dayNumLbl;
    UIButton *_addStockBtn;
    UserDetailsVCModel *_model;
    NSLayoutConstraint *_stockCode_img_Left;
}

@property(nonatomic) __weak NSLayoutConstraint *stockCode_img_Left; // @synthesize stockCode_img_Left=_stockCode_img_Left;
@property(retain, nonatomic) UserDetailsVCModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIButton *addStockBtn; // @synthesize addStockBtn=_addStockBtn;
@property(nonatomic) __weak UILabel *dayNumLbl; // @synthesize dayNumLbl=_dayNumLbl;
@property(nonatomic) __weak UILabel *profitLbl; // @synthesize profitLbl=_profitLbl;
@property(nonatomic) __weak UILabel *addPriceLbl; // @synthesize addPriceLbl=_addPriceLbl;
@property(nonatomic) __weak UIImageView *identifyImageView; // @synthesize identifyImageView=_identifyImageView;
@property(nonatomic) __weak UILabel *stockCodeLbl; // @synthesize stockCodeLbl=_stockCodeLbl;
@property(nonatomic) __weak UILabel *stockNameLbl; // @synthesize stockNameLbl=_stockNameLbl;
@property(copy, nonatomic) CDUnknownBlockType stockClickBlock; // @synthesize stockClickBlock=_stockClickBlock;
@property(copy, nonatomic) CDUnknownBlockType addStockBlock; // @synthesize addStockBlock=_addStockBlock;
- (void).cxx_destruct;
- (void)stockClick:(id)arg1;
- (void)addStockClick:(id)arg1;
- (void)p_updateMarkType:(id)arg1;
- (void)updateWithMode:(id)arg1;
- (void)awakeFromNib;

@end

