//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface NBSActionPostInfo : NSObject
{
    NSString *_actionID;
    NSString *_eventType;
    NSString *_actionName;
    NSString *_pageName;
    UIImage *_image;
}

@property(retain) UIImage *image; // @synthesize image=_image;
@property(retain) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain) NSString *actionID; // @synthesize actionID=_actionID;
- (void).cxx_destruct;

@end
