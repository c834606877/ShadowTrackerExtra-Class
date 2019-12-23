//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsMessageDM.h"

@interface HsAutoRetriableMessageDM : HsMessageDM
{
    unsigned long long _messageSyncState;
}

@property unsigned long long messageSyncState; // @synthesize messageSyncState=_messageSyncState;
- (void)sendAutoRetriableDMWithUser:(id)arg1 conversationServerInfo:(id)arg2 withError:(id *)arg3;
- (_Bool)isRetriable;
- (id)makeNetworkRequestWithRoute:(id)arg1 requestData:(id)arg2 withError:(id *)arg3;
- (void)merge:(id)arg1;
- (void)updateSyncState:(unsigned long long)arg1;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 messageType:(unsigned long long)arg4 isAgentMessage:(_Bool)arg5 messageSyncState:(unsigned long long)arg6;

@end

