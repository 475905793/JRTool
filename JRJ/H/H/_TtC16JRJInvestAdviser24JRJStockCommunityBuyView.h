//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser10ZKBaseView.h"

@class UILabel, UIView;

@interface _TtC16JRJInvestAdviser24JRJStockCommunityBuyView : _TtC16JRJInvestAdviser10ZKBaseView
{
    // Error parsing type: , name: payTipsLabel
    // Error parsing type: , name: priceLabel
    // Error parsing type: , name: orderNumLabel
    // Error parsing type: , name: subView
    // Error parsing type: , name: okFunc2
}

+ (void)showTopViewWithModel:(id)arg1 okFunc:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateViewForModelWithModel:(id)arg1;
- (void)buyBtnHandle:(id)arg1;
- (void)closeBtnHandle:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, copy) CDUnknownBlockType okFunc2;
@property(nonatomic) __weak UIView *subView; // @synthesize subView;
@property(nonatomic) __weak UILabel *orderNumLabel; // @synthesize orderNumLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel;
@property(nonatomic) __weak UILabel *payTipsLabel; // @synthesize payTipsLabel;

@end

