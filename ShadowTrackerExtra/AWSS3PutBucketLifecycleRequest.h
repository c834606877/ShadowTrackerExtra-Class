//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3LifecycleConfiguration, NSString;

@interface AWSS3PutBucketLifecycleRequest : AWSRequest
{
    NSString *_bucket;
    NSString *_contentMD5;
    AWSS3LifecycleConfiguration *_lifecycleConfiguration;
}

+ (id)lifecycleConfigurationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWSS3LifecycleConfiguration *lifecycleConfiguration; // @synthesize lifecycleConfiguration=_lifecycleConfiguration;
@property(retain, nonatomic) NSString *contentMD5; // @synthesize contentMD5=_contentMD5;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

