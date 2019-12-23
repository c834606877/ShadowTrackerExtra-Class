//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdRendering.h"
#import "GADMAdNetworkConnector.h"

@class GADServerTransaction, NSString;

@interface GADMediatedAdRenderer : NSObject <GADAdRendering, GADMAdNetworkConnector>
{
    GADServerTransaction *_transaction;
    struct NSDictionary *_adConfiguration;
    id <GADMAdNetworkAdapter> _adapter;
}

- (void).cxx_destruct;
- (void)adapter:(id)arg1 clickDidOccurInBanner:(id)arg2;
- (void)adapter:(id)arg1 didFailInterstitial:(id)arg2;
- (void)adapter:(id)arg1 didReceiveInterstitial:(id)arg2;
- (void)adapterDidGetAdClick:(id)arg1;
- (void)adapterWillLeaveApplication:(id)arg1;
- (void)adapterDidDismissFullScreenModal:(id)arg1;
- (void)adapterWillDismissFullScreenModal:(id)arg1;
- (void)adapterWillPresentFullScreenModal:(id)arg1;
- (void)adapter:(id)arg1 didReceiveAdView:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedUnifiedNativeAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (void)adapterDidDismissInterstitial:(id)arg1;
- (void)adapterWillDismissInterstitial:(id)arg1;
- (void)adapterWillPresentInterstitial:(id)arg1;
- (void)adapterDidReceiveInterstitial:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (_Bool)adMuted;
- (float)adVolume;
- (id)userKeywords;
- (id)userLocationDescription;
- (double)userLocationAccuracyInMeters;
- (double)userLongitude;
- (double)userLatitude;
- (_Bool)userHasLocation;
- (id)userBirthday;
- (long long)userGender;
- (id)underAgeOfConsent;
- (id)maxAdContentRating;
- (id)childDirectedTreatment;
- (id)networkExtras;
- (_Bool)testMode;
- (id)credentials;
- (id)publisherId;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (Class)mainAdapterClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

