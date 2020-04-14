//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class JRJFriendsCircleModel, UIButton, UIImageView, UILabel;

@interface JRJFriendsShareCell : JRJBaseCell
{
    _Bool _isFromFans;
    UIImageView *_headerImg;
    UILabel *_nameUIlabel;
    UIImageView *_goodUserUIImageView;
    UIButton *_attentionBtn;
    CDUnknownBlockType _attentionClickBlock;
    CDUnknownBlockType _gotoStockFriendMainVCBlock;
    JRJFriendsCircleModel *_model;
}

@property(retain, nonatomic) JRJFriendsCircleModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType gotoStockFriendMainVCBlock; // @synthesize gotoStockFriendMainVCBlock=_gotoStockFriendMainVCBlock;
@property(copy, nonatomic) CDUnknownBlockType attentionClickBlock; // @synthesize attentionClickBlock=_attentionClickBlock;
@property(nonatomic) _Bool isFromFans; // @synthesize isFromFans=_isFromFans;
@property(retain, nonatomic) UIButton *attentionBtn; // @synthesize attentionBtn=_attentionBtn;
@property(retain, nonatomic) UIImageView *goodUserUIImageView; // @synthesize goodUserUIImageView=_goodUserUIImageView;
@property(retain, nonatomic) UILabel *nameUIlabel; // @synthesize nameUIlabel=_nameUIlabel;
@property(retain, nonatomic) UIImageView *headerImg; // @synthesize headerImg=_headerImg;
- (void).cxx_destruct;
- (void)gotoStockMainVC:(id)arg1;
- (void)clickAttention:(id)arg1;
- (void)fillViewsWithDic:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
