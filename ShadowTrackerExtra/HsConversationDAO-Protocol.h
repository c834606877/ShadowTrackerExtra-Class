//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSConversation, HsMessageDM, NSArray, NSDictionary, NSNumber, NSString;

@protocol HsConversationDAO <NSObject>
- (void)deleteMessagesForConversationLocalId:(NSNumber *)arg1 withError:(id *)arg2;
- (HsMessageDM *)messageDMForMessageServerID:(NSString *)arg1 withError:(id *)arg2;
- (NSArray *)messagesForConversationIds:(NSArray *)arg1 withError:(id *)arg2;
- (NSDictionary *)messageCountsForConversationIds:(NSArray *)arg1 forMessageTypes:(NSArray *)arg2 withError:(id *)arg3;
- (NSArray *)messageDMsForConversationLocalId:(NSNumber *)arg1 createdBefore:(NSString *)arg2 withError:(id *)arg3;
- (NSArray *)messagesWithMessageType:(unsigned long long)arg1 forConversationLocalId:(NSNumber *)arg2 withError:(id *)arg3;
- (_Bool)insertOrUpdateMessageDMs:(NSArray *)arg1 withError:(id *)arg2;
- (NSString *)getOldestMessageCursorForUser:(NSNumber *)arg1;
- (NSString *)getOldestConversationCreatedAtTimeForUser:(NSNumber *)arg1;
- (NSString *)getLatestConversationCreatedAtTimeForUser:(NSNumber *)arg1;
- (NSNumber *)userLocalIdForConversationServerId:(NSString *)arg1 preconversationServerId:(NSString *)arg2 withError:(id *)arg3;
- (HSConversation *)preConversationForPreconversationServerId:(NSString *)arg1 withError:(id *)arg2;
- (HSConversation *)conversationForLocalId:(NSNumber *)arg1 withError:(id *)arg2;
- (HSConversation *)conversationForServerId:(NSString *)arg1 withError:(id *)arg2;
- (NSArray *)conversationsWithoutMessagesForUserLocalId:(NSNumber *)arg1 createOnOrBefore:(NSString *)arg2 withError:(id *)arg3;
- (_Bool)updateConversationWithoutMessages:(HSConversation *)arg1 withError:(id *)arg2;
- (void)updateConversation:(NSNumber *)arg1 withLastUserActivityTime:(double)arg2 withError:(id *)arg3;
- (_Bool)updateConversations:(NSArray *)arg1 updateInfo:(NSDictionary *)arg2 withError:(id *)arg3;
- (void)updateConversation:(HSConversation *)arg1 withError:(id *)arg2;
- (void)deleteConversationWithSDKId:(NSNumber *)arg1 withError:(id *)arg2;
- (void)deleteConversationsForUser:(NSNumber *)arg1 withError:(id *)arg2;
- (_Bool)insertPreconversation:(HSConversation *)arg1 withGreetingMessage:(HsMessageDM *)arg2 error:(id *)arg3;
- (_Bool)insertConversations:(NSArray *)arg1 withError:(id *)arg2;
- (void)dropAndRecreateWithPlatform:(id <HsPlatform>)arg1 error:(id *)arg2;
- (id)initWithPlatform:(id <HsPlatform>)arg1 withError:(id *)arg2;
@end

