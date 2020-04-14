//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;
@protocol JRJDropDownViewDataSource, JRJDropDownViewDelegate;

@interface JRJDropDownView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isOpen;
    id <JRJDropDownViewDataSource> _datasource;
    id <JRJDropDownViewDelegate> _delegate;
    CDUnknownBlockType _removeGuideBlock;
    long long _numberOfSections;
    long long _selectedSection;
    NSMutableArray *_selectedRows;
    NSMutableArray *_sectionViews;
    NSMutableArray *_data;
    UITableView *_tableView;
    UIView *_backgroundView;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableArray *sectionViews; // @synthesize sectionViews=_sectionViews;
@property(retain, nonatomic) NSMutableArray *selectedRows; // @synthesize selectedRows=_selectedRows;
@property(nonatomic) long long selectedSection; // @synthesize selectedSection=_selectedSection;
@property(nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property(copy, nonatomic) CDUnknownBlockType removeGuideBlock; // @synthesize removeGuideBlock=_removeGuideBlock;
@property(nonatomic) __weak id <JRJDropDownViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <JRJDropDownViewDataSource> datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
- (void)selectRowAtIndexPath:(id)arg1;
- (void)reloadSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)backgroundTapHandler:(id)arg1;
- (void)tapHandler:(id)arg1;
- (void)setupSectionViews;
- (void)hideBackgroundView;
- (void)showBackgroundView;
- (void)hideMenuAnimated:(_Bool)arg1;
- (void)showMenuInSection:(long long)arg1 animated:(_Bool)arg2;
- (void)toggleMenuAtIndex:(long long)arg1;
- (void)reloadComponents;
- (id)rowsInSection:(long long)arg1;
- (void)reloadData;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

