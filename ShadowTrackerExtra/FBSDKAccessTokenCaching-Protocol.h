//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKAccessToken;

@protocol FBSDKAccessTokenCaching <NSObject>
@property(copy, nonatomic) FBSDKAccessToken *accessToken;
- (void)clearCache;
@end

