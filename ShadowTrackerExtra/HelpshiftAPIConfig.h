//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HelpshiftFAQFilter, HelpshiftSupportMetaData, NSArray, NSDictionary, NSString;

@interface HelpshiftAPIConfig : NSObject
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
    int _enableContactUs;
    NSString *_conversationPrefillText;
    NSArray *_customContactUsFlows;
    HelpshiftFAQFilter *_withTagsMatching;
    HelpshiftSupportMetaData *_customMetaData;
    NSDictionary *_customIssueFields;
    NSDictionary *_extraConfig;
}

+ (id)fromDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *extraConfig; // @synthesize extraConfig=_extraConfig;
@property(retain, nonatomic) NSDictionary *customIssueFields; // @synthesize customIssueFields=_customIssueFields;
@property(retain, nonatomic) HelpshiftSupportMetaData *customMetaData; // @synthesize customMetaData=_customMetaData;
@property(retain, nonatomic) HelpshiftFAQFilter *withTagsMatching; // @synthesize withTagsMatching=_withTagsMatching;
@property(retain, nonatomic) NSArray *customContactUsFlows; // @synthesize customContactUsFlows=_customContactUsFlows;
@property(retain, nonatomic) NSString *conversationPrefillText; // @synthesize conversationPrefillText=_conversationPrefillText;
@property(nonatomic) int enableContactUs; // @synthesize enableContactUs=_enableContactUs;
@property(nonatomic) _Bool enableTypingIndicator; // @synthesize enableTypingIndicator=_enableTypingIndicator;
@property(nonatomic) _Bool showConversationInfoScreen; // @synthesize showConversationInfoScreen=_showConversationInfoScreen;
@property(nonatomic) _Bool showConversationResolutionQuestion; // @synthesize showConversationResolutionQuestion=_showConversationResolutionQuestion;
@property(nonatomic) _Bool showSearchOnNewConversation; // @synthesize showSearchOnNewConversation=_showSearchOnNewConversation;
@property(nonatomic) _Bool enableFullPrivacy; // @synthesize enableFullPrivacy=_enableFullPrivacy;
@property(nonatomic) _Bool hideNameAndEmail; // @synthesize hideNameAndEmail=_hideNameAndEmail;
@property(nonatomic) _Bool requireEmail; // @synthesize requireEmail=_requireEmail;
@property(nonatomic) _Bool presentFullScreenOniPad; // @synthesize presentFullScreenOniPad=_presentFullScreenOniPad;
@property(nonatomic) _Bool gotoConversationAfterContactUs; // @synthesize gotoConversationAfterContactUs=_gotoConversationAfterContactUs;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)copy;
- (id)initWithBuilder:(id)arg1;
- (id)init;

@end

