//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

#import "FTSegmentedControlDataSource-Protocol.h"

@class FTSegmentedControl, MemberHXCardSwitchView, NSArray, NSString;

@interface JRJMyMemberServiceViewController : JRJBaseViewController <FTSegmentedControlDataSource>
{
    long long _currentIndex;
    MemberHXCardSwitchView *_cardSwitchView;
    NSArray *_dicAry;
    FTSegmentedControl *_seg_control;
    NSArray *_arr_seg_titles;
}

@property(retain, nonatomic) NSArray *arr_seg_titles; // @synthesize arr_seg_titles=_arr_seg_titles;
@property(retain, nonatomic) FTSegmentedControl *seg_control; // @synthesize seg_control=_seg_control;
@property(retain, nonatomic) NSArray *dicAry; // @synthesize dicAry=_dicAry;
@property(retain, nonatomic) MemberHXCardSwitchView *cardSwitchView; // @synthesize cardSwitchView=_cardSwitchView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)switchSegmentedControlToIndex:(long long)arg1;
- (struct CGRect)segmentedControl:(id)arg1 indicatorAtIndex:(long long)arg2;
- (_Bool)segmentedControl:(id)arg1 shouldReclickAtIndex:(long long)arg2;
- (void)segmentedControl:(id)arg1 selectAtIndexByMethod:(long long)arg2;
- (void)segmentedControl:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)segmentedControl:(id)arg1 willSelectAtIndex:(long long)arg2;
- (id)segmentedControl:(id)arg1 viewAtIndex:(long long)arg2;
- (long long)numberOfItemInSegmentedControl:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)cardSwitchViewDidScroll:(id)arg1 index:(long long)arg2;
- (id)ittemsCardSwitchViewAry;
- (void)addFelicityView;
- (id)title;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

