//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HSCategoryTagsFilter, NSArray, NSDictionary, NSString;

@interface HsRootApiConfigDTOBuilder : NSObject
{
    _Bool _gotoConversationAfterContactUs;
    _Bool _presentFullScreenOniPad;
    _Bool _requireEmail;
    _Bool _hideNameAndEmail;
    _Bool _enableFullPrivacy;
    _Bool _showSearchOnNewConversation;
    _Bool _showConversationResolutionQuestion;
    _Bool _showConversationInfoScreen;
    _Bool _enableTypingIndicator;
    _Bool _hideThanksAlertAfterIssueFiling;
    _Bool _enableDefaultConversationalFiling;
    int _enableContactUs;
    NSString *_conversationPrefillText;
    NSString *_initialUserMessage;
    HSCategoryTagsFilter *_withTagsMatching;
    NSArray *_customContactUsFlows;
    NSDictionary *_customIssueFields;
}

@property(readonly, nonatomic) NSDictionary *customIssueFields; // @synthesize customIssueFields=_customIssueFields;
@property(nonatomic) _Bool enableDefaultConversationalFiling; // @synthesize enableDefaultConversationalFiling=_enableDefaultConversationalFiling;
@property(nonatomic) _Bool hideThanksAlertAfterIssueFiling; // @synthesize hideThanksAlertAfterIssueFiling=_hideThanksAlertAfterIssueFiling;
@property(readonly, nonatomic) NSArray *customContactUsFlows; // @synthesize customContactUsFlows=_customContactUsFlows;
@property(readonly, nonatomic) HSCategoryTagsFilter *withTagsMatching; // @synthesize withTagsMatching=_withTagsMatching;
@property(readonly, nonatomic) _Bool enableTypingIndicator; // @synthesize enableTypingIndicator=_enableTypingIndicator;
@property(readonly, nonatomic) _Bool showConversationInfoScreen; // @synthesize showConversationInfoScreen=_showConversationInfoScreen;
@property(readonly, nonatomic) NSString *initialUserMessage; // @synthesize initialUserMessage=_initialUserMessage;
@property(readonly, nonatomic) NSString *conversationPrefillText; // @synthesize conversationPrefillText=_conversationPrefillText;
@property(readonly, nonatomic) int enableContactUs; // @synthesize enableContactUs=_enableContactUs;
@property(readonly, nonatomic) _Bool showConversationResolutionQuestion; // @synthesize showConversationResolutionQuestion=_showConversationResolutionQuestion;
@property(readonly, nonatomic) _Bool showSearchOnNewConversation; // @synthesize showSearchOnNewConversation=_showSearchOnNewConversation;
@property(readonly, nonatomic) _Bool enableFullPrivacy; // @synthesize enableFullPrivacy=_enableFullPrivacy;
@property(readonly, nonatomic) _Bool hideNameAndEmail; // @synthesize hideNameAndEmail=_hideNameAndEmail;
@property(readonly, nonatomic) _Bool requireEmail; // @synthesize requireEmail=_requireEmail;
@property(nonatomic) _Bool presentFullScreenOniPad; // @synthesize presentFullScreenOniPad=_presentFullScreenOniPad;
@property(readonly, nonatomic) _Bool gotoConversationAfterContactUs; // @synthesize gotoConversationAfterContactUs=_gotoConversationAfterContactUs;
- (void).cxx_destruct;
- (short)categoryOperatorFromHsOperator:(int)arg1;
- (id)build;
- (void)applyConfig:(id)arg1;

@end

