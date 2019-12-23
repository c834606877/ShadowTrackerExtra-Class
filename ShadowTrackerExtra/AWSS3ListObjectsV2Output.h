//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber, NSString;

@interface AWSS3ListObjectsV2Output : AWSModel
{
    NSArray *_commonPrefixes;
    NSArray *_contents;
    NSString *_continuationToken;
    NSString *_delimiter;
    long long _encodingType;
    NSNumber *_isTruncated;
    NSNumber *_keyCount;
    NSNumber *_maxKeys;
    NSString *_name;
    NSString *_nextContinuationToken;
    NSString *_prefix;
    NSString *_startAfter;
}

+ (id)encodingTypeJSONTransformer;
+ (id)contentsJSONTransformer;
+ (id)commonPrefixesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *startAfter; // @synthesize startAfter=_startAfter;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *nextContinuationToken; // @synthesize nextContinuationToken=_nextContinuationToken;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *maxKeys; // @synthesize maxKeys=_maxKeys;
@property(retain, nonatomic) NSNumber *keyCount; // @synthesize keyCount=_keyCount;
@property(retain, nonatomic) NSNumber *isTruncated; // @synthesize isTruncated=_isTruncated;
@property(nonatomic) long long encodingType; // @synthesize encodingType=_encodingType;
@property(retain, nonatomic) NSString *delimiter; // @synthesize delimiter=_delimiter;
@property(retain, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSArray *commonPrefixes; // @synthesize commonPrefixes=_commonPrefixes;
- (void).cxx_destruct;

@end

