//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSCognitoCredentialsProvider, NSDictionary;

@interface AWSServiceInfo : NSObject
{
    AWSCognitoCredentialsProvider *_cognitoCredentialsProvider;
    long long _region;
    NSDictionary *_infoDictionary;
}

@property(retain, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly, nonatomic) long long region; // @synthesize region=_region;
@property(readonly, nonatomic) AWSCognitoCredentialsProvider *cognitoCredentialsProvider; // @synthesize cognitoCredentialsProvider=_cognitoCredentialsProvider;
- (void).cxx_destruct;
- (id)initWithInfoDictionary:(id)arg1 checkRegion:(_Bool)arg2;

@end

