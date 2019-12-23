//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsFaqDbObserver.h"

@class NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HsFaqSearchController : NSObject <HsFaqDbObserver>
{
    id <HsSpecification> _faqSyncSpecification;
    _Bool _indexingStarted;
    NSMutableSet *_searchIndexObservers;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSDictionary *_fuzzyIndex;
    NSString *_tfidfDbPath;
}

@property(retain, nonatomic) NSString *tfidfDbPath; // @synthesize tfidfDbPath=_tfidfDbPath;
@property(retain, nonatomic) NSDictionary *fuzzyIndex; // @synthesize fuzzyIndex=_fuzzyIndex;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSMutableSet *searchIndexObservers; // @synthesize searchIndexObservers=_searchIndexObservers;
@property(nonatomic) _Bool indexingStarted; // @synthesize indexingStarted=_indexingStarted;
- (void).cxx_destruct;
- (void)notifyObservers;
- (void)dataUpdationFailedForFaqPublishId:(id)arg1 error:(id)arg2;
- (void)noChangeInDataForFaqPublishId:(id)arg1;
- (void)dataUpdatedForFaqPublishId:(id)arg1;
- (id)getFuzzyIndex;
- (void)setOnDeviceFaqSearchOption:(short)arg1;
- (void)updateCoreSpotlightSearchOptionFrom:(short)arg1 to:(short)arg2;
- (void)createIndexesForFaqArray:(id)arg1;
- (void)removeCoreSpotlightSearchIndex;
- (void)addFaqsToCoreSpotlight:(id)arg1;
- (void)unregisterSearchIndexUpdateListener:(id)arg1;
- (void)registerSearchIndexUpdateListener:(id)arg1;
- (void)createFAQSearchIndex;
- (id)createSearchIndex:(id)arg1;
- (id)loadSearchIndex;
- (id)matchedRangesForKeywords:(id)arg1 onString:(id)arg2;
- (id)faqSearchResultTitleArray:(id)arg1 withSearchOptions:(int)arg2 withTagsFilter:(id)arg3;
- (id)faqSearchResultTitleArray:(id)arg1 withSearchOptions:(int)arg2;
- (id)getFAQSearchResultsForQuery:(id)arg1 withSearchOptions:(int)arg2;
- (id)backupSearchForQuery:(id)arg1;
- (id)getFAQSearchIndex;
- (id)mutableSetForWeakReferencedObjects;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

