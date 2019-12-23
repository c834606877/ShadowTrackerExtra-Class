//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBRewardedVideoAdDelegate.h"
#import "GADMediationRewardedAd.h"

@class FBRewardedVideoAd, NSString;

@interface GADFBRewardedRenderer : NSObject <GADMediationRewardedAd, FBRewardedVideoAdDelegate>
{
    CDUnknownBlockType _adLoadCompletionHandler;
    FBRewardedVideoAd *_rewardedAd;
    id <GADMediationRewardedAdEventDelegate> _adEventDelegate;
    _Bool _isRTBRequest;
}

- (void).cxx_destruct;
- (void)presentFromViewController:(id)arg1;
- (void)rewardedVideoAdWillLogImpression:(id)arg1;
- (void)rewardedVideoAdVideoComplete:(id)arg1;
- (void)rewardedVideoAdWillClose:(id)arg1;
- (void)rewardedVideoAdDidClose:(id)arg1;
- (void)rewardedVideoAdDidClick:(id)arg1;
- (void)rewardedVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdDidLoad:(id)arg1;
- (void)loadRewardedAdForAdConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
