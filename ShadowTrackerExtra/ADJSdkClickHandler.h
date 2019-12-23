//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADJSdkClickHandler.h"

@class ADJBackoffStrategy, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface ADJSdkClickHandler : NSObject <ADJSdkClickHandler>
{
    _Bool _paused;
    NSString *_basePath;
    NSMutableArray *_packageQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    ADJBackoffStrategy *_backoffStrategy;
    id <ADJLogger> _logger;
    id <ADJActivityHandler> _activityHandler;
}

+ (id)handlerWithActivityHandler:(id)arg1 startsSending:(_Bool)arg2;
@property(nonatomic) __weak id <ADJActivityHandler> activityHandler; // @synthesize activityHandler=_activityHandler;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) ADJBackoffStrategy *backoffStrategy; // @synthesize backoffStrategy=_backoffStrategy;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMutableArray *packageQueue; // @synthesize packageQueue=_packageQueue;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
- (void).cxx_destruct;
- (void)sendNextSdkClickI:(id)arg1;
- (void)sendSdkClickI:(id)arg1 sdkClickPackage:(id)arg2;
- (void)initI:(id)arg1 activityHandler:(id)arg2 startsSending:(_Bool)arg3;
- (void)teardown;
- (void)sendNextSdkClick;
- (void)sendSdkClick:(id)arg1;
- (void)resumeSending;
- (void)pauseSending;
- (id)initWithActivityHandler:(id)arg1 startsSending:(_Bool)arg2;

@end

