//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface UserDetailsVCModel : NSObject
{
    NSNumber *_msg_id;
    NSString *_stock_code;
    NSString *_stock_name;
    NSNumber *_add_price;
    NSString *_stockid;
    NSString *_mrkt;
    NSString *_ctime;
    NSString *_utime;
    NSNumber *_add_price_after_right;
    NSNumber *_inMyStock;
    NSString *_userid;
    NSString *_profit;
    NSNumber *_dayNum;
}

+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSNumber *dayNum; // @synthesize dayNum=_dayNum;
@property(copy, nonatomic) NSString *profit; // @synthesize profit=_profit;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(retain, nonatomic) NSNumber *inMyStock; // @synthesize inMyStock=_inMyStock;
@property(retain, nonatomic) NSNumber *add_price_after_right; // @synthesize add_price_after_right=_add_price_after_right;
@property(copy, nonatomic) NSString *utime; // @synthesize utime=_utime;
@property(copy, nonatomic) NSString *ctime; // @synthesize ctime=_ctime;
@property(copy, nonatomic) NSString *mrkt; // @synthesize mrkt=_mrkt;
@property(copy, nonatomic) NSString *stockid; // @synthesize stockid=_stockid;
@property(retain, nonatomic) NSNumber *add_price; // @synthesize add_price=_add_price;
@property(copy, nonatomic) NSString *stock_name; // @synthesize stock_name=_stock_name;
@property(copy, nonatomic) NSString *stock_code; // @synthesize stock_code=_stock_code;
@property(retain, nonatomic) NSNumber *msg_id; // @synthesize msg_id=_msg_id;
- (void).cxx_destruct;

@end

