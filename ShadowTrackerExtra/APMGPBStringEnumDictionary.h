//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APMGPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class APMGPBMessage, NSMutableDictionary;

@interface APMGPBStringEnumDictionary : NSObject <APMGPBDictionaryInternalsProtocol, NSCopying>
{
    APMGPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
    CDUnknownFunctionPointerType _validationFunc;
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setEnum:(int)arg1 forKey:(id)arg2;
- (void)removeAll;
- (void)removeEnumForKey:(id)arg1;
- (void)setRawValue:(int)arg1 forKey:(id)arg2;
- (void)addRawEntriesFromDictionary:(id)arg1;
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)getRawValue:(int *)arg1 forKey:(id)arg2;
- (_Bool)getEnum:(int *)arg1 forKey:(id)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setAPMGPBGenericValue:(CDUnion_cf1021d0 *)arg1 forAPMGPBGenericValueKey:(CDUnion_cf1021d0 *)arg2;
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_cf1021d0 *)arg2 keyDataType:(unsigned char)arg3;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(id *)arg3 count:(unsigned long long)arg4;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)init;

@end
