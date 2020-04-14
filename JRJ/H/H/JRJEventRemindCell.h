//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJDashView, NSLayoutConstraint, UILabel;

@interface JRJEventRemindCell : JRJTableViewCell
{
    UILabel *_yearLabel;
    UILabel *_dateLabel;
    UILabel *_commentLabel;
    NSLayoutConstraint *_topConstraint;
    UILabel *_titleLabrl;
    JRJDashView *_topDashView;
    JRJDashView *_bottomDashView;
    UILabel *_priceLabel;
    NSLayoutConstraint *_bottomDashViewBottomLayout;
}

+ (id)makeAttributedString:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *bottomDashViewBottomLayout; // @synthesize bottomDashViewBottomLayout=_bottomDashViewBottomLayout;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak JRJDashView *bottomDashView; // @synthesize bottomDashView=_bottomDashView;
@property(nonatomic) __weak JRJDashView *topDashView; // @synthesize topDashView=_topDashView;
@property(nonatomic) __weak UILabel *titleLabrl; // @synthesize titleLabrl=_titleLabrl;
@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithDic:(id)arg1 withHiddenYear:(_Bool)arg2 withRow:(long long)arg3;
- (void)awakeFromNib;

@end

