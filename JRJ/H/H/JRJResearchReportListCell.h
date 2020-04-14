//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJTableViewCell.h"

@class JRJResearchReportStockView, NSArray, NSString, UIButton, UIImageView, UILabel, UIView;

@interface JRJResearchReportListCell : JRJTableViewCell
{
    _Bool _isSubReport;
    UIImageView *_cornerMarkIcon;
    UILabel *_markLabel;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_previewButton;
    UILabel *_publishLabel;
    NSString *_collectNumString;
    UIButton *_collectButton;
    UIButton *_buyButton;
    UIButton *_shareButton;
    NSArray *_stocks;
    CDUnknownBlockType _didClickStock;
    UIView *_previewView;
    UIView *_stockView;
    JRJResearchReportStockView *_leftStockView;
    JRJResearchReportStockView *_rightStockView;
    UIView *_bottomView;
    UILabel *_stockDescLabel;
}

@property(retain, nonatomic) UILabel *stockDescLabel; // @synthesize stockDescLabel=_stockDescLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) JRJResearchReportStockView *rightStockView; // @synthesize rightStockView=_rightStockView;
@property(retain, nonatomic) JRJResearchReportStockView *leftStockView; // @synthesize leftStockView=_leftStockView;
@property(retain, nonatomic) UIView *stockView; // @synthesize stockView=_stockView;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(copy, nonatomic) CDUnknownBlockType didClickStock; // @synthesize didClickStock=_didClickStock;
@property(nonatomic) _Bool isSubReport; // @synthesize isSubReport=_isSubReport;
@property(retain, nonatomic) NSArray *stocks; // @synthesize stocks=_stocks;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UIButton *collectButton; // @synthesize collectButton=_collectButton;
@property(copy, nonatomic) NSString *collectNumString; // @synthesize collectNumString=_collectNumString;
@property(retain, nonatomic) UILabel *publishLabel; // @synthesize publishLabel=_publishLabel;
@property(retain, nonatomic) UIButton *previewButton; // @synthesize previewButton=_previewButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) UIImageView *cornerMarkIcon; // @synthesize cornerMarkIcon=_cornerMarkIcon;
- (void).cxx_destruct;
- (void)layoutPageSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)updateStockIncomeRate:(id)arg1;
- (id)updateStockIcon:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

