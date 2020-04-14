//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIColor, UITableView;

@interface TouTiaoCalendasTopView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hiddenSegmentLine;
    long long _btnTitleAlignment;
    NSString *_titleBtnStr;
    UIColor *_titleBGColor;
    CDUnknownBlockType _titleClickBlock;
    CDUnknownBlockType _selectDataBlock;
    UIView *_maskBackGroundView;
    UIView *_buttonBGView;
    UIView *_segmentlineView;
    UITableView *_tableView;
    NSMutableArray *_tableDataArray;
    NSMutableArray *_buttonArray;
    UIButton *_tempButton;
    NSArray *_menuDataArray;
    NSMutableArray *_titleArray;
    double _selfOriginalHeight;
    double _tableViewMaxHeight;
    double _titleButtonHeight;
}

@property(nonatomic) double titleButtonHeight; // @synthesize titleButtonHeight=_titleButtonHeight;
@property(nonatomic) double tableViewMaxHeight; // @synthesize tableViewMaxHeight=_tableViewMaxHeight;
@property(nonatomic) double selfOriginalHeight; // @synthesize selfOriginalHeight=_selfOriginalHeight;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) NSArray *menuDataArray; // @synthesize menuDataArray=_menuDataArray;
@property(retain, nonatomic) UIButton *tempButton; // @synthesize tempButton=_tempButton;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSMutableArray *tableDataArray; // @synthesize tableDataArray=_tableDataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *segmentlineView; // @synthesize segmentlineView=_segmentlineView;
@property(retain, nonatomic) UIView *buttonBGView; // @synthesize buttonBGView=_buttonBGView;
@property(retain, nonatomic) UIView *maskBackGroundView; // @synthesize maskBackGroundView=_maskBackGroundView;
@property(copy, nonatomic) CDUnknownBlockType selectDataBlock; // @synthesize selectDataBlock=_selectDataBlock;
@property(copy, nonatomic) CDUnknownBlockType titleClickBlock; // @synthesize titleClickBlock=_titleClickBlock;
@property(retain, nonatomic) UIColor *titleBGColor; // @synthesize titleBGColor=_titleBGColor;
@property(copy, nonatomic) NSString *titleBtnStr; // @synthesize titleBtnStr=_titleBtnStr;
@property(nonatomic) _Bool hiddenSegmentLine; // @synthesize hiddenSegmentLine=_hiddenSegmentLine;
@property(nonatomic) long long btnTitleAlignment; // @synthesize btnTitleAlignment=_btnTitleAlignment;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)maskBackGroundViewTapClick;
- (void)showSpringAnimationWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeBtnInsets:(id)arg1;
- (void)changeButtonObject:(id)arg1 TransformAngle:(double)arg2;
- (void)takeBackTableView;
- (void)expandWithTableViewHeight:(double)arg1;
- (void)titleButtonClick:(id)arg1;
- (void)refreshWithdDataArr:(id)arg1;
- (void)configBaseInfo;
- (void)addBtnBGView;
- (id)initWithFrame:(struct CGRect)arg1 dataArray:(id)arg2 defaultIndex:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 dataArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

