//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADEventContextSource.h"

@class GADEventContext, GADWebViewConfiguration, NSString, NSURL, UIView<GADWebView>;

@interface GADWebViewController : NSObject <GADEventContextSource>
{
    GADEventContext *_context;
    UIView<GADWebView> *_webView;
    id _underlyingWebView;
    id <GADWebViewControllerDelegate> _delegate;
    GADWebViewConfiguration *_configuration;
    NSURL *_mainDocumentURL;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSURL *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property(readonly, nonatomic) GADWebViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <GADWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id underlyingWebView; // @synthesize underlyingWebView=_underlyingWebView;
@property(readonly, nonatomic) UIView<GADWebView> *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
@property(readonly, nonatomic) GADEventContext *context;
- (id)initWithFrame:(struct CGRect)arg1 eventContext:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

