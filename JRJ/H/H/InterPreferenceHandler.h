//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseHandler.h"

@interface InterPreferenceHandler : BaseHandler
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _subBlock;
}

@property(copy, nonatomic) CDUnknownBlockType subBlock; // @synthesize subBlock=_subBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)ItemAryWith:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 responseObject:(id)arg2 error:(id *)arg3;
- (void)getInterReference:(long long)arg1 type:(long long)arg2 num:(long long)arg3 requestFinish:(CDUnknownBlockType)arg4 cacheBlock:(CDUnknownBlockType)arg5;

@end

