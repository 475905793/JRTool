//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JRJCountdownTimer;

@protocol JRJCountDownTimerDelegate <NSObject>
- (void)countdownTimer:(JRJCountdownTimer *)arg1 countingDown:(long long)arg2;

@optional
- (void)countdownTimerDidFinish:(JRJCountdownTimer *)arg1;
- (void)countdownTimerDidStop:(JRJCountdownTimer *)arg1;
- (void)countdownTimerDidStart:(JRJCountdownTimer *)arg1;
@end

