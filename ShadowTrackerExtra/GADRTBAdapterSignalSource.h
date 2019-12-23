//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADSignal.h"
#import "GADSignalSource.h"

@class GADRTBRequestParameters, NSMutableDictionary, NSString;

@interface GADRTBAdapterSignalSource : NSObject <GADSignalSource, GADSignal>
{
    id <GADRTBAdapter> _adapter;
    GADRTBRequestParameters *_requestParameters;
    NSMutableDictionary *_adapterSignals;
}

- (void).cxx_destruct;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
- (void)getSignalUpdateQueue:(id *)arg1 signalCreationBlock:(CDUnknownBlockType *)arg2;
- (id)adapterSignals;
- (id)initWithRTBAdapter:(id)arg1 targeting:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
