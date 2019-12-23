//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsPeriodicReviewDTO, NSDecimalNumber, NSString;

@interface HsRootServerConfigDTO : NSObject
{
    _Bool _requireNameAndEmail;
    _Bool _profileFormEnable;
    _Bool _showAgentName;
    _Bool _customerSatisfactionSurvey;
    _Bool _disableInAppConversation;
    _Bool _issueExists;
    _Bool _conversationalIssueFiling;
    _Bool _enableTypingIndicator;
    _Bool _showConversationResolutionQuestion;
    _Bool _conversationHistoryEnabled;
    _Bool _allowUserAttachments;
    _Bool _autoFillPreissue;
    int _debugLogLimit;
    int _breadcrumbLimit;
    NSString *_reviewUrl;
    HsPeriodicReviewDTO *_periodicReview;
    NSString *_conversationGreetingMessage;
    NSDecimalNumber *_lastRedactionAt;
    NSDecimalNumber *_profileCreatedAt;
    double _periodicFetchInterval;
    double _preIssueResetInterval;
}

@property(readonly, nonatomic) _Bool autoFillPreissue; // @synthesize autoFillPreissue=_autoFillPreissue;
@property(readonly, nonatomic) double preIssueResetInterval; // @synthesize preIssueResetInterval=_preIssueResetInterval;
@property(readonly, nonatomic) double periodicFetchInterval; // @synthesize periodicFetchInterval=_periodicFetchInterval;
@property(nonatomic) _Bool allowUserAttachments; // @synthesize allowUserAttachments=_allowUserAttachments;
@property(readonly, nonatomic) NSDecimalNumber *profileCreatedAt; // @synthesize profileCreatedAt=_profileCreatedAt;
@property(readonly, nonatomic) NSDecimalNumber *lastRedactionAt; // @synthesize lastRedactionAt=_lastRedactionAt;
@property(readonly, nonatomic) _Bool conversationHistoryEnabled; // @synthesize conversationHistoryEnabled=_conversationHistoryEnabled;
@property(readonly, nonatomic) _Bool showConversationResolutionQuestion; // @synthesize showConversationResolutionQuestion=_showConversationResolutionQuestion;
@property(readonly) _Bool enableTypingIndicator; // @synthesize enableTypingIndicator=_enableTypingIndicator;
@property(readonly) NSString *conversationGreetingMessage; // @synthesize conversationGreetingMessage=_conversationGreetingMessage;
@property(readonly) _Bool conversationalIssueFiling; // @synthesize conversationalIssueFiling=_conversationalIssueFiling;
@property(readonly, nonatomic) HsPeriodicReviewDTO *periodicReview; // @synthesize periodicReview=_periodicReview;
@property(readonly, nonatomic) NSString *reviewUrl; // @synthesize reviewUrl=_reviewUrl;
@property(readonly, nonatomic) int breadcrumbLimit; // @synthesize breadcrumbLimit=_breadcrumbLimit;
@property(readonly, nonatomic) int debugLogLimit; // @synthesize debugLogLimit=_debugLogLimit;
@property(readonly, nonatomic) _Bool issueExists; // @synthesize issueExists=_issueExists;
@property(readonly, nonatomic) _Bool disableInAppConversation; // @synthesize disableInAppConversation=_disableInAppConversation;
@property(readonly, nonatomic) _Bool customerSatisfactionSurvey; // @synthesize customerSatisfactionSurvey=_customerSatisfactionSurvey;
@property(readonly, nonatomic) _Bool showAgentName; // @synthesize showAgentName=_showAgentName;
@property(readonly, nonatomic) _Bool profileFormEnable; // @synthesize profileFormEnable=_profileFormEnable;
@property(readonly, nonatomic) _Bool requireNameAndEmail; // @synthesize requireNameAndEmail=_requireNameAndEmail;
- (void).cxx_destruct;
- (id)initWithRequireNameAndEmail:(_Bool)arg1 profileFormEnable:(_Bool)arg2 showAgentName:(_Bool)arg3 customerSatisfactionSurvey:(_Bool)arg4 disableInAppConversation:(_Bool)arg5 issueExists:(_Bool)arg6 debugLogLimit:(int)arg7 breadcrumbLimit:(int)arg8 reviewUrl:(id)arg9 periodicReview:(id)arg10 conversationalIssueFiling:(_Bool)arg11 conversationGreetingMessage:(id)arg12 enableTypingIndicator:(_Bool)arg13 showConversationResolutionQuestion:(_Bool)arg14 conversationHistoryEnabled:(_Bool)arg15 lastRedactionAt:(id)arg16 profileCreatedAt:(id)arg17 allowUserAttachments:(_Bool)arg18 periodicFetchInterval:(double)arg19 preIssueResetInterval:(double)arg20 autoFillPreissue:(_Bool)arg21;

@end

