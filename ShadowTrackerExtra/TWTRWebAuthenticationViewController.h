//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, NSURL, TWTRLoginURLParser, TwitterUserAPIClient;

@interface TWTRWebAuthenticationViewController : UIViewController
{
    _Bool _useWebFlow;
    CDUnknownBlockType _completion;
    NSString *_authenticationToken;
    TwitterUserAPIClient *_APIClient;
    id <TWTRAPIServiceConfig> _APIServiceConfig;
    NSURL *_authURL;
    TWTRLoginURLParser *_loginURLParser;
}

@property(readonly, nonatomic) _Bool useWebFlow; // @synthesize useWebFlow=_useWebFlow;
@property(readonly, nonatomic) TWTRLoginURLParser *loginURLParser; // @synthesize loginURLParser=_loginURLParser;
@property(readonly, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
@property(readonly, nonatomic) id <TWTRAPIServiceConfig> APIServiceConfig; // @synthesize APIServiceConfig=_APIServiceConfig;
@property(readonly, nonatomic) TwitterUserAPIClient *APIClient; // @synthesize APIClient=_APIClient;
@property(readonly, copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)succeedWithSession:(id)arg1;
- (void)handleCancelButton;
- (void)requestAccessTokenWithVerifier:(id)arg1;
- (void)handleAuthResponseWithURL:(id)arg1;
- (void)handleTwitterRedirectRequest:(id)arg1;
- (void)embedViewController:(id)arg1;
- (id)webViewController;
- (id)safariViewController;
- (id)webController;
- (void)viewDidLoad;
- (id)initWithAuthenticationToken:(id)arg1 authConfig:(id)arg2 APIServiceConfig:(id)arg3 hasExistingSession:(_Bool)arg4;

@end

