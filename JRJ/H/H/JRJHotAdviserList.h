//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseModel.h"

@class NSArray;

@interface JRJHotAdviserList : BaseModel
{
    NSArray *_adviserList;
}

+ (id)adviserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *adviserList; // @synthesize adviserList=_adviserList;
- (void).cxx_destruct;

@end
