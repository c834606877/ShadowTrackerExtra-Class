//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HsFaqSearchDb : NSObject
{
    NSObject<OS_dispatch_queue> *workerQueue;
}

+ (id)scoreFromString:(id)arg1;
+ (id)stringOfScore:(id)arg1;
+ (void)clear;
+ (id)query:(id)arg1;
+ (void)store:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;

@end

