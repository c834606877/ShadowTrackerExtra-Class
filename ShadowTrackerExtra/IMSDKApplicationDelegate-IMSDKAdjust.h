//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKApplicationDelegate.h"

#import "AdjustDelegate.h"

@interface IMSDKApplicationDelegate (IMSDKAdjust) <AdjustDelegate>
+ (void)handleUniversalLink:(id)arg1;
+ (void)load;
- (_Bool)isOpenDeeplink;
- (_Bool)adjustDeeplinkResponse:(id)arg1;
- (_Bool)adjust_application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)adjust_application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)adjust_application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 withGameSecret:(id)arg3;
- (void)dealloc;
@end

