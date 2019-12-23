//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSS3Grantee : AWSModel
{
    NSString *_displayName;
    NSString *_emailAddress;
    NSString *_identifier;
    long long _types;
    NSString *_URI;
}

+ (id)typesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *URI; // @synthesize URI=_URI;
@property(nonatomic) long long types; // @synthesize types=_types;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

@end
