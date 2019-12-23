//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FApplePlatformObject.h"

#import "MTLHeap.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface FMTLHeap : FApplePlatformObject <MTLHeap>
{
    unsigned long long PurgableState;
    struct FPThreadsCriticalSection *PoolMutex;
    NSMutableSet *Resources;
    NSMutableArray *BufferBuckets[46];
    struct TMap<FMetalTextureDesc, NSMutableSet<id<MTLTexture>>*, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FMetalTextureDesc, NSMutableSet<id<MTLTexture>>*, false>> TextureCache;
    NSString *label;
    id <MTLDevice> device;
    unsigned long long storageMode;
    unsigned long long cpuCacheMode;
    unsigned long long size;
    unsigned long long usedSize;
    unsigned long long poolSize;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (CDStruct_eb6fb79d *)classAllocator;
@property(readonly) unsigned long long poolSize; // @synthesize poolSize;
@property(readonly) unsigned long long usedSize; // @synthesize usedSize;
@property(readonly) unsigned long long size; // @synthesize size;
@property(readonly) unsigned long long cpuCacheMode; // @synthesize cpuCacheMode;
@property(readonly) unsigned long long storageMode; // @synthesize storageMode;
@property(readonly) id <MTLDevice> device; // @synthesize device;
@property(copy) NSString *label; // @synthesize label;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drain:(_Bool)arg1;
- (void)aliasTexture:(id)arg1;
- (void)aliasBuffer:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDescriptor:(struct FMTLHeapDescriptor *)arg1;

// Remaining properties
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

