//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JRJTopicInfoHeaderModel : NSObject
{
    NSString *_ID;
    NSString *_title;
    NSString *_content;
    NSString *_passportId;
    NSString *_userName;
    NSString *_headImage;
    NSString *_picUrl;
    NSString *_bigPicUrl;
    NSString *_commentId;
    NSString *_stime;
    NSString *_etime;
    NSString *_stocks;
    NSString *_indexs;
    long long _commNum;
    NSArray *_stockList;
}

+ (id)mj_objectClassInArray;
+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSArray *stockList; // @synthesize stockList=_stockList;
@property(nonatomic) long long commNum; // @synthesize commNum=_commNum;
@property(copy, nonatomic) NSString *indexs; // @synthesize indexs=_indexs;
@property(copy, nonatomic) NSString *stocks; // @synthesize stocks=_stocks;
@property(copy, nonatomic) NSString *etime; // @synthesize etime=_etime;
@property(copy, nonatomic) NSString *stime; // @synthesize stime=_stime;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *bigPicUrl; // @synthesize bigPicUrl=_bigPicUrl;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *headImage; // @synthesize headImage=_headImage;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *passportId; // @synthesize passportId=_passportId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end
