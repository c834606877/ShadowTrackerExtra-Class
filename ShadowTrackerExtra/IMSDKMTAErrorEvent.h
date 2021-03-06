//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMSDKMTAEvent.h"

#import "IMSDKMTAEventProtocol-Protocol.h"

@class NSString;

@interface IMSDKMTAErrorEvent : IMSDKMTAEvent <IMSDKMTAEventProtocol>
{
    unsigned int _attr;
    NSString *_error;
    NSString *_availableMemory;
    NSString *_freeDiskSpace;
    NSString *_processName;
}

@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
@property(copy, nonatomic) NSString *availableMemory; // @synthesize availableMemory=_availableMemory;
@property unsigned int attr; // @synthesize attr=_attr;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
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

