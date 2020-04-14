//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTPopView.h"

#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString;

@interface JRJPopView : HTPopView <UITableViewDelegate>
{
    _Bool _rich;
    _Bool _menuTitleIsCenter;
    NSArray *_icons;
    long long _arrowType;
    long long _activeIndex;
}

@property(nonatomic) _Bool menuTitleIsCenter; // @synthesize menuTitleIsCenter=_menuTitleIsCenter;
@property(nonatomic) long long activeIndex; // @synthesize activeIndex=_activeIndex;
@property(nonatomic) long long arrowType; // @synthesize arrowType=_arrowType;
@property(nonatomic, getter=isRich) _Bool rich; // @synthesize rich=_rich;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)registerNibs;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
