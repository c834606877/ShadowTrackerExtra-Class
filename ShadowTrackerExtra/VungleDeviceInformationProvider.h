//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface VungleDeviceInformationProvider : NSObject
{
    _Bool _batterySaverEnabled;
    _Bool _adTrackingEnabled;
    float _batteryLevel;
    NSString *_systemVersion;
    NSString *_machineName;
    NSString *_userAgent;
    NSString *_connectionQuality;
    NSString *_connectionDetail;
    double _systemVolume;
    NSString *_batteryState;
    NSDictionary *_consentInfo;
    double _screenScale;
    unsigned long long _availableDiscSpace;
    NSString *_pluginName;
    struct CGSize _screenSize;
}

+ (id)sharedProvider;
+ (id)appendPublisherInformation:(id)arg1 VDUIDProvider:(id)arg2 toDeviceInfo:(id)arg3;
@property(copy, nonatomic) NSString *pluginName; // @synthesize pluginName=_pluginName;
@property(nonatomic) unsigned long long availableDiscSpace; // @synthesize availableDiscSpace=_availableDiscSpace;
@property(nonatomic) _Bool adTrackingEnabled; // @synthesize adTrackingEnabled=_adTrackingEnabled;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(nonatomic) _Bool batterySaverEnabled; // @synthesize batterySaverEnabled=_batterySaverEnabled;
@property(copy, nonatomic) NSDictionary *consentInfo; // @synthesize consentInfo=_consentInfo;
@property(copy, nonatomic) NSString *batteryState; // @synthesize batteryState=_batteryState;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) double systemVolume; // @synthesize systemVolume=_systemVolume;
@property(copy, nonatomic) NSString *connectionDetail; // @synthesize connectionDetail=_connectionDetail;
@property(copy, nonatomic) NSString *connectionQuality; // @synthesize connectionQuality=_connectionQuality;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
- (void).cxx_destruct;
- (id)deviceInformationWithModel:(id)arg1 userAgent:(id)arg2 systemVersion:(id)arg3 systemVolume:(double)arg4 screenSize:(struct CGSize)arg5 screenScale:(double)arg6 bytesAvailable:(unsigned long long)arg7 connectionQuality:(id)arg8 connectionDetail:(id)arg9 batteryLevel:(float)arg10 batteryState:(id)arg11 batterySaverEnabled:(_Bool)arg12 adTrackingEnabled:(_Bool)arg13;
- (void)updateInformation;
- (void)updateBatteryInformation;
- (void)updateAdTracking;
- (void)updateBatterySaverEnabled;
- (void)updateBatteryState;
- (void)updateBatteryLevel;
- (void)endBatteryMonitoring;
- (void)beginBatteryMonitoring;
- (void)updateConnectionDetail;
- (void)updateFreeSpace;
- (void)updateSystemVolume;
- (void)updateScreenScale;
- (void)updateScreenSize;
- (void)updateSystemVersion;
- (void)updateMachineName;
- (void)updateUserAgent;
- (id)informationWithConnectionQuality:(id)arg1;
- (id)init;

@end

