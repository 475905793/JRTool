//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSPageContentView;

@protocol FSPageContentViewDelegate <NSObject>

@optional
- (void)FSContenViewDidEndDecelerating:(FSPageContentView *)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3;
- (void)FSContentViewDidScroll:(FSPageContentView *)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 progress:(double)arg4;
- (void)FSContentViewWillBeginDragging:(FSPageContentView *)arg1;
@end

