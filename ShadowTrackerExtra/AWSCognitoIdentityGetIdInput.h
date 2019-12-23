//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSDictionary, NSString;

@interface AWSCognitoIdentityGetIdInput : AWSRequest
{
    NSString *_accountId;
    NSString *_identityPoolId;
    NSDictionary *_logins;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *logins; // @synthesize logins=_logins;
@property(retain, nonatomic) NSString *identityPoolId; // @synthesize identityPoolId=_identityPoolId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;

@end

