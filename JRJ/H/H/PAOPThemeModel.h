//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIImage, UIView;

@interface PAOPThemeModel : NSObject
{
    _Bool _sys;
    UIView *_view;
    id _color;
    UIImage *_image;
    NSMutableDictionary *_dictionary;
}

+ (id)modelWithView:(id)arg1 color:(id)arg2 sys:(_Bool)arg3 image:(id)arg4;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool sys; // @synthesize sys=_sys;
@property(retain, nonatomic) id color; // @synthesize color=_color;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)keyForMetrics:(long long)arg1 position:(long long)arg2;
- (void)recoveryNavBar;
- (void)cleanUpNavBar;

@end
