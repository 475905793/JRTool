//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EMMessageBody.h"

@class NSString;

@interface EMTextMessageBody : EMMessageBody
{
    shared_ptr_65681646 _coreBody;
}

@property(nonatomic) shared_ptr_65681646 coreBody; // @synthesize coreBody=_coreBody;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_65681646)getCoreBody;
- (id)initWithCoreBodyPtr:(shared_ptr_65681646)arg1;
@property(readonly, copy, nonatomic) NSString *text;
- (int)type;
- (id)initWithText:(id)arg1;

@end

