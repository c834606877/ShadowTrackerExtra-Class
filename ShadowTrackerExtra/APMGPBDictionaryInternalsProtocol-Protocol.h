//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class APMGPBCodedOutputStream, APMGPBFieldDescriptor;

@protocol APMGPBDictionaryInternalsProtocol
- (void)enumerateForTextFormat:(void (^)(id, id))arg1;
- (void)setAPMGPBGenericValue:(CDUnion_cf1021d0 *)arg1 forAPMGPBGenericValueKey:(CDUnion_cf1021d0 *)arg2;
- (void)writeToCodedOutputStream:(APMGPBCodedOutputStream *)arg1 asField:(APMGPBFieldDescriptor *)arg2;
- (unsigned long long)computeSerializedSizeAsField:(APMGPBFieldDescriptor *)arg1;
@end
