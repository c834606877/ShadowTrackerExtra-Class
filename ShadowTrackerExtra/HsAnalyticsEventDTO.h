//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface HsAnalyticsEventDTO : NSObject
{
    NSString *_ID;
    unsigned long long _type;
    NSDictionary *_data;
    NSString *_timestamp;
}

@property(readonly) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSDictionary *data; // @synthesize data=_data;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)initWithEventId:(id)arg1 type:(unsigned long long)arg2 data:(id)arg3 timestamp:(id)arg4;

@end
