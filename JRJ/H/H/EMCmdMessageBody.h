//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EMMessageBody.h"

@class NSArray, NSString;

@interface EMCmdMessageBody : EMMessageBody
{
    shared_ptr_6e79b2ca _coreBody;
}

@property(nonatomic) shared_ptr_6e79b2ca coreBody; // @synthesize coreBody=_coreBody;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_6e79b2ca)getCoreBody;
- (id)initWithCoreBodyPtr:(shared_ptr_6e79b2ca)arg1;
@property(copy, nonatomic) NSArray *params;
@property(copy, nonatomic) NSString *action;
- (int)type;
- (id)initWithAction:(id)arg1;

@end

