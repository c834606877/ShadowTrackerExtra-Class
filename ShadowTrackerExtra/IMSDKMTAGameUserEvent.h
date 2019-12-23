//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKMTAEvent.h"

#import "IMSDKMTAEventProtocol.h"

@class NSString;

@interface IMSDKMTAGameUserEvent : IMSDKMTAEvent <IMSDKMTAEventProtocol>
{
    NSString *_uid;
    NSString *_world;
    NSString *_level;
}

@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *world; // @synthesize world=_world;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)init;
- (void)encode:(id)arg1;
- (int)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

