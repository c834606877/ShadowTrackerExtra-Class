//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HsTimeUtil : NSObject
{
}

+ (id)getHumanReadableSinceFromDate:(id)arg1 toDate:(id)arg2;
+ (double)convertFromSecondsToMillis:(unsigned long long)arg1;
+ (double)convertFromMinutesToMillis:(unsigned long long)arg1;
+ (double)convertFromHoursToMillis:(unsigned long long)arg1;
+ (id)getCurrentTimeString;
+ (double)getCurrentTimeInMillis;
+ (double)getCurrentTime;

@end

