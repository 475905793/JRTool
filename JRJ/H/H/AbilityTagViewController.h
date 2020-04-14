//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class BottomSendView, NSMutableArray, NSString;

@interface AbilityTagViewController : JRJBaseViewController <UITextFieldDelegate>
{
    BottomSendView *_bottomSendView;
    float keyBoardHeight;
    double keyBoardDuration;
    NSMutableArray *_abilityList;
}

@property(retain, nonatomic) NSMutableArray *abilityList; // @synthesize abilityList=_abilityList;
- (void).cxx_destruct;
- (id)title;
- (void)btnSendClick;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadCustomView;
- (void)lblGestTap:(id)arg1;
- (void)loadData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

