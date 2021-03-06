//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString;

@interface TLocation : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *m_LocationManager;
    _Bool m_IsLocationReady;
    double _latitude;
    double _longitude;
}

+ (id)sharedInstance;
@property double longitude; // @synthesize longitude=_longitude;
@property double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (_Bool)IsLocationReady;
- (void)StartLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

