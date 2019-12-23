//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "TWTRJSONConvertible.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface TWTRVideoMetaData : NSObject <NSCoding, NSCopying, TWTRJSONConvertible>
{
    NSURL *_videoURL;
    NSArray *_variants;
    double _aspectRatio;
    double _duration;
    NSDictionary *_validatedDictionary;
}

+ (id)validateJSONDictionary:(id)arg1;
+ (id)JSONValidator;
@property(copy, nonatomic) NSDictionary *validatedDictionary; // @synthesize validatedDictionary=_validatedDictionary;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) NSArray *variants; // @synthesize variants=_variants;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (_Bool)isEqualToVideoMetaData:(id)arg1;
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

