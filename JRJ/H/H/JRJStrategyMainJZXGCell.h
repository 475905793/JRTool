//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJBaseCell.h"

@class NSArray, UIScrollView;

@interface JRJStrategyMainJZXGCell : JRJBaseCell
{
    UIScrollView *_scrollView;
    NSArray *itemTypes;
    CDUnknownBlockType _portfoliosBlock;
    NSArray *_jzxgArray;
}

@property(retain, nonatomic) NSArray *jzxgArray; // @synthesize jzxgArray=_jzxgArray;
@property(copy, nonatomic) CDUnknownBlockType portfoliosBlock; // @synthesize portfoliosBlock=_portfoliosBlock;
- (void).cxx_destruct;
- (void)clickButton:(int)arg1;
- (void)setViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

