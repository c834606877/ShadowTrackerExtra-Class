//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMSDKMTAEnv, IMSDKMTAUser;

@interface IMSDKMTAHelper : NSObject
{
    IMSDKMTAEnv *env;
    IMSDKMTAUser *user;
    _Bool _MTAEnableFlag;
    _Bool _autoTM;
    _Bool _reportNewCrashReport;
}

+ (id)getInstance;
+ (_Bool)isWiFiAvailable;
+ (id)getCTTelephonyNetworkInfo;
+ (id)md5encrypt:(id)arg1;
+ (id)getMacAddress;
+ (int)GUnzip:(id)arg1 Out:(id *)arg2;
+ (int)GZip:(id)arg1 Out:(id *)arg2;
+ (void)ChiperRC4:(id)arg1;
@property _Bool reportNewCrashReport; // @synthesize reportNewCrashReport=_reportNewCrashReport;
@property _Bool autoTM; // @synthesize autoTM=_autoTM;
@property _Bool MTAEnableFlag; // @synthesize MTAEnableFlag=_MTAEnableFlag;
- (void).cxx_destruct;
- (id)getNetworkType;
- (id)getJson:(id)arg1;
- (_Bool)checkMTAEnable;
- (id)fetchSSIDInfo;
- (id)init;
- (id)getUser;
- (id)getEnv;

@end

