//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWSTask, NSString;

@protocol AWSIdentityProviderManager <NSObject>
- (AWSTask *)logins;

@optional
@property(readonly, nonatomic) NSString *customRoleArn;
@end

