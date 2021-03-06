//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BLYJCEBaseObject.h"

#import "NSSecureCoding-Protocol.h"

@interface BLYJceObject : BLYJCEBaseObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)jceType;
+ (id)fromData:(id)arg1;
+ (id)object;
+ (id)objectWithName:(id)arg1 andType:(id)arg2 inAttributes:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)description;
- (void)__unpack:(id)arg1;
- (void)__pack:(id)arg1;
- (id)jceType;
- (id)toData;
- (id)fromData:(id)arg1;
- (void)setInAttributes:(id)arg1 withName:(id)arg2 andType:(id)arg3;

@end

