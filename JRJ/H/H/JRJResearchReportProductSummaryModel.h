//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JRJResearchReportProductSummaryModel : NSObject
{
    NSString *_intro;
    NSString *_notes;
    NSString *_title;
    NSArray *_subTitles;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *subTitles; // @synthesize subTitles=_subTitles;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
- (void).cxx_destruct;

@end

