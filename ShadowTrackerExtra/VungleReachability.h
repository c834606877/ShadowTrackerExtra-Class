//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VungleReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    _Bool _wifiAvailable;
    _Bool _networkAvailable;
}

@property(nonatomic) _Bool networkAvailable; // @synthesize networkAvailable=_networkAvailable;
@property(nonatomic) _Bool wifiAvailable; // @synthesize wifiAvailable=_wifiAvailable;
- (void)dealloc;
- (id)initWithReachabilityURL:(id)arg1;

@end

