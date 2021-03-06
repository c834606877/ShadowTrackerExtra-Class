//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString;
@protocol MidasWebViewDelegate;

@interface MidasWebView : UIWebView <UIWebViewDelegate, UIScrollViewDelegate>
{
    _Bool _isLoadingOverLimitedTime;
    id <MidasWebViewDelegate> _webViewDelegate;
    NSString *_URL;
    NSString *_title;
    NSString *_userAgent;
    unsigned long long _cachePolicy;
    NSString *_mainDocumentURL;
}

@property(nonatomic) _Bool isLoadingOverLimitedTime; // @synthesize isLoadingOverLimitedTime=_isLoadingOverLimitedTime;
@property(copy, nonatomic) NSString *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <MidasWebViewDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_overLimitedTimeHandler:(id)arg1;
- (void)_executeViewRelatedJS;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
- (void)reload;
- (void)load;
- (id)initWithDelegate:(id)arg1 URL:(id)arg2 title:(id)arg3 cachePolicy:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

