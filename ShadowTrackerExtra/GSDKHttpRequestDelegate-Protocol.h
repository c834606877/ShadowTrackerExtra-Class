//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GSDKHttpRequest, NSString;

@protocol GSDKHttpRequestDelegate <NSObject>

@optional
- (void)resolver:(GSDKHttpRequest *)arg1 getControlError:(NSString *)arg2;
- (void)resolver:(GSDKHttpRequest *)arg1 didGetControlInfo:(NSString *)arg2;
@end

