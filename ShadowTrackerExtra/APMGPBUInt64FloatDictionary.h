//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APMGPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class APMGPBMessage, NSMutableDictionary;

@interface APMGPBUInt64FloatDictionary : NSObject <APMGPBDictionaryInternalsProtocol, NSCopying>
{
    APMGPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)removeAll;
- (void)removeFloatForKey:(unsigned long long)arg1;
- (void)setFloat:(float)arg1 forKey:(unsigned long long)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (_Bool)getFloat:(float *)arg1 forKey:(unsigned long long)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setAPMGPBGenericValue:(CDUnion_cf1021d0 *)arg1 forAPMGPBGenericValueKey:(CDUnion_cf1021d0 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFloats:(const float *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

