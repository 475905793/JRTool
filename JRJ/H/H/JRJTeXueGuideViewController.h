//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRJToutiaoListViewController.h"

@class NSString;

@interface JRJTeXueGuideViewController : JRJToutiaoListViewController
{
    _Bool _isTeXunYingJiaoLiuQuan;
    NSString *_adviserId;
}

@property(nonatomic) _Bool isTeXunYingJiaoLiuQuan; // @synthesize isTeXunYingJiaoLiuQuan=_isTeXunYingJiaoLiuQuan;
@property(copy, nonatomic) NSString *adviserId; // @synthesize adviserId=_adviserId;
- (void).cxx_destruct;
- (id)dataArrayWithResponse:(id)arg1;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (id)APIURLString;
- (void)viewDidLoad;

@end

