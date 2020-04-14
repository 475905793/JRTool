//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, UILabel, UIView;

@interface StockJiGouCell : JRJBaseCell
{
    UILabel *lblJiGouTitle;
    UIView *containerPingJi;
    UILabel *lblSubTitle;
    UIView *containerDetailRows;
    UILabel *lblBottomTitle;
    NSMutableArray *detailViews;
    NSLayoutConstraint *detailHeightConstraint;
    _Bool showAllRow;
    NSArray *_lblPingJiList;
    CDUnknownBlockType _clickAction;
}

+ (double)getCellHeightWithDic:(id)arg1 isAllRow:(_Bool)arg2;
+ (id)getZdfColor:(id)arg1;
+ (id)genBottomTitleWithTitle:(id)arg1 withZdf:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) NSArray *lblPingJiList; // @synthesize lblPingJiList=_lblPingJiList;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1 isShowAllRow:(_Bool)arg2;
- (id)getPjTitleBackSelColor:(int)arg1;
- (id)getPjTitleBackColor:(int)arg1;
- (int)getPjTitleIndexByStr:(id)arg1;
- (void)setPjTitleWithIndex:(int)arg1;
- (void)resetDataInfo;
- (void)clickAciton;
- (void)genRowsView:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

