//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADOMIDAdSessionConfiguration, NSDictionary, NSString;

@protocol GADOMIDSessionEventsPublisher <NSObject>
- (void)publishFinishEvent;
- (void)publishErrorWithType:(unsigned long long)arg1 errorMessage:(NSString *)arg2;
- (void)publishStartEventWithAdSessionId:(NSString *)arg1 JSONContext:(NSDictionary *)arg2 verificationParameters:(NSDictionary *)arg3;
- (void)publishInitWithConfiguration:(GADOMIDAdSessionConfiguration *)arg1;
@end

