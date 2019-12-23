//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsDomain, HsHTTPBackoff, NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface HsRetriableEventsDM : NSObject
{
    _Bool _batcherScheduled;
    _Bool _shouldScheduleAuthenticatedEvent;
    HsDomain *_domain;
    id <HsPlatform> _platform;
    NSMapTable *_listeners;
    NSMutableSet *_pendingRetryTypes;
    HsHTTPBackoff *_backoff;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

@property _Bool shouldScheduleAuthenticatedEvent; // @synthesize shouldScheduleAuthenticatedEvent=_shouldScheduleAuthenticatedEvent;
@property(retain) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property _Bool batcherScheduled; // @synthesize batcherScheduled=_batcherScheduled;
@property(retain) HsHTTPBackoff *backoff; // @synthesize backoff=_backoff;
@property(retain) NSMutableSet *pendingRetryTypes; // @synthesize pendingRetryTypes=_pendingRetryTypes;
@property(retain) NSMapTable *listeners; // @synthesize listeners=_listeners;
@property(retain) id <HsPlatform> platform; // @synthesize platform=_platform;
@property(retain) HsDomain *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)resetBackoff;
- (_Bool)canRetryEventForType:(unsigned long long)arg1;
- (_Bool)isAuthenticatedType:(unsigned long long)arg1;
- (unsigned long long)typeForRetriableKey:(id)arg1;
- (id)keyForRetriableType:(unsigned long long)arg1;
- (void)retryFailedEvents;
- (void)scheduleRetriesWithStatus:(long long)arg1;
- (void)scheduleRetryForType:(unsigned long long)arg1;
- (void)sendAllEvents;
- (void)scheduleRetryForType:(unsigned long long)arg1 statusCode:(long long)arg2;
- (void)registerRetriableDM:(id)arg1 forRetriableType:(unsigned long long)arg2;
- (void)userAuthenticationTokenUpdated;
- (id)initWithDomain:(id)arg1 platform:(id)arg2;

@end

