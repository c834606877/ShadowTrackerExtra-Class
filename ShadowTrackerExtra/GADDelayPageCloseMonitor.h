//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAd, GADObserverCollection;

@interface GADDelayPageCloseMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADAd *_ad;
    GADAd *_strongAd;
    long long _timeoutIdentifier;
}

- (void).cxx_destruct;
- (void)handleDelayPageCloseNotification:(id)arg1;
- (void)handleDelayPageCloseTimeout:(long long)arg1;
- (id)initWithAd:(id)arg1 messageSource:(id)arg2;

@end

