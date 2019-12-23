//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3Destination, NSString;

@interface AWSS3ReplicationRule : AWSModel
{
    AWSS3Destination *_destination;
    NSString *_identifier;
    NSString *_prefix;
    long long _status;
}

+ (id)statusJSONTransformer;
+ (id)destinationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AWSS3Destination *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;

@end

