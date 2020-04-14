//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BaseModel, HTURLRequest, JRJResponseModel, NSArray, NSDictionary;

@protocol JRJResponseSerialization <NSObject>
- (_Bool)isValideResponse:(HTURLRequest *)arg1 responseObject:(JRJResponseModel *)arg2;
- (id)responseObjectForResponse:(HTURLRequest *)arg1 responseObject:(JRJResponseModel *)arg2 error:(id *)arg3;

@optional
- (long long)lastModelId;
- (BaseModel *)lastModel;
- (NSArray *)viewModelOfClass:(Class)arg1 fromModelArray:(NSArray *)arg2 modelClass:(Class)arg3;
- (NSArray *)viewModelOfClass:(Class)arg1 fromModelArray:(NSArray *)arg2;
- (NSArray *)modelsOfClass:(Class)arg1 fromJSONArray:(NSArray *)arg2 error:(id *)arg3;
- (id)modelOfClass:(Class)arg1 fromJSONDictionary:(NSDictionary *)arg2 error:(id *)arg3;
- (_Bool)hasResponseData:(HTURLRequest *)arg1;
- (_Bool)isNeedAutoLoadingResponse:(HTURLRequest *)arg1;
- (Class)responseClass:(HTURLRequest *)arg1;
- (_Bool)isCacheResponse:(HTURLRequest *)arg1;
@end

