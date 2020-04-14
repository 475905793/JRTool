//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class JRJAnswerViewpointSwitchView, JRJAskSearchStockView, JRJSendStandPointView, MCPlaceHolderTextView, NSMutableArray, NSString;

@interface JRJInterlocutionViewController : JRJBaseViewController <UITextViewDelegate, UIAlertViewDelegate>
{
    MCPlaceHolderTextView *_txtContent;
    JRJSendStandPointView *_sendPointView;
    JRJAnswerViewpointSwitchView *_pointSwitchView;
    NSString *_txtViewStr;
    NSString *_placeholder;
    _Bool _isAllowAsk;
    _Bool _isfristDidAppear;
    _Bool _isBackClick;
    _Bool _isAdviserAnswer;
    NSString *_adviserId;
    NSString *_adviserName;
    NSString *_questionId;
    NSString *_stockName;
    NSString *_stockCode;
    NSMutableArray *_paramDic;
    JRJAskSearchStockView *_searchView;
}

@property(retain, nonatomic) JRJAskSearchStockView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) NSMutableArray *paramDic; // @synthesize paramDic=_paramDic;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(nonatomic) _Bool isAdviserAnswer; // @synthesize isAdviserAnswer=_isAdviserAnswer;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSString *adviserName; // @synthesize adviserName=_adviserName;
@property(copy, nonatomic) NSString *adviserId; // @synthesize adviserId=_adviserId;
- (void).cxx_destruct;
- (id)title;
- (void)fetchLiveAdviser;
- (void)fetchLiveRankList;
- (void)haveQuizCountHandler;
- (void)setRightBarButtonStyle;
- (void)noQuizCountHandler;
- (void)userQuizCount;
- (void)setTextViewFontColor;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardWillDisappear:(id)arg1 withKeyboardRect:(struct CGRect)arg2;
- (void)keyboardWillAppear:(id)arg1 withKeyboardRect:(struct CGRect)arg2;
- (void)askSuccessHandle:(id)arg1;
- (void)handlePublicAttention:(id)arg1;
- (void)handleConsultOperation;
- (void)handleAdviserExpressOpinions:(id)arg1;
- (void)adviserExpressOpinions;
- (void)sendConsultStandPointClickHandle;
- (id)askConsultStandPoint;
- (void)setRightNavigationItemBarButton;
- (void)backClickHandle;
- (id)createBackBtn;
- (void)setLeftNavigationItemBarButton;
- (void)setSendPointViewLabel:(long long)arg1;
- (id)createPointSwitchView;
- (id)createSendPointView;
- (id)createSearchView;
- (id)createMCPlaceHolderTextView;
- (void)handleInsertStr:(id)arg1;
- (void)insertStockHandle;
- (void)createSubview;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
