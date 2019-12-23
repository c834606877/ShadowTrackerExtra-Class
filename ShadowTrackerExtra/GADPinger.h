//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADObserverCollection, GADURLSession, GADWebViewPinger, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface GADPinger : NSObject
{
    GADURLSession *_pingerSession;
    GADWebViewPinger *_webViewPinger;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableSet *_activeRetryURLStrings;
    GADObserverCollection *_observers;
    double _lastRetryAttemptInterval;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)pingRetryURLs;
- (void)removeURLStringFromPendingRetryRequests:(id)arg1;
- (void)savePendingRetryURLStrings:(id)arg1;
- (id)pendingRetryURLStrings;
- (void)pingRetryURLInternal:(id)arg1;
- (void)storeRetryURL:(id)arg1;
- (void)pingRequest:(id)arg1 context:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)pingURL:(id)arg1 context:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)pingRetryURLsIfTimeElapsed;
- (id)init;

@end
