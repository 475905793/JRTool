//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseViewController.h"

@class UIScrollView, _TtC16JRJInvestAdviser18JRJIndexButtonView;

@interface _TtC16JRJInvestAdviser30JRJMainHotSearchViewController : JRJBaseViewController
{
    // Error parsing type: , name: indexVC
    // Error parsing type: , name: indexButtonView
    // Error parsing type: , name: scrollView
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectStateChangeWithBtn:(id)arg1 index:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic, retain) _TtC16JRJInvestAdviser18JRJIndexButtonView *indexButtonView; // @synthesize indexButtonView;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(long long)arg1;
@property(nonatomic) long long indexVC; // @synthesize indexVC;

@end

