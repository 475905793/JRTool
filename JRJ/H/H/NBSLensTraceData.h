//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _priv_NBSEventTreeNode;

@interface NBSLensTraceData : NSObject
{
    NSMutableArray *_CPU_SAMPLE_DATA;
    NSMutableArray *_MEMORY_SAMPLE_DATA;
    _priv_NBSEventTreeNode *_rootSegmentStack;
}

@property(retain, nonatomic) _priv_NBSEventTreeNode *rootSegmentStack; // @synthesize rootSegmentStack=_rootSegmentStack;
@property(retain, nonatomic) NSMutableArray *MEMORY_SAMPLE_DATA; // @synthesize MEMORY_SAMPLE_DATA=_MEMORY_SAMPLE_DATA;
@property(retain, nonatomic) NSMutableArray *CPU_SAMPLE_DATA; // @synthesize CPU_SAMPLE_DATA=_CPU_SAMPLE_DATA;
- (void).cxx_destruct;
- (id)renderTraceData;
- (id)renderSegmentStackDataWithRootSegmentStack:(id)arg1;
- (id)initWithRootSegmentStack:(id)arg1;

@end

