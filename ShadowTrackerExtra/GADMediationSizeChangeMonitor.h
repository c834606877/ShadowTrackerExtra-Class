//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADCroppingAdView, GADObserverCollection;

@interface GADMediationSizeChangeMonitor : NSObject
{
    GADCroppingAdView *_croppingView;
    id _delegate;
    GADObserverCollection *_observers;
}

+ (void)addMonitorToAd:(id)arg1 containerView:(id)arg2 croppingView:(id)arg3 delegate:(id)arg4;
- (void).cxx_destruct;
- (id)initWithContainerView:(id)arg1 croppingView:(id)arg2 delegate:(id)arg3;

@end

