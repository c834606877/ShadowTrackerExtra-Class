//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "APMGPBMessage.h"

@class ApmCommonInfo, NSData;

@interface ApmDataPb : APMGPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *buff; // @dynamic buff;
@property(nonatomic) _Bool hasInfo; // @dynamic hasInfo;
@property(retain, nonatomic) ApmCommonInfo *info; // @dynamic info;

@end

