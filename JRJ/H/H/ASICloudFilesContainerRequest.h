//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASICloudFilesRequest.h"

@class ASICloudFilesContainer, ASICloudFilesContainerXMLParserDelegate, NSString;

@interface ASICloudFilesContainerRequest : ASICloudFilesRequest
{
    NSString *currentContent;
    NSString *currentElement;
    ASICloudFilesContainer *currentObject;
    ASICloudFilesContainerXMLParserDelegate *xmlParserDelegate;
}

+ (id)deleteContainerRequest:(id)arg1;
+ (id)createContainerRequest:(id)arg1;
+ (id)listRequest;
+ (id)listRequestWithLimit:(unsigned long long)arg1 marker:(id)arg2;
+ (id)accountInfoRequest;
+ (id)storageRequestWithMethod:(id)arg1;
+ (id)storageRequestWithMethod:(id)arg1 queryString:(id)arg2;
+ (id)storageRequestWithMethod:(id)arg1 containerName:(id)arg2 queryString:(id)arg3;
@property(retain) ASICloudFilesContainerXMLParserDelegate *xmlParserDelegate; // @synthesize xmlParserDelegate;
@property(retain) ASICloudFilesContainer *currentObject; // @synthesize currentObject;
@property(retain) NSString *currentContent; // @synthesize currentContent;
@property(retain) NSString *currentElement; // @synthesize currentElement;
- (void)dealloc;
- (id)containers;
- (unsigned long long)bytesUsed;
- (unsigned long long)containerCount;

@end

