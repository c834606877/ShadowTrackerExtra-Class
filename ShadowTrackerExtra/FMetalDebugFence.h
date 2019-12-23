//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FApplePlatformObject.h"

#import "MTLFence.h"

@class NSString;

@interface FMetalDebugFence : FApplePlatformObject <MTLFence>
{
    TLockFreePointerListLIFO_b3862b72 UpdatingEncoders;
    TLockFreePointerListLIFO_b3862b72 WaitingEncoders;
    NSString *Label;
    id <MTLFence> Inner;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (CDStruct_eb6fb79d *)classAllocator;
@property(retain) id <MTLFence> Inner; // @synthesize Inner;
- (id).cxx_construct;
- (void).cxx_destruct;
- (TLockFreePointerListLIFO_b3862b72 *)waitingEncoders;
- (TLockFreePointerListLIFO_b3862b72 *)updatingEncoders;
- (void)waitingEncoder:(id)arg1;
- (void)updatingEncoder:(id)arg1;
- (void)validate;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

