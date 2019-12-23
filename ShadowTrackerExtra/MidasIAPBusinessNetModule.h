//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidasKeyStoreObserver.h"

@class MidasAddrHelper, MidasIAPHttpReq, MidasKeyStore, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MidasIAPBusinessNetModule : NSObject <MidasKeyStoreObserver>
{
    NSMutableArray *_taskFIFOBuffer;
    NSObject<OS_dispatch_queue> *_taskRunningQueue;
    MidasKeyStore *_keyStore;
    _Bool _changedKey;
    MidasAddrHelper *_hostHelper;
    NSMutableArray *_reqs;
    MidasIAPHttpReq *_activeTask;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) MidasAddrHelper *hostHelper; // @synthesize hostHelper=_hostHelper;
- (void).cxx_destruct;
- (void)reallyNeedToCallbackAllTaskByCode:(long long)arg1 msg:(id)arg2;
- (id)findReqByResp:(id)arg1;
- (void)popFrontSerialTask;
- (void)runConcurrentTask:(id)arg1;
- (void)continueCurrentTask;
- (void)runSerialTask;
- (void)pushTask:(id)arg1;
- (void)onUpdateFailErrorCode:(long long)arg1 innerCode:(id)arg2 msg:(id)arg3;
- (void)onUpdateSuccess;
- (id)urlByTaskType:(unsigned long long)arg1 useDomain:(_Bool)arg2;
- (void)cleanAllTask;
- (id)getGetKeyUrl:(_Bool)arg1;
- (void)runSerialTaskForCombine:(id)arg1;
- (void)addTask:(id)arg1;
- (void)setLocale:(id)arg1 env:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

