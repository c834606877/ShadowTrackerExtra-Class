//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "TWTRJSONConvertible.h"

@class NSDictionary, NSString, NSURL;

@interface TWTRVideoMetaDataVariant : NSObject <NSCoding, NSCopying, TWTRJSONConvertible>
{
    long long _bitrate;
    NSString *_contentType;
    NSURL *_URL;
    NSDictionary *_validatedDictionary;
}

+ (id)validateJSONDictionary:(id)arg1;
+ (id)JSONValidator;
@property(copy, nonatomic) NSDictionary *validatedDictionary; // @synthesize validatedDictionary=_validatedDictionary;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
- (void).cxx_destruct;
- (_Bool)isEqualToVariant:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPropertiesFromValidatedDictionary:(id)arg1;
- (id)initWithValidatedDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

