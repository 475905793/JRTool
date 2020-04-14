//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPageController.h"

#import "WMPageControllerDelegate-Protocol.h"

@class NSArray, NSString, UIViewController, VTMagicController;

@interface JRJTeXunCoursesViewController : WMPageController <WMPageControllerDelegate>
{
    NSString *_adviserId;
    VTMagicController *_containerController;
    NSArray *_columns;
    UIViewController *_jingPinVC;
    UIViewController *_fuPanVC;
}

@property(retain, nonatomic) UIViewController *fuPanVC; // @synthesize fuPanVC=_fuPanVC;
@property(retain, nonatomic) UIViewController *jingPinVC; // @synthesize jingPinVC=_jingPinVC;
@property(retain, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) VTMagicController *containerController; // @synthesize containerController=_containerController;
@property(copy, nonatomic) NSString *adviserId; // @synthesize adviserId=_adviserId;
- (void).cxx_destruct;
- (id)pageControllerForIndex:(long long)arg1;
- (long long)numberOfPages:(id)arg1;
- (id)initWithTitles:(id)arg1;
- (id)init;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

