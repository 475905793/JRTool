//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, RiskInfoModel;

@interface InterPreferenceViewModel : NSObject
{
    long long _begintime;
    long long _dateBegintime;
    long long _endtime;
    long long _dateEndtime;
    long long _contentnum;
    long long _ctime;
    long long _ID;
    NSString *_img;
    long long _isBuy;
    long long _isdel;
    long long _lastupdate;
    long long _mtime;
    long long _orderdate;
    long long _purchaseamount;
    long long _status;
    NSString *_statusStr;
    NSString *_strBegintime;
    NSString *_strEndtime;
    NSString *_strLastupdate;
    NSString *_tdesc;
    NSString *_title;
    NSString *_userid;
    NSString *_username;
    NSString *_headimg;
    NSNumber *_appprice;
    NSString *_yuanPrice;
    NSString *_yuanSignprice;
    NSString *_yuanAppPrice;
    NSString *_suittypeStr;
    NSNumber *_onsale;
    long long _fansNum;
    long long _type;
    RiskInfoModel *_riskInfo;
    long long _payTimeType;
    long long _payTimeNums;
    long long _index;
    CDUnknownBlockType _block;
    CDUnknownBlockType _subBlock;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(copy, nonatomic) CDUnknownBlockType subBlock; // @synthesize subBlock=_subBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long payTimeNums; // @synthesize payTimeNums=_payTimeNums;
@property(nonatomic) long long payTimeType; // @synthesize payTimeType=_payTimeType;
@property(retain, nonatomic) RiskInfoModel *riskInfo; // @synthesize riskInfo=_riskInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long fansNum; // @synthesize fansNum=_fansNum;
@property(copy, nonatomic) NSNumber *onsale; // @synthesize onsale=_onsale;
@property(copy, nonatomic) NSString *suittypeStr; // @synthesize suittypeStr=_suittypeStr;
@property(copy, nonatomic) NSString *yuanAppPrice; // @synthesize yuanAppPrice=_yuanAppPrice;
@property(copy, nonatomic) NSString *yuanSignprice; // @synthesize yuanSignprice=_yuanSignprice;
@property(copy, nonatomic) NSString *yuanPrice; // @synthesize yuanPrice=_yuanPrice;
@property(copy, nonatomic) NSNumber *appprice; // @synthesize appprice=_appprice;
@property(copy, nonatomic) NSString *headimg; // @synthesize headimg=_headimg;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tdesc; // @synthesize tdesc=_tdesc;
@property(copy, nonatomic) NSString *strLastupdate; // @synthesize strLastupdate=_strLastupdate;
@property(copy, nonatomic) NSString *strEndtime; // @synthesize strEndtime=_strEndtime;
@property(copy, nonatomic) NSString *strBegintime; // @synthesize strBegintime=_strBegintime;
@property(copy, nonatomic) NSString *statusStr; // @synthesize statusStr=_statusStr;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long purchaseamount; // @synthesize purchaseamount=_purchaseamount;
@property(nonatomic) long long orderdate; // @synthesize orderdate=_orderdate;
@property(nonatomic) long long mtime; // @synthesize mtime=_mtime;
@property(nonatomic) long long lastupdate; // @synthesize lastupdate=_lastupdate;
@property(nonatomic) long long isdel; // @synthesize isdel=_isdel;
@property(nonatomic) long long isBuy; // @synthesize isBuy=_isBuy;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(nonatomic) long long ctime; // @synthesize ctime=_ctime;
@property(nonatomic) long long contentnum; // @synthesize contentnum=_contentnum;
@property(nonatomic) long long dateEndtime; // @synthesize dateEndtime=_dateEndtime;
@property(nonatomic) long long endtime; // @synthesize endtime=_endtime;
@property(nonatomic) long long dateBegintime; // @synthesize dateBegintime=_dateBegintime;
@property(nonatomic) long long begintime; // @synthesize begintime=_begintime;
- (void).cxx_destruct;

@end

