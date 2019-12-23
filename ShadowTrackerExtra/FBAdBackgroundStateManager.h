//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAdBackgroundStateManaging.h"

@class NSString;

@interface FBAdBackgroundStateManager : NSObject <FBAdBackgroundStateManaging>
{
    unsigned long long _extensionState;
}

@property unsigned long long extensionState; // @synthesize extensionState=_extensionState;
- (long long)applicationState;
- (_Bool)isApplicationBecomingActive;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

