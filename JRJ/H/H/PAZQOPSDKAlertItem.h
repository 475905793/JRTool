//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PAZQOPSDKAlertItem : NSObject
{
    NSString *_title;
    NSString *_message;
    NSArray *_buttonTitles;
    CDUnknownBlockType _block;
}

+ (id)alertItemTitle:(id)arg1 message:(id)arg2 buttonTitles:(id)arg3 callback:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show;

@end

