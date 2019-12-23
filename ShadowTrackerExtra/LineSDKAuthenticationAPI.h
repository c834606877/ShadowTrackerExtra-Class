//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LineSDKConfiguration;

@interface LineSDKAuthenticationAPI : NSObject
{
    LineSDKConfiguration *_configuration;
}

@property(retain, nonatomic) LineSDKConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)revokeAccessToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyWithAccessToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshAccessTokenWithAccessToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)issueAccessTokenWithRequestToken:(id)arg1 oneTimePassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)urlForIssueRequestTokenByWebViewWithOneTimePassword:(id)arg1 permissions:(id)arg2;
- (id)urlForIssueRequestTokenByLineAppWithOneTimePassword:(id)arg1 permissions:(id)arg2;
- (void)issueOTP:(CDUnknownBlockType)arg1;
- (void)sendWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

@end
