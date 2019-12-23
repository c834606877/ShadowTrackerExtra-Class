//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface GADAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSOperationQueue *_audioSessionQueue;
    _Bool _audioSessionStateSaved;
    NSString *_savedAudioSessionCategory;
    NSString *_savedAudioSessionMode;
    unsigned long long _savedAudioSessionCategoryOption;
    _Bool _enabled;
    _Bool _wasOtherAppAudioInterrupted;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)resumeBackgroundAppAudioIfInterruptedWithQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setMixable:(_Bool)arg1 userInitiated:(_Bool)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)restoreState;
- (void)disable;
- (void)enable;
- (id)init;

@end

