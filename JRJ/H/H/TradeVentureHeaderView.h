//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TradeVentureHeaderView : UIView
{
    UILabel *_titleLbl;
    UILabel *_contentLbl;
}

+ (double)viewHeightWithTitle:(id)arg1 conent:(id)arg2;
+ (id)viewFromNIB;
@property(nonatomic) __weak UILabel *contentLbl; // @synthesize contentLbl=_contentLbl;
@property(nonatomic) __weak UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
- (void).cxx_destruct;
- (void)updateWithTitle:(id)arg1 content:(id)arg2;
- (void)awakeFromNib;

@end

