//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol StockInfoMainToolBarDelegate;

@interface StockInfoMainToolBar : UIView
{
    NSMutableArray *arrayItems;
    UIView *_baseView;
    long long _pinLunItemIndex;
    long long _plateItemIndex;
    id <StockInfoMainToolBarDelegate> _delegate;
}

@property(nonatomic) __weak id <StockInfoMainToolBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long plateItemIndex; // @synthesize plateItemIndex=_plateItemIndex;
@property(nonatomic) long long pinLunItemIndex; // @synthesize pinLunItemIndex=_pinLunItemIndex;
- (void).cxx_destruct;
- (void)dealClick:(long long)arg1;
- (void)clearItemsInfo;
- (id)getCommonItemView;
- (id)getPlateItemView;
- (void)updatePlatePopHideStatus:(_Bool)arg1;
- (void)setIsStockFollowed:(_Bool)arg1;
- (id)getItemViewWithItemFunIndex:(unsigned long long)arg1;
- (void)initItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

