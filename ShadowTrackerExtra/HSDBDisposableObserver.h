//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HSDBDisposableObserver : NSObject
{
    NSObject *_observedObject;
    NSString *_observedKeyPath;
    unsigned long long _observationOptions;
    CDUnknownBlockType _observationCallback;
}

@property(copy, nonatomic) CDUnknownBlockType observationCallback; // @synthesize observationCallback=_observationCallback;
@property(nonatomic) unsigned long long observationOptions; // @synthesize observationOptions=_observationOptions;
@property(copy, nonatomic) NSString *observedKeyPath; // @synthesize observedKeyPath=_observedKeyPath;
@property(nonatomic) __weak NSObject *observedObject; // @synthesize observedObject=_observedObject;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObservation;
- (id)initWithObservedObject:(id)arg1 observedKeyPath:(id)arg2 observationOptions:(unsigned long long)arg3 observationCallback:(CDUnknownBlockType)arg4;

@end

