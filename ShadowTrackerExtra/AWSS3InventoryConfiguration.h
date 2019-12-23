//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3InventoryDestination, AWSS3InventoryFilter, AWSS3InventorySchedule, NSArray, NSNumber, NSString;

@interface AWSS3InventoryConfiguration : AWSModel
{
    AWSS3InventoryDestination *_destination;
    AWSS3InventoryFilter *_filter;
    NSString *_identifier;
    long long _includedObjectVersions;
    NSNumber *_isEnabled;
    NSArray *_optionalFields;
    AWSS3InventorySchedule *_schedule;
}

+ (id)scheduleJSONTransformer;
+ (id)includedObjectVersionsJSONTransformer;
+ (id)filterJSONTransformer;
+ (id)destinationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWSS3InventorySchedule *schedule; // @synthesize schedule=_schedule;
@property(retain, nonatomic) NSArray *optionalFields; // @synthesize optionalFields=_optionalFields;
@property(retain, nonatomic) NSNumber *isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) long long includedObjectVersions; // @synthesize includedObjectVersions=_includedObjectVersions;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AWSS3InventoryFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) AWSS3InventoryDestination *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;

@end
