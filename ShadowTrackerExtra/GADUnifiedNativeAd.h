//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADInternalNativeAd, GADMediaContent, GADNativeAdImage, GADObserverCollection, GADResponseInfo, GADVideoController, NSArray, NSDecimalNumber, NSDictionary, NSString, UIView, UIViewController;

@interface GADUnifiedNativeAd : NSObject
{
    GADObserverCollection *_adObservers;
    _Bool _mediaContentStatusReported;
    _Bool _mediaContentRendered;
    UIView *_adChoicesContentView;
    _Bool _adMutedReported;
    _Bool _customClickGestureEnabledByPublisher;
    id <GADUnifiedNativeAdUnconfirmedClickDelegate> _unconfirmedClickDelegate;
    _Bool _customClickGestureEnabled;
    id <GADUnifiedNativeAdDelegate> _delegate;
    UIViewController *_rootViewController;
    GADMediaContent *_mediaContent;
    GADVideoController *_videoController;
    GADInternalNativeAd *_internalNativeAd;
}

@property(readonly, nonatomic) GADInternalNativeAd *internalNativeAd; // @synthesize internalNativeAd=_internalNativeAd;
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) GADMediaContent *mediaContent; // @synthesize mediaContent=_mediaContent;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <GADUnifiedNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isCustomClickGestureEnabled;
- (void)recordCustomClickGesture;
- (void)enableCustomClickGestures;
- (void)setUnconfirmedClickDelegate:(id)arg1;
- (id)unconfirmedClickDelegate;
- (void)cancelUnconfirmedClick;
- (void)registerClickConfirmingView:(id)arg1;
- (void)didCancelUnconfirmedClick;
- (void)adIsMuted;
- (void)unregisterAdView;
- (void)updateMediaView:(id)arg1;
- (void)updateAdChoicesView:(id)arg1;
- (void)registerAdView:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3;
- (void)muteThisAdWithReason:(id)arg1;
- (_Bool)recordImpressionWithData:(id)arg1;
- (void)reportTouchEventWithData:(id)arg1;
- (void)performClickWithData:(id)arg1;
- (void)postDidMakeImpressionNotificationWithUserInfo:(id)arg1;
- (void)postDidReceiveUnapprovedClickNotificationWithUserInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *extraAssets;
@property(readonly, nonatomic) UIView *adChoicesContentView;
- (id)internalMediaContent;
- (void)reportIsMediaContentRendered:(_Bool)arg1;
@property(readonly, nonatomic, getter=isCustomMuteThisAdAvailable) _Bool customMuteThisAdAvailable;
@property(readonly, nonatomic) GADNativeAdImage *adChoicesIcon;
@property(readonly, copy, nonatomic) NSDecimalNumber *starRating;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) NSArray *muteThisAdReasons;
@property(readonly, copy, nonatomic) NSString *advertiser;
@property(readonly, copy, nonatomic) NSString *price;
@property(readonly, copy, nonatomic) NSString *store;
@property(readonly, copy, nonatomic) NSString *body;
@property(readonly, nonatomic) GADNativeAdImage *icon;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, copy, nonatomic) NSString *headline;
@property(readonly, copy, nonatomic) NSString *adNetworkClassName;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
- (void)dealloc;
- (id)init;
- (id)initWithInternalNativeAd:(id)arg1;

@end

