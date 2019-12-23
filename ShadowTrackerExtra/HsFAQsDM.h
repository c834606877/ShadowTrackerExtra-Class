//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsDomain;

@interface HsFAQsDM : NSObject
{
    id <HsPlatform> _platform;
    HsDomain *_domain;
    id <HsFaqResponseParser> _faqResponseParser;
    _Bool _shouldSuggestFaqs;
}

- (void).cxx_destruct;
- (id)parseNetworkResponse:(id)arg1;
- (void)processEtagWithResponse:(id)arg1 withError:(id *)arg2;
- (id)faqResponseParserForContentType:(id)arg1;
- (_Bool)isEtagPresent;
- (void)removeEtagsForRoute:(id)arg1;
- (void)removeFAQsEtag;
- (id)faqForPublishId:(id)arg1 fromResponse:(id)arg2 withError:(id *)arg3;
- (id)faqSectionsFromResponse:(id)arg1 withError:(id *)arg2;
- (void)showNetowrkActivityIndicator:(_Bool)arg1;
- (id)addCommonNetworksToNetwork:(id)arg1 addEtagNetwork:(_Bool)arg2 route:(id)arg3 error:(id *)arg4;
- (id)createNetworkForHelpfulness:(_Bool)arg1 faqId:(id)arg2 error:(id *)arg3;
- (id)createFetchSingleFaqNetworkWithPublishId:(id)arg1 error:(id *)arg2;
- (id)createFetchFaqSectionsNetworkWithError:(id *)arg1;
- (id)routeForSections;
- (id)routeForSingleFAQWithPublishId:(id)arg1;
- (_Bool)shouldSuggestFaqs;
- (void)setShouldSuggestFaqs:(_Bool)arg1;
- (void)markFAQHelpfulnessForID:(id)arg1 wasHelpful:(_Bool)arg2 error:(id *)arg3;
- (id)fetchSingleFAQWithPublishId:(id)arg1 language:(id)arg2 isAgentSuggested:(_Bool)arg3 error:(id *)arg4;
- (id)fetchFAQSectionsWithError:(id *)arg1;
- (id)fetchFAQSectionsViaSync:(_Bool)arg1 withError:(id *)arg2;
- (void)pushConversationViewController;
- (id)initWithPlatform:(id)arg1 domain:(id)arg2;

@end

