//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JRJResearchReportDataModel, NSString;

@interface JRJResearchReportModel : NSObject
{
    long long _retCode;
    JRJResearchReportDataModel *_data;
    NSString *_msg;
}

@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) JRJResearchReportDataModel *data; // @synthesize data=_data;
@property(nonatomic) long long retCode; // @synthesize retCode=_retCode;
- (void).cxx_destruct;

@end

