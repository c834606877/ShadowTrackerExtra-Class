//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMAppMetadata : NSObject
{
    int _lastBundleIndex;
    double _lastBundleStartTimestamp;
    double _lastBundleEndTimestamp;
}

@property(nonatomic) double lastBundleEndTimestamp; // @synthesize lastBundleEndTimestamp=_lastBundleEndTimestamp;
@property(nonatomic) double lastBundleStartTimestamp; // @synthesize lastBundleStartTimestamp=_lastBundleStartTimestamp;
@property(readonly, nonatomic) int lastBundleIndex; // @synthesize lastBundleIndex=_lastBundleIndex;
- (void)incrementLastBundleIndex;
- (id)initWithLastBundleIndex:(int)arg1 lastBundleStartTimestamp:(double)arg2 lastBundleEndTimestamp:(double)arg3;

@end

