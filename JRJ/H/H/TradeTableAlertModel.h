//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TradeTableAlertModel : NSObject
{
    _Bool _isSelected;
    NSString *_cellTitle;
    NSString *_cellSubTitle;
    NSString *_customStr;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *customStr; // @synthesize customStr=_customStr;
@property(copy, nonatomic) NSString *cellSubTitle; // @synthesize cellSubTitle=_cellSubTitle;
@property(copy, nonatomic) NSString *cellTitle; // @synthesize cellTitle=_cellTitle;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;

@end

