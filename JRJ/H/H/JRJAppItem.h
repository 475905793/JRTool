//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface JRJAppItem : NSObject <NSCoding>
{
    _Bool _editing;
    _Bool _added;
    _Bool _myApp;
    _Bool _addBtnItem;
    NSString *_opentype;
    NSString *_appId;
    NSString *_name;
    NSString *_linkurl;
    NSString *_src;
    NSDictionary *_rawDic;
}

@property(nonatomic, getter=isAddBtnItem) _Bool addBtnItem; // @synthesize addBtnItem=_addBtnItem;
@property(nonatomic, getter=isMyApp) _Bool myApp; // @synthesize myApp=_myApp;
@property(nonatomic, getter=isAdded) _Bool added; // @synthesize added=_added;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSDictionary *rawDic; // @synthesize rawDic=_rawDic;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *linkurl; // @synthesize linkurl=_linkurl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *opentype; // @synthesize opentype=_opentype;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
