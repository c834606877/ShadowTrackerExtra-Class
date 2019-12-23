//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TWTRAuthenticationProvider.h"

@class NSString, TWTRAuthConfig, TwitterAppAPIClient;

@interface TWTRGuestAuthProvider : TWTRAuthenticationProvider
{
    id <TWTRAPIServiceConfig> _apiServiceConfig;
    TWTRAuthConfig *_authConfig;
    NSString *_accessToken;
    TwitterAppAPIClient *_appAPIClient;
}

@property(retain, nonatomic) TwitterAppAPIClient *appAPIClient; // @synthesize appAPIClient=_appAPIClient;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) TWTRAuthConfig *authConfig; // @synthesize authConfig=_authConfig;
@property(readonly, nonatomic) id <TWTRAPIServiceConfig> apiServiceConfig; // @synthesize apiServiceConfig=_apiServiceConfig;
- (void).cxx_destruct;
- (id)guestAuthResponseFromValidationResponseDictionary:(id)arg1;
- (id)activateNewGuestTokenRequest;
- (void)authenticateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAuthConfig:(id)arg1 apiServiceConfig:(id)arg2 accessToken:(id)arg3;

@end

