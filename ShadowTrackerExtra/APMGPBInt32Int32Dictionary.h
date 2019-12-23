//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APMGPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class APMGPBMessage, NSMutableDictionary;

@interface APMGPBInt32Int32Dictionary : NSObject <APMGPBDictionaryInternalsProtocol, NSCopying>
{
    APMGPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)removeAll;
- (void)removeInt32ForKey:(int)arg1;
- (void)setInt32:(int)arg1 forKey:(int)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (_Bool)getInt32:(int *)arg1 forKey:(int)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setAPMGPBGenericValue:(CDUnion_cf1021d0 *)arg1 forAPMGPBGenericValueKey:(CDUnion_cf1021d0 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndInt32sUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithInt32s:(const int *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

