//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface GADOMIDJSTimer : NSObject
{
    id <GADOMIDJSInvoker> _jsInvoker;
    NSMutableSet *_timerIds;
    unsigned long long _timerIdCounter;
}

@property(readonly, nonatomic) unsigned long long timerIdCounter; // @synthesize timerIdCounter=_timerIdCounter;
@property(readonly, nonatomic) NSMutableSet *timerIds; // @synthesize timerIds=_timerIds;
@property(nonatomic) __weak id <GADOMIDJSInvoker> jsInvoker; // @synthesize jsInvoker=_jsInvoker;
- (void).cxx_destruct;
- (void)cancelAllTimers;
- (void)cancelTimerWithId:(id)arg1;
- (void)handleTimerWithId:(id)arg1 timeout:(double)arg2 callback:(id)arg3 repeatable:(_Bool)arg4;
- (void)scheduleTimerWithId:(id)arg1 timeout:(double)arg2 callback:(id)arg3 repeatable:(_Bool)arg4;
- (id)scheduleTimerWithTimeout:(id)arg1 callback:(id)arg2 repeatable:(_Bool)arg3;
- (void)setupMethodsForJSObject:(id)arg1;
- (id)init;

@end

