//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasReportContainer, NSMutableArray;

@interface MidasReportManager : NSObject
{
    MidasReportContainer *_container;
    NSMutableArray *_listeners;
    NSMutableArray *_queueToAdd;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
+ (id)formatResultInfo:(id)arg1;
+ (id)formatErrorInfo:(id)arg1 code:(long long)arg2 msg:(id)arg3;
@property(retain, nonatomic) NSMutableArray *queueToAdd; // @synthesize queueToAdd=_queueToAdd;
@property(retain, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) MidasReportContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initMethod;
- (id)init;
- (void)processReportQueue:(id)arg1;
- (void)notify:(id)arg1;
- (void)appendToNextReport:(id)arg1;
- (void)removeReportListener:(id)arg1;
- (void)addReportListener:(id)arg1;
- (void)setReportDomains:(id)arg1 offerID:(id)arg2;
- (void)reportAll;
- (void)removeReport:(id)arg1;
- (void)insertReport:(id)arg1;
- (void)updateProcessUUID;
- (id)processUUID;

@end
