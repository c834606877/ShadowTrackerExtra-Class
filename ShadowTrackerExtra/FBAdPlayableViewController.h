//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdPlayableViewDelegate-Protocol.h"
#import "FBAdReportingCoordinatorDelegate-Protocol.h"

@class FBAdPlayableView, FBAdReportingCoordinator, FBAdTimer, FBPlayableIntroScreenView, NSString, NSURL;
@protocol FBAdPlayableViewControllerDelegate;

@interface FBAdPlayableViewController : UIViewController <FBAdReportingCoordinatorDelegate, FBAdPlayableViewDelegate>
{
    _Bool _hasAppearedBefore;
    NSString *_markup;
    id <FBAdPlayableViewControllerDelegate> _delegate;
    FBAdPlayableView *_playableView;
    FBPlayableIntroScreenView *_playableIntroScreenView;
    FBAdTimer *_dismissIntroScreenTimer;
    FBAdReportingCoordinator *_reportingCoordinator;
    NSURL *_unzipURL;
}

+ (void)initialize;
@property(copy, nonatomic) NSURL *unzipURL; // @synthesize unzipURL=_unzipURL;
@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property(nonatomic) _Bool hasAppearedBefore; // @synthesize hasAppearedBefore=_hasAppearedBefore;
@property(retain, nonatomic) FBAdTimer *dismissIntroScreenTimer; // @synthesize dismissIntroScreenTimer=_dismissIntroScreenTimer;
@property(nonatomic) __weak FBPlayableIntroScreenView *playableIntroScreenView; // @synthesize playableIntroScreenView=_playableIntroScreenView;
@property(nonatomic) __weak FBAdPlayableView *playableView; // @synthesize playableView=_playableView;
@property(nonatomic) __weak id <FBAdPlayableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *markup; // @synthesize markup=_markup;
- (void).cxx_destruct;
- (void)adReportingCoordinatorDidCancelFlow:(id)arg1;
- (void)adReportingCoordinatorDidCloseWhyAmISeeingThis:(id)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3;
- (void)playableViewDidTerminate:(id)arg1;
- (void)playableViewWillClose:(id)arg1;
- (void)playableViewClicked:(id)arg1;
- (void)playableViewDidCompleteForcedView:(id)arg1;
- (void)playableViewWillLogImpression:(id)arg1;
- (void)playableView:(id)arg1 didFailWithError:(id)arg2;
- (void)notifyDelegateOfFailureWithError:(id)arg1;
- (void)notifyDelegateOfSuccess;
- (void)setupNotifications;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)fetchMarkup;
- (void)fetchZip;
- (void)unpackWithLocalURL:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (_Bool)unpackZipWithLocalURL:(id)arg1;
- (id)urlForPlayableZip:(id)arg1;
- (void)loadPlayableAd;
@property(readonly, nonatomic, getter=isTerminated) _Bool terminated;
- (void)dismissIntroCard;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithPlacementID:(id)arg1 adData:(id)arg2 placementDefinition:(id)arg3 rootViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

