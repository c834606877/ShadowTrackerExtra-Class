//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FGameCenterSessionDelegateMC;

@interface FGameCenterSessionDelegate : NSObject
{
    FGameCenterSessionDelegateMC *SessionMC;
}

@property(retain, nonatomic) FGameCenterSessionDelegateMC *SessionMC; // @synthesize SessionMC;
- (void)joinSession;
- (_Bool)sessionsAvailable;
- (void)shutdownSession;
- (void)dealloc;
- (id)initSessionWithName:(id)arg1;

@end

