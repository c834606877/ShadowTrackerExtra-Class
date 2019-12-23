//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsDomain, HsSDKConfigurationDM, NSMutableArray;

@interface HsMetaDataDM : NSObject
{
    id <HsPlatform> _platform;
    HsDomain *_domain;
    HsSDKConfigurationDM *_sdkConfigurationDM;
    NSMutableArray *_debugLogQueue;
    CDUnknownBlockType _customMetadataObjectBlock;
    id <HsMetaDataDAO> _metaDataDAO;
}

- (void).cxx_destruct;
- (id)cleanedUpTagsArray:(id)arg1;
- (id)sanitizedCustomMetadata:(id)arg1;
- (void)clearCustomMetadata;
- (id)customMetadata;
- (void)setCustomMetadata:(id)arg1;
- (void)setCustomMetadataObjectBlock:(CDUnknownBlockType)arg1;
- (void)resizeQueueWithLimit:(unsigned long long)arg1;
- (id)debugLogs;
- (void)addDebugLog:(id)arg1;
- (id)breadcumbs;
- (id)breadcrumbDTOs;
- (void)clearBreadcrumbs;
- (void)leaveBreadcrumb:(id)arg1;
- (id)diskSpaceDictionary;
- (id)extraInfoWithUserIdentifier:(id)arg1;
- (id)deviceInfo;
- (id)metaInfoWithCustomIdentifier:(id)arg1 pushToken:(id)arg2;
- (id)initWithDomain:(id)arg1 platform:(id)arg2 sdkConfigurationDM:(id)arg3 withError:(id *)arg4;

@end

