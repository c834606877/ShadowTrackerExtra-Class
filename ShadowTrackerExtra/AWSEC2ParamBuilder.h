//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AWSEC2ParamBuilder : NSObject
{
}

+ (id)upperCaseFirstChar:(id)arg1;
+ (id)queryName:(id)arg1 withDefaultName:(id)arg2;
+ (_Bool)serializeMember:(id)arg1 rules:(id)arg2 prefix:(id)arg3 formattedParams:(id)arg4 error:(id *)arg5;
+ (_Bool)serializeList:(id)arg1 rules:(id)arg2 prefix:(id)arg3 formattedParams:(id)arg4 error:(id *)arg5;
+ (_Bool)serializeStructure:(id)arg1 rules:(id)arg2 prefix:(id)arg3 formattedParams:(id)arg4 error:(id *)arg5;
+ (id)buildFormattedParams:(id)arg1 actionName:(id)arg2 serviceDefinitionRule:(id)arg3 error:(id *)arg4;
+ (_Bool)failWithCode:(long long)arg1 description:(id)arg2 error:(id *)arg3;

@end
