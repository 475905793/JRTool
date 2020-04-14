//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMViewModel : NSObject
{
    _Bool _noData;
    _Bool _noMoreData;
    long long _dir;
    long long _pageNum;
    long long _pageSize;
}

@property(nonatomic) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(nonatomic) _Bool noData; // @synthesize noData=_noData;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long dir; // @synthesize dir=_dir;
- (void)loadFail;
- (void)loadMore;
- (void)loadNew;
- (void)loadConfig;
- (void)loadData:(CDUnknownBlockType)arg1;
- (id)init;

@end

