//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface JRJSearchManager : NSObject
{
    NSString *_currentKeyword;
    NSMutableArray *_historyKeywords;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *historyKeywords; // @synthesize historyKeywords=_historyKeywords;
@property(copy, nonatomic) NSString *currentKeyword; // @synthesize currentKeyword=_currentKeyword;
- (void).cxx_destruct;
- (id)matchStockInfoWithKeyword:(id)arg1;
- (void)clearHistory;
- (void)saveSearchSpecialKeyword:(id)arg1;
- (id)init;

@end

