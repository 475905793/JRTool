//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MyStockHeaderView : UIView
{
    _Bool _isMyStockList;
    _Bool _changePrice;
    _Bool _secondIsAscend;
    _Bool _thirdIsAscend;
    UILabel *_lblStockName;
    UILabel *_lblClosePrice;
    UILabel *_lblUpDownRate;
    UIImageView *_imv_price_arrow;
    UIImageView *_imv_type_arrow;
    UIImageView *_imv_group_arrow;
    CDUnknownBlockType _didClickSecondBlock;
    CDUnknownBlockType _didClickThirdBlock;
    CDUnknownBlockType _priceOrderChanged;
    CDUnknownBlockType _typeOrderChanged;
    CDUnknownBlockType _chooseGroupClicked;
    long long _headerType;
    long long _orderType;
    NSString *_groupName;
    UIView *_firstActionView;
    double _cellFieldWidth;
}

@property(nonatomic) double cellFieldWidth; // @synthesize cellFieldWidth=_cellFieldWidth;
@property(retain, nonatomic) UIView *firstActionView; // @synthesize firstActionView=_firstActionView;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) long long orderType; // @synthesize orderType=_orderType;
@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) _Bool thirdIsAscend; // @synthesize thirdIsAscend=_thirdIsAscend;
@property(nonatomic) _Bool secondIsAscend; // @synthesize secondIsAscend=_secondIsAscend;
@property(copy, nonatomic) CDUnknownBlockType chooseGroupClicked; // @synthesize chooseGroupClicked=_chooseGroupClicked;
@property(copy, nonatomic) CDUnknownBlockType typeOrderChanged; // @synthesize typeOrderChanged=_typeOrderChanged;
@property(copy, nonatomic) CDUnknownBlockType priceOrderChanged; // @synthesize priceOrderChanged=_priceOrderChanged;
@property(copy, nonatomic) CDUnknownBlockType didClickThirdBlock; // @synthesize didClickThirdBlock=_didClickThirdBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickSecondBlock; // @synthesize didClickSecondBlock=_didClickSecondBlock;
@property(nonatomic) _Bool changePrice; // @synthesize changePrice=_changePrice;
@property(nonatomic) _Bool isMyStockList; // @synthesize isMyStockList=_isMyStockList;
@property(retain, nonatomic) UIImageView *imv_group_arrow; // @synthesize imv_group_arrow=_imv_group_arrow;
@property(retain, nonatomic) UIImageView *imv_type_arrow; // @synthesize imv_type_arrow=_imv_type_arrow;
@property(retain, nonatomic) UIImageView *imv_price_arrow; // @synthesize imv_price_arrow=_imv_price_arrow;
@property(retain, nonatomic) UILabel *lblUpDownRate; // @synthesize lblUpDownRate=_lblUpDownRate;
@property(retain, nonatomic) UILabel *lblClosePrice; // @synthesize lblClosePrice=_lblClosePrice;
@property(retain, nonatomic) UILabel *lblStockName; // @synthesize lblStockName=_lblStockName;
- (void).cxx_destruct;
- (id)arrowImageWithType:(long long)arg1;
- (void)reset;
- (void)tap_third_action:(id)arg1;
- (void)tap_second_action:(id)arg1;
- (void)tap_first_action:(id)arg1;
- (void)refreshGroupNameLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

