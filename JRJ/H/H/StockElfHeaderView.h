//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface StockElfHeaderView : UITableViewHeaderFooterView
{
    _Bool _showRowsFlag;
    UIButton *_showElfButton;
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    UILabel *_thirdLabel;
    UIButton *_settingButton;
    UIButton *_elfTouchButton;
    UIImageView *_arrowImageView;
    UIButton *_allStockButton;
    UIButton *_chooseStockButton;
    UIButton *_currentStockButton;
    UIView *_stockButtonBackView;
}

@property(nonatomic) _Bool showRowsFlag; // @synthesize showRowsFlag=_showRowsFlag;
@property(nonatomic) __weak UIView *stockButtonBackView; // @synthesize stockButtonBackView=_stockButtonBackView;
@property(nonatomic) __weak UIButton *currentStockButton; // @synthesize currentStockButton=_currentStockButton;
@property(nonatomic) __weak UIButton *chooseStockButton; // @synthesize chooseStockButton=_chooseStockButton;
@property(nonatomic) __weak UIButton *allStockButton; // @synthesize allStockButton=_allStockButton;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UIButton *elfTouchButton; // @synthesize elfTouchButton=_elfTouchButton;
@property(nonatomic) __weak UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(nonatomic) __weak UILabel *thirdLabel; // @synthesize thirdLabel=_thirdLabel;
@property(nonatomic) __weak UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(nonatomic) __weak UILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(nonatomic) __weak UIButton *showElfButton; // @synthesize showElfButton=_showElfButton;
- (void).cxx_destruct;
- (void)stockButtonBackViewHiden:(_Bool)arg1;
- (void)configStockButtonColorWithIndex:(unsigned long long)arg1;
- (void)configColor:(id)arg1;
- (void)configDataWithElfModel:(id)arg1;
- (void)awakeFromNib;

@end

