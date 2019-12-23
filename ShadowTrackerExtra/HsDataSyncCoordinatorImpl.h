//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsDataSyncCoordinator.h"

@class NSString;

@interface HsDataSyncCoordinatorImpl : NSObject <HsDataSyncCoordinator>
{
    id <HsKeyValueStorage> _storage;
    id <HsDataSyncCompletionListener> _dataSyncCompletionListener;
}

@property(retain, nonatomic) id <HsDataSyncCompletionListener> dataSyncCompletionListener; // @synthesize dataSyncCompletionListener=_dataSyncCompletionListener;
@property(retain, nonatomic) id <HsKeyValueStorage> storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)switchCompletedForUser:(id)arg1;
- (void)switchRequiredForUser:(id)arg1;
- (void)firstDeviceSyncComplete;
- (_Bool)isFirstDeviceSyncComplete;
- (_Bool)canSyncSessionPropertiesForUser:(id)arg1;
- (_Bool)canSyncUserPropertiesForUser:(id)arg1;
- (_Bool)canSyncPropertiesForUser:(id)arg1;
- (id)initWithKVStorage:(id)arg1 andDataSyncListener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

