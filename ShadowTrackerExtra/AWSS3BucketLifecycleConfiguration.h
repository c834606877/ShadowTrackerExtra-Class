//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray;

@interface AWSS3BucketLifecycleConfiguration : AWSModel
{
    NSArray *_rules;
}

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *rules; // @synthesize rules=_rules;
- (void).cxx_destruct;

@end

