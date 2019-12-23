//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBDisplayAdAdapter.h"

#import "FBVideoAdControllerDelegate.h"

@class FBAdExtraHint, FBInstreamAdDataModel, FBVideoAdContentView, FBVideoAdController, NSString;

@interface FBANInstreamAdAdapter : FBDisplayAdAdapter <FBVideoAdControllerDelegate>
{
    FBInstreamAdDataModel *_dataModel;
    NSString *_placementID;
    FBVideoAdController *_videoAdController;
    FBAdExtraHint *_extraHint;
}

@property(retain, nonatomic) FBAdExtraHint *extraHint; // @synthesize extraHint=_extraHint;
@property(readonly, nonatomic) FBVideoAdController *videoAdController; // @synthesize videoAdController=_videoAdController;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
@property(retain, nonatomic) FBInstreamAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)controllerDidUnload:(id)arg1;
- (void)controllerDidClick:(id)arg1;
- (void)controllerWillRegisterViewableImpression:(id)arg1;
- (void)controller:(id)arg1 didFailWithError:(id)arg2;
- (void)controllerDidLoad:(id)arg1;
- (_Bool)startAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)startAdFromRootViewController:(id)arg1;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (id)adDataModel;
- (void)loadAdData:(id)arg1 placementDefinition:(id)arg2;
- (void)loadAdData:(id)arg1 forSize:(struct FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 placementDefinition:(id)arg5 dataModelType:(id)arg6 rewardData:(id)arg7 extraHint:(id)arg8;
@property(retain, nonatomic) FBVideoAdContentView *adView; // @dynamic adView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

