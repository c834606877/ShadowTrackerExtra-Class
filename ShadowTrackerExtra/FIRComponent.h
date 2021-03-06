//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, Protocol;

@interface FIRComponent : NSObject
{
    Protocol *_protocol;
    long long _instantiationTiming;
    NSArray *_dependencies;
    CDUnknownBlockType _creationBlock;
}

+ (id)componentWithProtocol:(id)arg1 instantiationTiming:(long long)arg2 dependencies:(id)arg3 creationBlock:(CDUnknownBlockType)arg4;
+ (id)componentWithProtocol:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(readonly, copy, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) long long instantiationTiming; // @synthesize instantiationTiming=_instantiationTiming;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)arg1 instantiationTiming:(long long)arg2 dependencies:(id)arg3 creationBlock:(CDUnknownBlockType)arg4;

@end

