//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADSignal.h"
#import "GADSignalSource.h"

@class GADAdData, GADLocation, GADWindowScene, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSSet, NSString, UIViewController;

@interface GADTargeting : NSObject <GADSignalSource, GADSignal>
{
    NSArray *_categoryExclusions;
    NSString *_contentURLString;
    NSArray *_neighboringContentURLStrings;
    NSDictionary *_customTargeting;
    NSDictionary *_networkExtrasMap;
    NSString *_publisherProvidedID;
    NSDictionary *_additionalRequestSignals;
    NSMutableDictionary *_signalSources;
    NSArray *_adTypes;
    GADAdData *_adData;
    NSArray *_keywords;
    GADLocation *_location;
    long long _gender;
    NSDate *_birthday;
    NSArray *_testDeviceIdentifiers;
    NSNumber *_childDirectedTreatment;
    NSString *_requestAgent;
    NSString *_requestOrigin;
    UIViewController *_rootViewController;
    NSString *_userIdentifier;
    NSString *_customRewardString;
    NSSet *_nativeAdTypes;
    NSString *_adUnitID;
    GADWindowScene *_scene;
    struct GADAdSize _adSize;
}

@property(nonatomic) __weak GADWindowScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(retain, nonatomic) NSSet *nativeAdTypes; // @synthesize nativeAdTypes=_nativeAdTypes;
@property(nonatomic) struct GADAdSize adSize; // @synthesize adSize=_adSize;
@property(copy, nonatomic) NSString *customRewardString; // @synthesize customRewardString=_customRewardString;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(copy, nonatomic) NSString *requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property(readonly, nonatomic) NSString *requestAgent; // @synthesize requestAgent=_requestAgent;
@property(readonly, nonatomic) NSNumber *childDirectedTreatment; // @synthesize childDirectedTreatment=_childDirectedTreatment;
@property(readonly, nonatomic) NSArray *testDeviceIdentifiers; // @synthesize testDeviceIdentifiers=_testDeviceIdentifiers;
@property(readonly, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) GADLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) GADAdData *adData; // @synthesize adData=_adData;
@property(readonly, nonatomic) NSArray *adTypes; // @synthesize adTypes=_adTypes;
- (void).cxx_destruct;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
- (void)getSignalUpdateQueue:(id *)arg1 signalCreationBlock:(CDUnknownBlockType *)arg2;
@property(readonly, nonatomic) _Bool testModeEnabled;
- (id)networkExtrasForClass:(Class)arg1;
- (id)networkExtrasForAdapterClass:(Class)arg1;
- (void)setSignalSource:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *signalSources;
- (id)initWithRequest:(id)arg1 adUnitID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

