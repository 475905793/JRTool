//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16JRJInvestAdviser12JRJBaseModel.h"

@class NSArray, NSNumber, NSString, _TtC16JRJInvestAdviser17JRJIndicatorModel;

@interface _TtC16JRJInvestAdviser18JRJStrategiesModel : _TtC16JRJInvestAdviser12JRJBaseModel
{
    // Error parsing type: , name: src
    // Error parsing type: , name: bgImgUrl
    // Error parsing type: , name: id
    // Error parsing type: , name: indicator
    // Error parsing type: , name: labels
    // Error parsing type: , name: name
    // Error parsing type: , name: notice
    // Error parsing type: , name: profile
    // Error parsing type: , name: updateTime
    // Error parsing type: , name: status
    // Error parsing type: , name: tradeDynamicList
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *tradeDynamicList;
@property(nonatomic, retain) NSNumber *status; // @synthesize status;
@property(nonatomic, copy) NSString *updateTime;
@property(nonatomic, copy) NSString *profile;
@property(nonatomic, copy) NSString *notice;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSArray *labels;
@property(nonatomic, retain) _TtC16JRJInvestAdviser17JRJIndicatorModel *indicator; // @synthesize indicator;
@property(nonatomic, retain) NSNumber *id; // @synthesize id;
@property(nonatomic, copy) NSString *bgImgUrl;
@property(nonatomic, copy) NSString *src;

@end
