//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface JRJReferenceViewpoint : MTLModel <MTLJSONSerializing>
{
    NSString *_viewpointId;
    NSString *_content;
    NSString *_createdAtString;
    NSArray *_images;
    NSString *_referenceId;
    NSString *_userId;
    double _cachedHeight;
    NSString *_html;
    NSString *_riskDesc;
}

+ (id)imagesJSONTransformer;
+ (id)contentJSONTransformer;
+ (id)referenceIdJSONTransformer;
+ (id)viewpointIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *riskDesc; // @synthesize riskDesc=_riskDesc;
@property(copy, nonatomic) NSString *html; // @synthesize html=_html;
@property(nonatomic) double cachedHeight; // @synthesize cachedHeight=_cachedHeight;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *referenceId; // @synthesize referenceId=_referenceId;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *createdAtString; // @synthesize createdAtString=_createdAtString;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *viewpointId; // @synthesize viewpointId=_viewpointId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

