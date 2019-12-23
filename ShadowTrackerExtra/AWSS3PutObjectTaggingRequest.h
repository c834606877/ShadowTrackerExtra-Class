//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3Tagging, NSString;

@interface AWSS3PutObjectTaggingRequest : AWSRequest
{
    NSString *_bucket;
    NSString *_contentMD5;
    NSString *_key;
    AWSS3Tagging *_tagging;
    NSString *_versionId;
}

+ (id)taggingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(retain, nonatomic) AWSS3Tagging *tagging; // @synthesize tagging=_tagging;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *contentMD5; // @synthesize contentMD5=_contentMD5;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

