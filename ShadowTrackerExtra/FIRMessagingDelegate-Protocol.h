//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRMessaging, FIRMessagingRemoteMessage, NSString;

@protocol FIRMessagingDelegate <NSObject>

@optional
- (void)messaging:(FIRMessaging *)arg1 didReceiveMessage:(FIRMessagingRemoteMessage *)arg2;
- (void)messaging:(FIRMessaging *)arg1 didReceiveRegistrationToken:(NSString *)arg2;
@end

