//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ReadNewsManager : NSObject
{
    NSMutableArray *_readNewsMArray;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *readNewsMArray; // @synthesize readNewsMArray=_readNewsMArray;
- (void).cxx_destruct;
- (void)synchronous;
- (void)writePlist;
- (void)readPlist;

@end
