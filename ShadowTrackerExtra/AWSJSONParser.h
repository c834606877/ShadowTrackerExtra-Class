//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWSJSONParser : NSObject
{
}

+ (id)serializeMember:(id)arg1 value:(id)arg2 target:(id)arg3 error:(id *)arg4;
+ (id)serializeMap:(id)arg1 values:(id)arg2 target:(id)arg3 error:(id *)arg4;
+ (id)serializeList:(id)arg1 values:(id)arg2 target:(id)arg3 error:(id *)arg4;
+ (id)serializeStructure:(id)arg1 values:(id)arg2 target:(id)arg3 error:(id *)arg4;
+ (id)findMemberName:(id)arg1 structureRules:(id)arg2;
+ (id)dictionaryForJsonData:(id)arg1 response:(id)arg2 actionName:(id)arg3 serviceDefinitionRule:(id)arg4 error:(id *)arg5;
+ (_Bool)failWithCode:(long long)arg1 description:(id)arg2 error:(id *)arg3;

@end

