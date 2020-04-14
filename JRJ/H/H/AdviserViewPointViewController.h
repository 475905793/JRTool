//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ViewPointBaseController.h"

@class NSString;

@interface AdviserViewPointViewController : ViewPointBaseController
{
    NSString *_adviserId;
}

@property(copy, nonatomic) NSString *adviserId; // @synthesize adviserId=_adviserId;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)title;
- (void)willChangePromptView;
- (void)handleViewPointDataArray:(id)arg1 withDirectionUp:(_Bool)arg2;
- (id)getRequestURLWithDirectionUp:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)init;

@end

