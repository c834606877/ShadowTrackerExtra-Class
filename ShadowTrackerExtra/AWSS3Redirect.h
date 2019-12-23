//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSS3Redirect : AWSModel
{
    NSString *_hostName;
    NSString *_httpRedirectCode;
    long long _protocols;
    NSString *_replaceKeyPrefixWith;
    NSString *_replaceKeyWith;
}

+ (id)protocolsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *replaceKeyWith; // @synthesize replaceKeyWith=_replaceKeyWith;
@property(retain, nonatomic) NSString *replaceKeyPrefixWith; // @synthesize replaceKeyPrefixWith=_replaceKeyPrefixWith;
@property(nonatomic) long long protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) NSString *httpRedirectCode; // @synthesize httpRedirectCode=_httpRedirectCode;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;

@end

