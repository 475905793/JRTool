//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JRJPlateBuySignalModel : NSObject
{
    NSString *_platCode;
    NSString *_platName;
    NSString *_platType;
    NSString *_signalBs;
    NSString *_priceLimit;
    NSArray *_leadStocks;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *leadStocks; // @synthesize leadStocks=_leadStocks;
@property(copy, nonatomic) NSString *priceLimit; // @synthesize priceLimit=_priceLimit;
@property(copy, nonatomic) NSString *signalBs; // @synthesize signalBs=_signalBs;
@property(copy, nonatomic) NSString *platType; // @synthesize platType=_platType;
@property(copy, nonatomic) NSString *platName; // @synthesize platName=_platName;
@property(copy, nonatomic) NSString *platCode; // @synthesize platCode=_platCode;
- (void).cxx_destruct;

@end
