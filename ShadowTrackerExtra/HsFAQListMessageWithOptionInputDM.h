//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsFAQListMessageDM.h"

@class HsOptionInput, NSArray;

@interface HsFAQListMessageWithOptionInputDM : HsFAQListMessageDM
{
    NSArray *_readFAQs;
    HsOptionInput *_input;
}

@property(retain) HsOptionInput *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (_Bool)isUISupported;
- (void)sendSuggestionsReadEvent:(id)arg1 user:(id)arg2 questionServerId:(id)arg3 questionPublishId:(id)arg4 withError:(id *)arg5;
- (void)populateReadFAQs;
- (void)updateDependenciesWithPlatform:(id)arg1 domain:(id)arg2;
- (void)merge:(id)arg1;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 faqs:(id)arg4 botInfo:(id)arg5 required:(_Bool)arg6 inputLabel:(id)arg7 skipLabel:(id)arg8 options:(id)arg9 isSuggestionsReadEventSent:(_Bool)arg10 suggestionsReadFAQPublishId:(id)arg11;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 faqs:(id)arg4 botInfo:(id)arg5 required:(_Bool)arg6 inputLabel:(id)arg7 skipLabel:(id)arg8 options:(id)arg9;

@end
