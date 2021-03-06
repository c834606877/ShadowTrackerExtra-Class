//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsKeyValueStorage-Protocol.h"

@class NSString;

@interface HsKeyValueDbStorage : NSObject <HsKeyValueStorage>
{
    NSString *_namespace;
}

@property(retain, nonatomic) NSString *namespace; // @synthesize namespace=_namespace;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)destroyStorage;
- (void)initStorage;
- (void)initStorageWithNamespace:(id)arg1;
- (id)getTableName;
- (id)escapeKey:(id)arg1;

@end

