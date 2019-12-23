//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LineSDKAccessToken, NSObject<OS_dispatch_queue>, NSString;

@interface LineSDKAccessTokenCache : NSObject
{
    LineSDKAccessToken *_accessToken;
    NSString *_channelID;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(copy, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (_Bool)removeWithError:(id *)arg1;
- (_Bool)updateWithAccessToken:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) LineSDKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
- (id)readAccessTokenFromCache;
- (void)handleRemovedNotification:(id)arg1;
- (void)handleUpdatedCacheNotification:(id)arg1;
- (void)dealloc;
- (id)initWithChannelID:(id)arg1;

@end

