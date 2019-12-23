//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKFriendDelegate.h"

@class NSString;

@interface IMSDKFriendLineManager : NSObject <IMSDKFriendDelegate>
{
}

+ (id)urlEncode4Line:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)handleOpenURL:(id)arg1;
- (id)fetchSourceNameFromUrl:(id)arg1;
- (void)share:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)inviteWithContent:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)getFriendWithPage:(int)arg1 pageSize:(int)arg2 handle:(CDUnknownBlockType)arg3;
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSingleton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

