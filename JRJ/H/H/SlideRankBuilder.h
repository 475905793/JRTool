//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class SlideRank;

@interface SlideRankBuilder : PBGeneratedMessageBuilder
{
    SlideRank *resultSlideRank;
}

@property(retain) SlideRank *resultSlideRank; // @synthesize resultSlideRank;
- (void).cxx_destruct;
- (id)clearItem;
- (id)setItemArray:(id)arg1;
- (id)addItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)item;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;

@end

