//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RNCryptManager : NSObject
{
}

+ (id)decryptedDataForData:(id)arg1 password:(id)arg2 iv:(id)arg3 salt:(id)arg4 error:(id *)arg5;
+ (id)encryptedDataForData:(id)arg1 password:(id)arg2 iv:(id *)arg3 salt:(id *)arg4 error:(id *)arg5;
+ (_Bool)decryptFromStream:(id)arg1 toStream:(id)arg2 password:(id)arg3 error:(id *)arg4;
+ (_Bool)encryptFromStream:(id)arg1 toStream:(id)arg2 password:(id)arg3 error:(id *)arg4;
+ (_Bool)applyOperation:(unsigned int)arg1 fromStream:(id)arg2 toStream:(id)arg3 password:(id)arg4 error:(id *)arg5;
+ (_Bool)processResult:(int)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 toStream:(id)arg4 error:(id *)arg5;
+ (id)AESKeyForPassword:(id)arg1 salt:(id)arg2;
+ (id)randomDataOfLength:(unsigned long long)arg1;

@end

