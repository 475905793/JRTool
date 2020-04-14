//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JRJBadgeLabel, JRJPortfolioDetailSource, NSString, UIButton;

@interface JRJPortfolioToolbar : UIView
{
    _Bool _favorite;
    _Bool _isMasters;
    long long _commentsCount;
    CDUnknownBlockType _commentblock;
    CDUnknownBlockType _favorBlock;
    CDUnknownBlockType _buyBlock;
    UIButton *_buyButton;
    UIButton *_commentButton;
    UIButton *_favorButton;
    NSString *_text;
    NSString *_disabledText;
    JRJPortfolioDetailSource *_detailSource;
    JRJBadgeLabel *_commentBadgeLabel;
}

@property(nonatomic) __weak JRJBadgeLabel *commentBadgeLabel; // @synthesize commentBadgeLabel=_commentBadgeLabel;
@property(nonatomic) _Bool isMasters; // @synthesize isMasters=_isMasters;
@property(retain, nonatomic) JRJPortfolioDetailSource *detailSource; // @synthesize detailSource=_detailSource;
@property(copy, nonatomic) NSString *disabledText; // @synthesize disabledText=_disabledText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool favorite; // @synthesize favorite=_favorite;
@property(nonatomic) __weak UIButton *favorButton; // @synthesize favorButton=_favorButton;
@property(nonatomic) __weak UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(nonatomic) __weak UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(copy, nonatomic) CDUnknownBlockType buyBlock; // @synthesize buyBlock=_buyBlock;
@property(copy, nonatomic) CDUnknownBlockType favorBlock; // @synthesize favorBlock=_favorBlock;
@property(copy, nonatomic) CDUnknownBlockType commentblock; // @synthesize commentblock=_commentblock;
@property(nonatomic) long long commentsCount; // @synthesize commentsCount=_commentsCount;
- (void).cxx_destruct;
- (void)setBuyBtnStatusDone;
- (void)setBuyBtnStatusRunning;
- (id)dealPortfolioNum:(id)arg1;
- (void)setBuyBtnStatusOnSale;
- (void)setBuybuttonStatusMasters;
- (void)setCommentCountText;
- (void)buyButtonPressed:(id)arg1;
- (void)favorButtonPressed:(id)arg1;
- (void)commentButtonPressed:(id)arg1;
- (void)loadNib;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

