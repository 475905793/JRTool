//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JRJStockFriendTopicView, NSArray, UIImageView;

@interface JRJStockFriendCircleMainVCHeaderView : UIView
{
    CDUnknownBlockType _needReloadHeader;
    CDUnknownBlockType _topicViewClickBlock;
    CDUnknownBlockType _moreTapBlock;
    CDUnknownBlockType _friendTopClickBlock;
    UIImageView *_friendLeftImg;
    UIImageView *_headerImg;
    UIView *_redMsgView;
    CDUnknownBlockType _goStockCircleDynamicsBlock;
    UIView *_advise_BG;
    UIView *_kline_BG;
    UIView *_genius_BG;
    JRJStockFriendTopicView *_topicBGView;
    NSArray *_collectionDataArr;
}

+ (id)viewFromNIB;
@property(retain, nonatomic) NSArray *collectionDataArr; // @synthesize collectionDataArr=_collectionDataArr;
@property(nonatomic) __weak JRJStockFriendTopicView *topicBGView; // @synthesize topicBGView=_topicBGView;
@property(nonatomic) __weak UIView *genius_BG; // @synthesize genius_BG=_genius_BG;
@property(nonatomic) __weak UIView *kline_BG; // @synthesize kline_BG=_kline_BG;
@property(nonatomic) __weak UIView *advise_BG; // @synthesize advise_BG=_advise_BG;
@property(copy, nonatomic) CDUnknownBlockType goStockCircleDynamicsBlock; // @synthesize goStockCircleDynamicsBlock=_goStockCircleDynamicsBlock;
@property(retain, nonatomic) UIView *redMsgView; // @synthesize redMsgView=_redMsgView;
@property(retain, nonatomic) UIImageView *headerImg; // @synthesize headerImg=_headerImg;
@property(retain, nonatomic) UIImageView *friendLeftImg; // @synthesize friendLeftImg=_friendLeftImg;
@property(copy, nonatomic) CDUnknownBlockType friendTopClickBlock; // @synthesize friendTopClickBlock=_friendTopClickBlock;
@property(copy, nonatomic) CDUnknownBlockType moreTapBlock; // @synthesize moreTapBlock=_moreTapBlock;
@property(copy, nonatomic) CDUnknownBlockType topicViewClickBlock; // @synthesize topicViewClickBlock=_topicViewClickBlock;
@property(copy, nonatomic) CDUnknownBlockType needReloadHeader; // @synthesize needReloadHeader=_needReloadHeader;
- (void).cxx_destruct;
- (void)updateStyle:(long long)arg1;
- (void)updateFragmentWithModelArr:(id)arg1;
- (void)updateWithNum:(id)arg1;
- (void)awakeFromNib;
- (void)stockCircleDynamicsBlock:(id)arg1;

@end

