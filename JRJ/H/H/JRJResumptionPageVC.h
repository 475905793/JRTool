//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "JRJResumptionMainDelegate-Protocol.h"
#import "VTMagicViewDataSource-Protocol.h"
#import "VTMagicViewDelegate-Protocol.h"
#import "ViewControllerPromptingDelegate-Protocol.h"

@class JRJInvestCalendarHandler, JRJStockQuotationModel, NSArray, NSString, UIButton, UILabel, VTMagicController;

@interface JRJResumptionPageVC : JRJBaseViewController <VTMagicViewDataSource, VTMagicViewDelegate, JRJResumptionMainDelegate, ViewControllerPromptingDelegate>
{
    _Bool _magicViewHidden;
    NSString *_dateStr;
    NSArray *_menuList;
    NSArray *_listArr;
    JRJInvestCalendarHandler *_handler;
    UIButton *_addStockNavBtn;
    JRJStockQuotationModel *_currentStockModel;
    VTMagicController *_magicController;
    UILabel *_titleLbl;
}

@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) VTMagicController *magicController; // @synthesize magicController=_magicController;
@property(retain, nonatomic) JRJStockQuotationModel *currentStockModel; // @synthesize currentStockModel=_currentStockModel;
@property(retain, nonatomic) UIButton *addStockNavBtn; // @synthesize addStockNavBtn=_addStockNavBtn;
@property(retain, nonatomic) JRJInvestCalendarHandler *handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool magicViewHidden; // @synthesize magicViewHidden=_magicViewHidden;
@property(retain, nonatomic) NSArray *listArr; // @synthesize listArr=_listArr;
@property(retain, nonatomic) NSArray *menuList; // @synthesize menuList=_menuList;
@property(copy, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)promptingTopView;
- (void)magicView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)magicView:(id)arg1 viewDidDisappear:(id)arg2 atPage:(unsigned long long)arg3;
- (void)magicView:(id)arg1 viewDidAppear:(id)arg2 atPage:(unsigned long long)arg3;
- (id)magicView:(id)arg1 viewControllerAtPage:(unsigned long long)arg2;
- (id)magicView:(id)arg1 menuItemAtIndex:(unsigned long long)arg2;
- (id)menuTitlesForMagicView:(id)arg1;
- (void)scrollupOrDown:(_Bool)arg1;
- (void)addStockClick;
- (_Bool)p_isAddZixuanWithSecurity:(id)arg1;
- (void)p_configAddLayoutWithIsAdd:(_Bool)arg1;
- (void)p_configAddStockBtnWithModel:(id)arg1;
- (void)p_configMagicViewWithTitleList:(id)arg1;
- (void)p_handlerListData:(id)arg1;
- (void)clearBackBarButtonItemTitle;
- (void)requestListData;
- (void)configNavItem;
- (void)configPageVC;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

