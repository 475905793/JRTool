//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface JRJCommentModel : NSObject
{
    _Bool _isCustom;
    NSString *_id;
    NSString *_appId;
    NSString *_appItemid;
    NSString *_senderId;
    NSString *_senderName;
    NSString *_type;
    NSString *_supportNum;
    NSString *_content;
    NSString *_replyToid;
    NSString *_replyRootid;
    NSString *_district;
    NSNumber *_ctime;
    NSString *_headPic;
    NSString *_nickName;
    NSString *_deviceType;
    double _rowHeight;
    long long _cellType;
}

@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) _Bool isCustom; // @synthesize isCustom=_isCustom;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *headPic; // @synthesize headPic=_headPic;
@property(copy, nonatomic) NSNumber *ctime; // @synthesize ctime=_ctime;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *replyRootid; // @synthesize replyRootid=_replyRootid;
@property(copy, nonatomic) NSString *replyToid; // @synthesize replyToid=_replyToid;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *supportNum; // @synthesize supportNum=_supportNum;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(copy, nonatomic) NSString *appItemid; // @synthesize appItemid=_appItemid;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
