//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsAutoRetriableMessageDM.h"

@interface HsConfirmationRejectedMessageDM : HsAutoRetriableMessageDM
{
}

- (void)sendAutoRetriableDMWithUser:(id)arg1 conversationServerInfo:(id)arg2 withError:(id *)arg3;
- (_Bool)isUISupported;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 messageSyncState:(unsigned long long)arg4;

@end

