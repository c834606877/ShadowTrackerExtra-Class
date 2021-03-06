//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRTimelineDataSource-Protocol.h"

@class NSString, TWTRAPIClient, TWTRTimelineFilter, TWTRTimelineFilterManager;

@interface TWTRCollectionTimelineDataSource : NSObject <TWTRTimelineDataSource>
{
    TWTRAPIClient *_APIClient;
    long long _maxTweetsPerRequest;
    NSString *_collectionID;
    TWTRTimelineFilter *_timelineFilter;
    TWTRTimelineFilterManager *_timelineFilterManager;
}

@property(retain, nonatomic) TWTRTimelineFilterManager *timelineFilterManager; // @synthesize timelineFilterManager=_timelineFilterManager;
@property(copy, nonatomic) TWTRTimelineFilter *timelineFilter; // @synthesize timelineFilter=_timelineFilter;
@property(readonly, copy, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
@property(readonly, nonatomic) long long maxTweetsPerRequest; // @synthesize maxTweetsPerRequest=_maxTweetsPerRequest;
@property(retain, nonatomic) TWTRAPIClient *APIClient; // @synthesize APIClient=_APIClient;
- (void).cxx_destruct;
- (id)queryParametersWithMaxPosition:(id)arg1;
@property(readonly, nonatomic) unsigned long long timelineType;
- (void)loadPreviousTweetsBeforePosition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCollectionID:(id)arg1 APIClient:(id)arg2 maxTweetsPerRequest:(unsigned long long)arg3;
- (id)initWithCollectionID:(id)arg1 APIClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

