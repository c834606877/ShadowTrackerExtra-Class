//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface TWTRPersistentStoreObject : NSObject
{
    NSString *_key;
    unsigned long long _size;
    NSDate *_accessDate;
}

@property(retain, nonatomic) NSDate *accessDate; // @synthesize accessDate=_accessDate;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

