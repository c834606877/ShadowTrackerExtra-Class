//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSS3CompleteMultipartUploadOutput : AWSModel
{
    NSString *_bucket;
    NSString *_ETag;
    NSString *_expiration;
    NSString *_key;
    NSString *_location;
    long long _requestCharged;
    NSString *_SSEKMSKeyId;
    long long _serverSideEncryption;
    NSString *_versionId;
}

+ (id)serverSideEncryptionJSONTransformer;
+ (id)requestChargedJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(nonatomic) long long serverSideEncryption; // @synthesize serverSideEncryption=_serverSideEncryption;
@property(retain, nonatomic) NSString *SSEKMSKeyId; // @synthesize SSEKMSKeyId=_SSEKMSKeyId;
@property(nonatomic) long long requestCharged; // @synthesize requestCharged=_requestCharged;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *ETag; // @synthesize ETag=_ETag;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

