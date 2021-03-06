//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VungleTaskToBlockMapping : NSObject
{
    _Bool _isTerminating;
    NSMutableDictionary *_taskToOperation;
    NSMutableDictionary *_operationToBlock;
}

@property(retain, nonatomic) NSMutableDictionary *operationToBlock; // @synthesize operationToBlock=_operationToBlock;
@property(retain, nonatomic) NSMutableDictionary *taskToOperation; // @synthesize taskToOperation=_taskToOperation;
@property(nonatomic) _Bool isTerminating; // @synthesize isTerminating=_isTerminating;
- (void).cxx_destruct;
- (id)taskIdentifierForOperation:(id)arg1;
- (id)description;
- (void)cleanupMapping;
- (void)removeTask:(id)arg1;
- (void)removeTaskWhileTerminating:(id)arg1 forOperation:(id)arg2;
- (void)removeMappingsForOperation:(id)arg1;
- (void)removeOperationWhileTerminating:(id)arg1 withTaskKey:(id)arg2;
- (void)replaceTask:(id)arg1 withNewTask:(id)arg2;
- (void)addOperation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)addTask:(id)arg1 withOperation:(id)arg2;
- (unsigned long long)objectsCount;
- (CDUnknownBlockType)blockForOperation:(id)arg1;
- (id)operationForTask:(id)arg1;
- (CDUnknownBlockType)blockForTask:(id)arg1;
- (unsigned long long)stateForTask:(id)arg1;
- (id)keyForOperation:(id)arg1;
- (id)keyForTask:(id)arg1;
- (id)init;

@end

