//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BLYCommonUploadLogic.h"

@class BLYJceObjectV2, BLYSummaryInfo;

@interface BLYAnalyticsLogic : BLYCommonUploadLogic
{
    BLYJceObjectV2 *_jceModel;
    BLYSummaryInfo *_summaryInfo;
}

@property(retain, nonatomic) BLYSummaryInfo *summaryInfo; // @synthesize summaryInfo=_summaryInfo;
- (void)setJceModel:(id)arg1;
- (void).cxx_destruct;
- (_Bool)shouldUpload;
- (void)reportSuccessed:(_Bool)arg1;
- (void)persistentSuccessed:(_Bool)arg1;
- (_Bool)shouldPersist;
- (_Bool)isConcurrent;
- (_Bool)asynchronous;
- (id)jceCMDString;
- (id)persistFileKey;
- (long long)persistType;
- (id)userInfoPackage;
- (id)jceModel;
- (id)initWithSummaryInfo:(id)arg1;

@end

