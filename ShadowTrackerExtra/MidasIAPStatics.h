//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MidasIAPReportListenerProtocol-Protocol.h"

@class NSMutableArray;

@interface MidasIAPStatics : NSObject <MidasIAPReportListenerProtocol>
{
    NSMutableArray *_eventListeners;
}

+ (void)load;
@property(retain, nonatomic) NSMutableArray *eventListeners; // @synthesize eventListeners=_eventListeners;
- (void).cxx_destruct;
- (void)constructEventListeners;
- (void)onNotify:(id)arg1;
- (void)onReport:(id)arg1;
- (void)postEvent:(id)arg1;
- (void)addEventListener:(id)arg1;
- (void)cleanUp;
- (void)dealloc;
- (id)init;

@end

